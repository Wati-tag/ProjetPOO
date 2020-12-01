#include "db_gest_emp.h"
#include "employee.h"
#include <iostream>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QVariant>

db_gest_emp::db_gest_emp()
{

}

void db_gest_emp::create_employee(){
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("db_name");

    // Create the variables
    std::string str_val;
    float fl_val;
    int int_val;
    employee * e = new employee();

    // Recuperate the name of the employee
    str_val = n.line_value();
    e->set_name(str_val);

    // Recuperate the sirname of the employee
    str_val = s.line_value();
    e->set_sir(str_val);

    // Recuperate the address of the employee
    str_val = a.line_value();
    e->set_address(str_val);
    str_val = t.line_value();
    e->set_town(str_val);
    str_val = p.line_value();
    e->set_PC(int_val);

    // Recuperate the employment date of the employee
    str_val = emp.line_value();
    e->set_emp(str_val);

    // Recuperate the supervisor ID
    int_val = sup.line_value();
    e->set_sup_id(int_val);

    // Transcript the strings in Qvariant strings
    QVariant name = QString::fromStdString(e->get_name());
    QVariant sirname = QString::fromStdString(e->get_sir());
    QVariant address = QString::fromStdString(e->get_address());
    QVariant town = QString::fromStdString(e->get_town());
    QVariant employment = QString::fromStdString(e->get_emp());

    // Do the query to add the value
    QSqlQuery query;
    query.prepare("INSERT INTO employees (name, sirname, add, town, pc, employment_date, sup_id)"
                  "VALUEs (:name, :sirname, :add, :town, :pc, :emp, :sup_id)");
    query.bindValue(":name", name);
    query.bindValue(":sirname", sirname);
    query.bindValue(":add", address);
    query.bindValue(":town", town);
    query.bindValue(":pc", e->get_PC());
    query.bindValue(":emp", employment);
    query.bindValue(":sup_id", e->get_sup_id());
    query.exec();

    // Delete the temporary objects
    delete e;
}

void db_gest_emp::delete_employee(){
    // Create the database connection
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("db_name");

    // Create local variables
    int id;

    // Getting id
    id = i.line_value();

    //Creating the query
    QSqlQuery query;
    query.prepare("DELETE FROM employees WHERE IDEmp = ?");
    query.addBindValue(id);
    query.exec();
}

void db_gest_emp::modify_employee(employee * e){
    // Create the database connection
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("db_name");

    // Create local variables
    int id;
    int int_var;
    QString str_rec;
    std::string str_var;
    employee * q = new employee();

    // Getting id
    id = i.line_value();

    // Realise the query
    QSqlQuery infos;
    infos.prepare("SELECT * FROM employees WHERE IDemp = ?");
    infos.addBindValue(id);

    // Put the name in the object
    str_rec = infos.value(1).toString();
    str_var = str_rec.toStdString();
    e->set_name(str_var);

    // Put the sirname in the object
    str_rec = infos.value(2).toString();
    str_var = str_rec.toStdString();
    e->set_sir(str_var);

    // Put the address in the object
    str_rec = infos.value(3).toString();
    str_var = str_rec.toStdString();
    e->set_address(str_var);

    // Put the town in the object
    str_rec = infos.value(4).toString();
    str_var = str_rec.toStdString();
    e->set_town(str_var);

    // Put the PC in the object
    int_var = infos.value(5).toInt();
    e->set_PC(int_var);

    // Put the employment date in the object
    str_rec = infos.value(6).toString();
    str_var = str_rec.toStdString();
    e->set_emp(str_var);

    // Put the sup id
    int_var = infos.value(7).toInt();
    e->set_sup_id(int_var);

    // Recuperate the name of the employee
    str_var = n.line_value();
    q->set_name(str_var);

    // Recuperate the sirname of the employee
    str_var = s.line_value();
    q->set_sir(str_var);

    // Recuperate the address of the employee
    str_var = a.line_value();
    q->set_address(str_var);
    str_var = t.line_value();
    q->set_town(str_var);
    str_var = p.line_value();
    q->set_PC(int_var);

    // Recuperate the employment date of the employee
    str_var = emp.line_value();
    q->set_emp(str_var);

    // Recuperate the supervisor ID
    int_var = sup.line_value();
    q->set_sup_id(int_var);

    // Transcript the strings in Qvariant strings
    QVariant name = QString::fromStdString(q->get_name());
    QVariant sirname = QString::fromStdString(q->get_sir());
    QVariant address = QString::fromStdString(q->get_address());
    QVariant town = QString::fromStdString(q->get_town());
    QVariant employment = QString::fromStdString(q->get_emp());

    // Do the query to add the value
    QSqlQuery query;
    query.prepare("UPDATE employees "
                  "SET name = :name, sirname = :sirname, add = :add, town = :town, pc = :pc, employment_date = :emp, sup_id = :sup_id"
                  "WHERE IDemployee = :id");
    query.bindValue(":name", name);
    query.bindValue(":sirname", sirname);
    query.bindValue(":add", address);
    query.bindValue(":town", town);
    query.bindValue(":pc", q->get_PC());
    query.bindValue(":emp", employment);
    query.bindValue(":sup_id", q->get_sup_id());
    query.bindValue(":id", id);
    query.exec();

    delete q;
}

void db_gest_emp::print_employees(QSqlRelationalTableModel tab_emp){
    tab_emp.setTable("employee");
}
