#ifndef TREE_H
#define TREE_H

#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <any>
#include <boost/serialization/map.hpp>
#include <boost/serialization/string.hpp>
using namespace std;




class tree {
    
    public:

        struct Node {
            public:
            map<int, Node> children;
            map<string, int> info;
            map<string, string> data;
            Node() = default;

            Node(const map<string, string>& data, map<string, int>& info); // supposed to be object

            template<class Archive>
            void serialize(Archive & ar, const unsigned int version){
                ar & children;
                ar & info;
                ar & data;
            }
        };

        map<int, Node> tree;
        void printTree();
        void insertNode(const map<string, string>& data, int parentId, int id, int sensorId, int null);
        map<int, map<int, int>> flattenTree();

        template<class Archive>
        void serialize(Archive & ar, const unsigned int version){
            ar & tree;
        }
};

#endif // TREE_H
