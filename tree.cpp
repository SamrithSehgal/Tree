#include "./include/tree.h"


tree::Node::Node(const map<string, string>& data, map<string, int>& info){
    this->data = data;
    this->info = info;
}


void tree::printTree() {
    
    map<int, map<int, map<int, map<string, string>>>> treeList;
    map<int, map<string, string>> leaf;
    map<int, map<int, map<string, string>>> leafToBranch;
    for(const auto& [key, value] : tree){
        //cout << "Root #" << key << ": " << endl;
        for(const auto& [branchKey, branchValue] : value.children){
            //cout << "   Branch: " << branchValue.info.at("null") << endl;
            if(branchValue.children.size() != 0){
                for(const auto& [leafKey, leafValue]: branchValue.children){
                    leaf[leafKey] = leafValue.data;
                    //cout << "       Leaf: " << leafValue.info.at("null") << endl;
                }
            }
            leafToBranch[branchKey] = leaf;
            leaf.clear();
        }
        treeList[key] = leafToBranch;
        leafToBranch.clear();
    }
    for(const auto& [key, value] : treeList){
        cout << "Root #" << key << ": " << endl;
        for(const auto& [branchKey, branchValue] : value){
            cout << "   Branch #" << branchKey << ": " << endl;
            for(const auto& [leafKey, leafValue] : branchValue){
                cout << "       Leaf #" << leafKey << ": " << endl;
                for(const auto& [dataKey, dataValue] : leafValue){
                    cout << "           { " << dataKey << ": " << dataValue << " }" << ", " << endl;
                }
            }
        }
        cout << endl;
    }

}

void tree::insertNode(const map<string, string>& data, int parentId, int id, int sensorId, int null) {
    map<string, int> info;
    if (sensorId != -1) {
        info = {{"id", id}, {"sensorType", sensorId}, {"null", null}};
    }
    else{
        info = {{"id", id}, {"null", null}};
    }

    

    Node node(data, info);
    if (parentId == 0) { //can do this for every typeId because right now when inserting branch it checks through branch ids too for parent id
        //cout << "creating root: " << id << endl << endl;
        tree[id] = node;
    } else {
        for(const auto& [rootId, value] : tree){
            bool insereted = false;
            //cout << "Root:" << rootId << endl << endl;
            if(rootId == parentId){
                //cout << "adding to root: " << rootId << ": " << parentId << ": " << id << endl << endl;
                tree[rootId].children[id] = node;
                //cout << "Root #" << rootId << ": " << tree[rootId].children.size() << endl;
                break;
            }
            else{
                for(const auto& [branchKey, branchValue] : value.children){
                    //cout << "Branch:" << branchKey << endl << endl;
                    if(branchKey == parentId){
                        //cout << "adding to branch: " << rootId << ": " << branchKey << " = " << parentId << ": " << id << endl << endl;
                        insereted = true;
                        tree[rootId].children[branchKey].children[id] = node;
                        if(null == 0){
                            tree[rootId].children[branchKey].info.at("null") = 0;
                        }
                        break;
                    }
                    //cout << "Branch #" << branchKey << ": " << tree[rootId].children[branchKey].children.size() << endl;

                }
                if(insereted){
                    break;
                }
            }
        }

        //cout << endl << endl;
        
    }
}

map<int, map<int, int>> tree::flattenTree(){
    map<int, map<int, int>> flattenedTree;
    map<int, int> data;
    for(const auto& [rootKey, rootValue] : tree){

        for(const auto& [branchKey, branchValue] : rootValue.children){
            data[branchKey] = branchValue.info.at("null");
        }
        flattenedTree[rootKey] = data;
        data.clear();
    }

    /*for(const auto& [rootKey, branch] : flattenedTree){
        cout << "Root #" << rootKey << endl;
        for(const auto& [branchKey, branchValue] : branch){
            cout << "   Branch #" << branchKey << endl;
            cout << "       Null: " << branchValue << endl;
        }
    } */
    return flattenedTree;
}