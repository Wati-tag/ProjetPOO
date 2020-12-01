#include "db_gest_client.h"
#include "client.h"
#include <iostream>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QVariant>

db_gest_client::db_gest_client()
{

}

void db_gest_client::create_client(Client c){
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("db_name");

    // Create the variables
    std::string str_val;
    float fl_val;
    int int_val;

    // Recuperate the name of the client
    str_val = n.line_value();
    c.set_name(str_val);
    str_val = "";

    // Recuperate the sirname of the client
    str_val = s.line_value();
    c.set_sirname(str_val);
    str_val = "";

    // Recuperate the first address of payment
    str_val = a.line_value();
    c.set_address_pay_1(str_val);
    str_val = "";
    str_val = t.line_value();
    c.set_town_pay_1(str_val);
    str_val = "";
    str_val = p.line_value();
    c.set_PC_pay_1(int_val);
    str_val = "";

    // Recuperate the second address of payment
    str_val = a.line_value();
    c.set_address_pay_2(str_val);
    str_val = "";
    str_val = t.line_value();
    c.set_town_pay_2(str_val);
    str_val = "";
    str_val = p.line_value();
    c.set_PC_pay_2(int_val);
    str_val = "";

    // Recuperate the first address of delivery
    str_val = a.line_value();
    c.set_address_del_1(str_val);
    str_val = "";
    str_val = t.line_value();
    c.set_town_del_1(str_val);
    str_val = "";
    str_val = p.line_value();
    c.set_PC_del_1(int_val);
    str_val = "";

    // Recuperate the second address of delivery
    str_val = a.line_value();
    c.set_address_del_2(str_val);
    str_val = "";
    str_val = t.line_value();
    c.set_town_del_2(str_val);
    str_val = "";
    str_val = p.line_value();
    c.set_PC_del_2(int_val);
    str_val = "";

    // Recuperate the birthday
    str_val = b.line_value();
    c.set_birthday(str_val);
    str_val = "";

    // Transcript the strings in Qvariant strings
    QVariant name = QString::fromStdString(c.get_name());
    QVariant sirname = QString::fromStdString(c.get_sirname());
    QVariant add_pay_1 = QString::fromStdString(c.get_address_pay_1());
    QVariant add_pay_2 = QString::fromStdString(c.get_address_pay_2());
    QVariant add_del_1 = QString::fromStdString(c.get_address_del_1());
    QVariant add_del_2 = QString::fromStdString(c.get_address_del_2());
    QVariant town_pay_1 = QString::fromStdString(c.get_town_pay_1());
    QVariant town_pay_2 = QString::fromStdString(c.get_town_pay_2());
    QVariant town_del_1 = QString::fromStdString(c.get_town_del_1());
    QVariant town_del_2 = QString::fromStdString(c.get_town_del_2());

    // Do the query to add the value
    QSqlQuery query;
    query.prepare("INSERT INTO client (name, sirname, add_pay_1, town_pay_1, pc_pay_1, add_pay_2, town_pay_2, pc_pay_2, add_del_1, town_del_1, pc_del_1, add_del_2, town_del_2, pc_del_2)"
                  "VALUEs (:name, :sirname, :add_pay_1, :town_pay_1, :pc_pay_1, :add_pay_2, :town_pay_2, :pc_pay_2, :add_del_1, :town_del_1, :pc_del_1, :add_del_2, :town_del_2, :pc_del_2)");
    query.bindValue(":name", name);
    query.bindValue(":sirname", sirname);
    query.bindValue(":add_pay_1", add_pay_1);
    query.bindValue(":town_pay_1", town_pay_1);
    query.bindValue(":pc_pay_1", c.get_PC_pay_1());
    query.bindValue(":add_pay_2", add_pay_2);
    query.bindValue(":town_pay_2", town_pay_2);
    query.bindValue(":pc_pay_2", c.get_PC_pay_2());
    query.bindValue(":add_del_1", add_del_1);
    query.bindValue(":town_del_1", town_del_1);
    query.bindValue(":pc_del_1", c.get_PC_del_1());
    query.bindValue(":add_del_2", add_del_2);
    query.bindValue(":town_del_2", town_del_2);
    query.bindValue(":pc_del_2", c.get_PC_del_2());
    query.exec();
}
