#ifndef DB_GEST_ART_H
#define DB_GEST_ART_H
#include "article.h"


class db_gest_art
{
public:
// Constructor
    db_gest_art();

// Functions
    void create_article(Article a);
    void delete_article(Article a);
    void modify_article(Article a);
    void print_product(Article a);
};

#endif // DB_GEST_ART_H
