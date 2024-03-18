#include "./include/sensor.h"

tree Sensor::createManyTrees(vector<vector<int>> listOfAttrs, PGconn* con){
    PGresult* results = PQexec(con, "SELECT * FROM attributes;");
    if(PQresultStatus(results) != PGRES_TUPLES_OK){
        cerr << "Query failed: " << PQresultErrorMessage(results) << endl;
        PQclear(results);
        PQfinish(con);
    }

    int numRows = PQntuples(results);

    int nodeId = 1;
    int branchId;
    int numTrees = listOfAttrs.size();

    tree nodeTree;

    for(int x = 0; x < numTrees; x++){
        nodeTree.insertNode({}, 0, nodeId, 1, 1);
        nodeId++;
    }

    for(int tree = 0; tree < numTrees; tree++){
        vector<int> curTree = listOfAttrs[tree];
        for(int i = 0; i < numRows; i++){
            int id = atoi(PQgetvalue(results, i, 0));
            string attrName = (string) PQgetvalue(results, i, 1);
            if(data.find(id) != data.end() && std::find(curTree.begin(), curTree.end(), id) != curTree.end()){
                nodeTree.insertNode({{"attrName", attrName}}, tree+1, nodeId, -1, 1);
                branchId = nodeId;
                nodeId++;
                nodeTree.insertNode(data.at(id), branchId, nodeId, -1, 1);
                nodeId++;
            }
            else{
                nodeTree.insertNode({{"attrName", attrName}}, tree+1, nodeId, -1, 0);
                nodeId++;
                //cout << "Attribute Name: " << attrName << " Root #: " << tree+1 << " Id: " << nodeId << endl;
            }
        }
    }
    return nodeTree;
}

tree Sensor::createOneTree(vector<int> requestedAttrs, PGconn* con){
    PGresult* results = PQexec(con, "SELECT * FROM attributes;");
    if(PQresultStatus(results) != PGRES_TUPLES_OK){
        cerr << "Query failed: " << PQresultErrorMessage(results) << endl;
        PQclear(results);
        PQfinish(con);
    }

    int numRows = PQntuples(results);

    int nodeId = 1;
    int branchId = 1;

    tree nodeTree;
    nodeTree.insertNode({}, 0, nodeId, 1, 1);
    nodeId++;

    for(int i = 0; i < numRows; i++){
        int id = atoi(PQgetvalue(results, i, 0));
        string attrName = (string) PQgetvalue(results, i, 1);
        if(data.find(id) != data.end() && std::find(requestedAttrs.begin(), requestedAttrs.end(), id) != requestedAttrs.end()){
            nodeTree.insertNode({{"attrName", attrName}}, 1, nodeId, -1, 1);
            branchId = nodeId;
            nodeId++;
            nodeTree.insertNode(data.at(id), branchId, nodeId, -1, 1);
            nodeId++;
        }
        else{
            nodeTree.insertNode({{"attrName", attrName}}, 1, nodeId, -1, 0);
            nodeId++;
        }
    }
    

    return nodeTree;
}