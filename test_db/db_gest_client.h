#ifndef DB_GEST_CLIENT_H
#define DB_GEST_CLIENT_H
#include "client.h"


class db_gest_client
{
public:
// Constructor
    db_gest_client();

// Functions
    void create_client(Client c);
    void delete_client(Client c);
    void modify_client(Client c);
    void print_client(Client c);
};

#endif // DB_GEST_CLIENT_H
