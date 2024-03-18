#include "./include/decode.h"

using namespace std;

tree decode::createTree() {
    tree nodeTree;
    nodeTree.insertNode({}, 0, 1, 1, 1); //m1
    nodeTree.insertNode({}, 0, 2, 2, 1); //m2

    //for m1
    nodeTree.insertNode({}, 1, 3, -1, 1); //a IE: time
    nodeTree.insertNode({}, 1, 4, -1, 1); //b IE: string
    //for m2
    nodeTree.insertNode({}, 2, 5, -1, 1); //a IE: time
    nodeTree.insertNode({}, 2, 6, -1, 1); //b IE: string

    //for m1
    
    nodeTree.insertNode({{"time", "14:00"}}, 3, 7, -1, 0); //time attr
    nodeTree.insertNode({{"string", "img1"}}, 4, 8, -1, 1); //string attr
    //for m2
    nodeTree.insertNode({{"time", "14:03"}}, 5, 9, -1, 1); //only time attr
    nodeTree.insertNode({{"string", "null"}}, 6, 10, -1, 0); // null string attr

    return nodeTree;
}

void decode::decodeTree(tree& createdTree, map<int, map<int, int>> flattenedTree) {
    tree nodeTree;

    for(const auto& [rootKey, rootValue] : createdTree.tree){
        nodeTree.insertNode(rootValue.data, 0, rootValue.info.at("id"), rootValue.info.at("sensorType"), rootValue.info.at("null"));
        for(const auto& [branchKey, branchValue] : rootValue.children){
            if(flattenedTree.at(rootKey).at(branchKey) == 1){
                nodeTree.insertNode(branchValue.data, rootKey, branchValue.info.at("id"), -1, branchValue.info.at("null"));
                for(const auto& [leafKey, leafValue] : branchValue.children){
                    nodeTree.insertNode(leafValue.data, branchKey, leafValue.info.at("id"), -1, leafValue.info.at("null"));
                }
            }
        }
    }
    nodeTree.printTree();
}



