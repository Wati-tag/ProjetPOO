#ifndef DB_GEST_EMP_H
#define DB_GEST_EMP_H
#include "employee.h"
#include <QSqlDatabase>
#include <QtSql>
#include <QSqlQuery>
#include <QSqlTableModel>

class db_gest_emp
{
public:
// Constructor
    db_gest_emp();

// Functions
    void create_employee();
    void delete_employee();
    void modify_employee(employee * e);
    void print_employees(QSqlRelationalTableModel tab_emp);
    void print_employee();
};

#endif // DB_GEST_EMP_H
