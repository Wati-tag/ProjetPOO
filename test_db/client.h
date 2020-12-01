#ifndef CLIENT_H
#define CLIENT_H
#include <iostream>

class Client
{
private:
    int IDClient;
    std::string sirname;
    std::string name;
    std::string address_pay_1;
    std::string town_pay_1;
    int PC_pay_1;
    std::string address_pay_2;
    std::string town_pay_2;
    int PC_pay_2;
    std::string address_del_1;
    std::string town_del_1;
    int PC_del_1;
    std::string address_del_2;
    std::string town_del_2;
    int PC_del_2;
    std::string birthday;

public:
// Constructor
    Client();

// Getters
    int get_id();
    std::string get_sirname();
    std::string get_name();
    std::string get_address_pay_1();
    std::string get_town_pay_1();
    int get_PC_pay_1();
    std::string get_address_pay_2();
    std::string get_town_pay_2();
    int get_PC_pay_2();
    std::string get_address_del_1();
    std::string get_town_del_1();
    int get_PC_del_1();
    std::string get_address_del_2();
    std::string get_town_del_2();
    int get_PC_del_2();
    std::string get_birthday();

// Setters
    void set_id(int var);
    void set_sirname(std::string var);
    void set_name(std::string var);
    void set_address_pay_1(std::string var);
    void set_town_pay_1(std::string var);
    void set_PC_pay_1(int var);
    void set_address_pay_2(std::string var);
    void set_town_pay_2(std::string var);
    void set_PC_pay_2(int var);
    void set_address_del_1(std::string var);
    void set_town_del_1(std::string var);
    void set_PC_del_1(int var);
    void set_address_del_2(std::string var);
    void set_town_del_2(std::string var);
    void set_PC_del_2(int var);
    void set_birthday(std::string var);

};

#endif // CLIENT_H
