#include <iostream>

class employee{
private : 
    int IDemployee;
    std::string sirname;
    std::string name;
    std::string address;
    std::string employment_date;
    std::string supervisor_sirname;
    std::string supervisor_name;

public :
    // Constructor
    employee();

    // Getters
    int get_ID();
    std::string get_sir();
    std::string get_name();
    std::string get_add();
    std::string get_emp_date();
    std::string get_super_sir();
    std::string get_super_name();  

    // Setters
    int set_ID();
    std::string set_sir();
    std::string set_name();
    std::string set_add();
    std::string set_emp_date();
    std::string set_super_sir();
    std::string set_super_name();  
};