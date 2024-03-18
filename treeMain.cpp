#include "./include/decode.h"

int main(int argc, char const *argv[])
{

    vector<vector<int>> allAttrIds = {
        {2, 3},
        {1, 3},
        {1, 2, 3}
    };
    vector<int> oneAttrIds = {{2, 3}};
    Sensor sensor;
    tree createdTree = sensor.createManyTrees(allAttrIds);
    map<int, map<int, int>> flattenedTree = createdTree.flattenTree(); //redundant, just for show.
    decode::decodeTree(createdTree, flattenedTree); 
    //createdTree.printTree();

    /*PGconn *conn = attributeTable::connect();
    map<string, string> attributes;
    attributes["Time"] = "String";
    attributes["Image"] = "Png";
    attributes["Mac List"] = "ArrayList";
    attributeTable::addAttr(attributes, conn);
    PQfinish(conn);
    return 0;  */
} 