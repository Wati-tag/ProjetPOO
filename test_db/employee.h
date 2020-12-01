#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>

class employee
{
private:
    int IDemployee;
    std::string sirname;
    std::string name;
    std::string address;
    std::string town;
    int PC;
    std::string employment;
    int IDSuperior;

public:
// Constructor
    employee();

// Getters
    int get_id();
    std::string get_sir();
    std::string get_name();
    std::string get_address();
    std::string get_town();
    int get_PC();
    std::string get_emp();
    int get_sup_id();

// Setters
    void set_id(int var);
    void set_sir(std::string var);
    void set_name(std::string var);
    void set_address(std::string var);
    void set_town(std::string var);
    void set_PC(int var);
    void set_emp(std::string var);
    void set_sup_id(int ID);

};

#endif // EMPLOYEE_H
