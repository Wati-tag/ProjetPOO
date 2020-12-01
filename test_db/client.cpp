#include "client.h"

// Constructor
    Client::Client(){

    }

// Getters
    int Client::get_id(){
        return IDClient;
    }

    std::string Client::get_sirname(){
        return sirname;
    }

    std::string Client::get_name(){
        return name;
    }

    std::string Client::get_address_pay_1(){
        return address_pay_1;
    }

    std::string Client::get_town_pay_1(){
        return town_pay_1;
    }

    int Client::get_PC_pay_1(){
        return PC_pay_1;
    }

    std::string Client::get_address_pay_2(){
        return address_pay_2;
    }

    std::string Client::get_town_pay_2(){
        return town_pay_2;
    }

    int Client::get_PC_pay_2(){
        return PC_pay_2;
    }

    std::string Client::get_address_del_1(){
        return address_del_1;
    }

    std::string Client::get_town_del_1(){
        return town_del_1;
    }

    int Client::get_PC_del_1(){
        return PC_del_1;
    }

    std::string Client::get_address_del_2(){
        return address_del_2;
    }

    std::string Client::get_town_del_2(){
        return town_del_2;
    }

    int Client::get_PC_del_2(){
        return PC_del_2;
    }

    std::string Client::get_birthday(){
        return birthday;
    }


// Setters
    void Client::set_id(int var){
        IDClient = var;
    }

    void Client::set_sirname(std::string var){
        sirname = var;
    }

    void Client::set_name(std::string var){
        name = var;
    }

    void Client::set_address_pay_1(std::string var){
        address_pay_1 = var;
    }

    void Client::set_town_pay_1(std::string var){
        town_pay_1 = var;
    }

    void Client::set_PC_pay_1(int var){
        PC_pay_1 = var;
    }

    void Client::set_address_pay_2(std::string var){
        address_pay_2 = var;
    }

    void Client::set_town_pay_2(std::string var){
        town_pay_2 = var;
    }

    void Client::set_PC_pay_2(int var){
        PC_pay_2 = var;
    }

    void Client::set_address_del_1(std::string var){
        address_del_1 = var;
    }

    void Client::set_town_del_1(std::string var){
        town_del_1 = var;
    }

    void Client::set_PC_del_1(int var){
        PC_del_1 = var;
    }

    void Client::set_address_del_2(std::string var){
        address_del_2 = var;
    }

    void Client::set_town_del_2(std::string var){
        town_del_2 = var;
    }

    void Client::set_PC_del_2(int var){
        PC_del_2 = var;
    }

    void Client::set_birthday(std::string var){
        birthday = var;
    }

