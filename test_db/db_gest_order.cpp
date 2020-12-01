#include "db_gest_order.h"
#include <iostream>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QVariant>


db_gest_order::db_gest_order()
{

}

void db_gest_order::create_order(order o){
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("db_name");

    // Create the variables
    std::string str_val;
    float fl_val;
    int int_val;

    // Recuperate the reference of the order
    str_val = r.line_value();
    o.set_ref(str_val);
    str_val = "";

    // Recuperate the order date
    str_val = od.line_value();
    o.set_order_date(str_val);
    str_val = "";

    // Recuperate the payment date
    str_val = pd.line_value();
    o.set_pay_date(str_val);
    str_val = "";

    // Recuperate the payment mode
    str_val = pm.line_value();
    o.set_pay_method(str_val);
    str_val = "";

    // Recuperate the payment type
    int_val = pt.line_value();
    o.set_pay_type(int_val);
    int_val = 0;


    // Transcript the strings in Qvariant strings
    QVariant name = QString::fromStdString(o.);
    QVariant sirname = QString::fromStdString(e.get_sir());
    QVariant address = QString::fromStdString(e.get_address());
    QVariant town = QString::fromStdString(e.get_town());
    QVariant employment = QString::fromStdString(e.get_emp());

    // Do the query to add the value
    QSqlQuery query;
    query.prepare("INSERT INTO employees (name, sirname, add, town, pc, employment_date, sup_id)"
                  "VALUEs (:name, :sirname, :add, :town, :pc, :emp, :sup_id)");
    query.bindValue(":name", name);
    query.bindValue(":sirname", sirname);
    query.bindValue(":add", address);
    query.bindValue(":town", town);
    query.bindValue(":pc", e.get_PC());
    query.bindValue(":emp", employment);
    query.bindValue(":sup_id", e.get_sup_id());
    query.exec();
}
