#ifndef CONNECTION_H
#define CONNECTION_H


#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlError>
#include <QtSql/QSqlQuery>

class Connection
{
public:
    QSqlDatabase db;
    QSqlQuery query;


    Connection();
    bool ouvrirConnection();
    void fermerConnection();

};

#endif // CONNECTION_H
