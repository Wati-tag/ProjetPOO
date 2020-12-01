#include "db_gest_art.h"
#include "article.h"
#include <iostream>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QVariant>

db_gest_art::db_gest_art()
{

}

void db_gest_art::create_article(Article a){

    // Create the link to the database
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("db_name");

    // Create the variables
    std::string str_val;
    float fl_val;
    int int_val;

    // Recuperate the name of the article
    str_val = n.line_value();
    a.set_art(str_val);
    str_val = "";

    // Recuperate the reference of the article
    str_val = r.line_value();
    a.set_ref(str_val);
    str_val = "";

    // Recuperate the price of the article
    fl_val = p.line_value();
    a.set_price(fl_val);
    fl_val = 0;

    // Recuperate the designation of the article
    str_val = d.line_value();
    a.set_design(str_val);
    str_val = "";

    // Recuperate the quantity of the article
    int_val = q.line_value();
    a.set_quantity(int_val);
    int_val = 0;

    // Recuperate the tax of the article
    int_val = t.line_value();
    a.set_tax(int_val);
    int_val = 0;

    // Recuperate the restock of the article
    int_val = s.line_value();
    a.set_restock(int_val);
    int_val = 0;

    // Transcript the strings in Qvariant strings
    QVariant article = QString::fromStdString(a.get_art());
    QVariant reference = QString::fromStdString(a.get_ref());
    QVariant design = QString::fromStdString(a.get_design());

    // Do the query to add the value
    QSqlQuery query;
    query.prepare("INSERT INTO product (product, price, reference, designation, quantity, restock, tax)"
                  "VALUEs (:product, :price, :reference, :designation, :quantity, :restock, :tax)");
    query.bindValue(":product", article);
    query.bindValue(":price", a.get_price());
    query.bindValue(":reference", reference);
    query.bindValue(":designation", design);
    query.bindValue(":quantity", a.get_quantity());
    query.bindValue(":restock", a.get_restock());
    query.bindValue(":tax", a.get_tax());
    query.exec();
}
