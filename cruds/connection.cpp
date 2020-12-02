#include "connection.h"

Connection::Connection()
{

}

bool Connection::ouvrirConnection()
{
db = QSqlDatabase::addDatabase("QODBC");
db.setDatabaseName("terter_projet");//inserer le nom de la source de données ODBC
db.setUserName("tatar");//inserer nom de l'utilisateur
db.setPassword("tatar");//inserer mot de passe de cet utilisateur






if (db.open())


return true;
return false;

}




void Connection::fermerConnection()
{db.close();}
