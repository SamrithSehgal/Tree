#include <postgresql/libpq-fe.h>
#include <map>
#include <string>
#include <cstdlib> 
#include <iostream>


using namespace std;

class attributeTable{
    public:
        static PGconn *connect();
        static void addAttr(map<string, string> info);
        static void createTable();
};