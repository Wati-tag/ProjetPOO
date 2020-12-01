#ifndef ORDER_H
#define ORDER_H
#include <iostream>

class order
{
private:
    int IDOrder;
    int IDclient;
    std::string ref;
    std::string order_date;
    std::string payment_date;
    std::string payment_method;
    int payment_type;

public:
// Constructor
    order();

// Getters
    int get_id();
    int get_client();
    std::string get_ref();
    std::string get_order_date();
    std::string get_pay_date();
    std::string get_pay_method();
    int get_pay_type();

// Setters
    void set_id(int var);
    void set_client(int var);
    void set_ref(std::string var);
    void set_order_date(std::string var);
    void set_pay_date(std::string var);
    void set_pay_method(std::string var);
    void set_pay_type(int var);


};

#endif // ORDER_H
