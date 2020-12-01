#include <iostream>

class article{
private : 
    int IDArticle;
    std::string Article_ref;
    std::string Article;
    std::string Designation;
    int Quantity;
    int tax;
    int restock;

public :
    // Constructor
    article();

    // Getters
    int get_ID();
    std::string get_ref();
    std::string get_article();
    std::string get_design();
    int get_quantity();
    int get_tax();
    int get_restock();

    // Setters
    int set_ID();
    std::string set_ref();
    std::string set_article();
    std::string set_design();
    int set_quantity();
    int set_tax();
    int set_restock();

};