#ifndef DECODE_H
#define DECODE_H

#include <iostream>
#include <map>
#include <vector>
#include <string>
#include "tree.h"
#include "attributeTable.h"
#include "sensor.h"

class decode {
public:
    static tree createTree();
    static void decodeTreeVisual(tree& createdTree, bool ignoreNull);
    static void decodeTree(tree& createdTree, map<int, map<int, int>> flattenedTree);
};

#endif // DECODE_H
