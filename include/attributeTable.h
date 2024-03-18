#include <postgresql/libpq-fe.h>
#include <map>
#include <string>
#include <cstdlib> 


using namespace std;

class attributeTable{
    public:
        static PGconn *connect();
        static void addAttr(map<string, string> info, PGconn *conn);
        static void createTable(PGconn *conn);
};