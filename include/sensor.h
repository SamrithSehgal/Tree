#ifndef BUILD_TREE_H
#define BUILD_TREE_H

#include "decode.h"
#include <postgresql/libpq-fe.h>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <cstdlib>
using namespace std;

class Sensor {
    public:
        tree createOneTree(vector<int> requestedAttr, PGconn* con);
        tree createManyTrees(vector<vector<int>>, PGconn *con);
    private:
        map<int, map<string, string>> data = {{1, {{"Time", "10:03"}}}, {2, {{"Image", "Image1.png"}}}, {3, {{"Mac List", "1213413"}}}};
};

#endif // BUILD_TREE_H
