#include "employee.h"

// Constructor
employee::employee(){

}

// Getters
    int employee::get_id(){
        return IDemployee;
    }

    std::string employee::get_sir(){
        return sirname;
    }

    std::string employee::get_name(){
        return name;
    }

    std::string employee::get_address(){
        return address;
    }

    std::string employee::get_town(){
        return town;
    }

    int employee::get_PC(){
        return PC;
    }

    std::string employee::get_emp(){
        return employment;
    }

    int employee::get_sup_id(){
        return IDSuperior;
    }


// Setters
    void employee::set_id(int var){
        IDemployee = var;
    }

    void employee::set_sir(std::string var){
        sirname = var;
    }

    void employee::set_name(std::string var){
        name = var;
    }

    void employee::set_address(std::string var){
        address = var;
    }

    void employee::set_town(std::string var){
        town = var;
    }

    void employee::set_PC(int var){
        PC = var;
    }

    void employee::set_emp(std::string var){
        employment = var;
    }

    void employee::set_sup_id(int var){
        IDSuperior = var;
    }
