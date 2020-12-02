#ifndef CLIENT_H
#define CLIENT_H
#include <QString>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlQueryModel>
#include <QDate>

class Client
{
public:
        Client();
        virtual ~Client();
        Client(QString,QString,QString,QString,QString,QString);
        QString GetDate() { return Date; }
        void SetDate(QString val) { Date = val; }
        QString GetPrenom() { return Prenom; }
        void SetPrenom(QString val) { Prenom = val; }
        QString GetProduit() { return Produit; }
        void SetProduit(int val) { Produit = val; }
        QString GetLivraison() { return Livraison; }
        void SetLivraison(QString val) { Livraison = val; }
        QString GetNom() { return Nom; }
        void SetNom(QString val) { Nom = val; }
        QString GetCIN() { return CIN; }
        void SetCIN(QString val) { CIN = val; }
        bool ajouter_Client();
         QSqlQueryModel * afficher_Client();
        bool supprimer(QString);
        bool modifier(QString CIN);
        QSqlQueryModel * recherche_Clienta(QString valeur);
        QSqlQueryModel * recherche_Clientd(QString valeur);
    private:
        QString CIN;
        QString Date;
        QString Livraison;
        QString Nom;
        QString Prenom;
        QString Produit;


};

#endif // CLIENT_H
