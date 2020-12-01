#ifndef ARTICLE_H
#define ARTICLE_H
#include <iostream>

class Article
{
private:
    int IDArticle;
    std::string ref;
    std::string article;
    std::string design;
    float price;
    int quantity;
    int tax;
    int restock;

public:
// Constructor
    Article();

// Getters
    int get_id();
    std::string get_ref();
    std::string get_art();
    std::string get_design();
    float get_price();
    int get_quantity();
    int get_tax();
    int get_restock();

// Setters
    void set_id(int var);
    void set_ref(std::string var);
    void set_art(std::string var);
    void set_design(std::string var);
    void set_price(float var);
    void set_quantity(int var);
    void set_tax(int var);
    void set_restock(int var);
};

#endif // ARTICLE_H
