#ifndef DB_GEST_ORDER_H
#define DB_GEST_ORDER_H
#include "order.h"


class db_gest_order
{
public:
// Constructor
    db_gest_order();

// Functions
    void create_order(order o);
    void delete_order(order o);
    void modify_order(order o);
    void print_order(order o);
};

#endif // DB_GEST_ORDER_H
