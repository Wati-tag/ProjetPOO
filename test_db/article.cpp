#include "article.h"
#include <iostream>

// Constructor
Article::Article(){

}

// Getters
int Article::get_id(){
    return IDArticle;
}

std::string Article::get_ref(){
    return ref;
}

std::string Article::get_art(){
    return article;
}

std::string Article::get_design(){
    return design;
}

float Article::get_price(){
    return price;
}

int Article::get_quantity(){
    return quantity;
}

int Article::get_tax(){
    return tax;
}

int Article::get_restock(){
    return restock;
}

// Setters
void Article::set_id(int var){
    IDArticle = var;
}

void Article::set_ref(std::string var){
    ref = var;
}

void Article::set_art(std::string var){
    article = var;
}

void Article::set_design(std::string var){
    design = var;
}

void Article::set_price(float var){
    price = var;
}

void Article::set_quantity(int var){
    quantity = var;
}

void Article::set_tax(int var){
    tax = var;
}

void Article::set_restock(int var){
    restock = var;
}


