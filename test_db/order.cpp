#include "order.h"

// Constructor
    order::order()
    {

    }

// Getters
    int order::get_id(){
        return IDOrder;
    }

    int order::get_client(){
        return IDclient;
    }

    std::string order::get_ref(){
        return ref;
    }

    std::string order::get_order_date(){
        return order_date;
    }

    std::string order::get_pay_date(){
        return payment_date;
    }

    std::string order::get_pay_method(){
        return payment_method;
    }

    int order::get_pay_type(){
        return payment_type;
    }


// Setters
    void order::set_id(int var){
        IDOrder = var;
    }

    void order::set_client(int var){
        IDclient = var;
    }

    void order::set_ref(std::string var){
        ref = var;
    }

    void order::set_order_date(std::string var){
        order_date = var;
    }

    void order::set_pay_date(std::string var){
        payment_date = var;
    }

    void order::set_pay_method(std::string var){
        payment_method = var;
    }

    void order::set_pay_type(int var){
        payment_type = var;
    }
