#include <iostream>

class client{
private : 
    int IDClient;
    std::string sirname;
    std::string name;
    std::string payment_address1;
    std::string delivery_address1;
    std::string payment_address2;
    std::string delivery_address2;
    std::string birthday;

public :
    // Constructor
    client();

    // Getters
    int get_ID();
    std::string get_sir();
    std::string get_name();
    std::string get_pay_add1();
    std::string get_del_add1();
    std::string get_pay_add2();
    std::string get_del_add2();
    std::string get_birthday();    

    // Setters
    int set_ID();
    std::string set_sir();
    std::string set_name();
    std::string set_pay_add1();
    std::string set_del_add1();
    std::string set_pay_add2();
    std::string set_del_add2();
    std::string set_birthday();
};