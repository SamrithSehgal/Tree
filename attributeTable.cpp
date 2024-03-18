#include "./include/attributeTable.h"

PGconn* attributeTable::connect() {
    PGconn *conn = nullptr;
    conn = PQconnectdb("dbname=attributes user=postgres password=samrith123 host=/var/run/postgresql");
    if (PQstatus(conn) != CONNECTION_OK) {
        cerr << "Connection to database failed: " << PQerrorMessage(conn) << endl;
        PQfinish(conn);
        exit(1);
    }
    return conn;
}

void attributeTable::addAttr(map<string, string> info) {
    PGconn *conn = connect();
    for (const auto &[k, v] : info) {
        string query = "INSERT INTO attributes(NAME, TYPE) VALUES('" + k + "', '" + v + "')";
        PGresult *res = PQexec(conn, query.c_str());
        if (PQresultStatus(res) != PGRES_COMMAND_OK) {
            cerr << "Failed to execute query: " << PQerrorMessage(conn) << endl;
            PQclear(res);
            exit(1);
        }
        PQclear(res);
    }
}

void attributeTable::createTable() {
    PGconn *conn = connect();
    const char *query = "CREATE TABLE attributes (ID SERIAL PRIMARY KEY NOT NULL, NAME VARCHAR(255) UNIQUE NOT NULL, TYPE VARCHAR(255) NOT NULL)";
    PGresult *res = PQexec(conn, query);
    if (PQresultStatus(res) != PGRES_COMMAND_OK) {
        cerr << "Failed to create table: " << PQerrorMessage(conn) << endl;
        PQclear(res);
        exit(1);
    }
    PQclear(res);
}

