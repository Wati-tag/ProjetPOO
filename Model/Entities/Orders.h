#include <iostream>

class orders{
private : 
    int IDorder;
    std::string order_ref;
    std::string order_date;
    std::string payment_date;
    std::string payment_method;
    int payment_type;

public :
    // Constructor
    orders();

    // Getters
    int get_ID();
    std::string get_order_ref();
    std::string get_order_date();
    std::string get_payment_date();
    std::string get_payment_method();
    int get_payment_type(); 

    // Setters
    int set_ID();
    std::string set_order_ref();
    std::string set_order_date();
    std::string set_payment_date();
    std::string set_payment_method();
    int set_payment_type();
};