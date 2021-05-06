#ifndef DBMANAGER_H
#define DBMANAGER_H

#include "IDbManager.h"

class DBManager : public IDBManager
{
public:
    int getUserRepository() override;
    int getCategoryRepository() override;
    int getTransactionRepository() override;
};

#endif // DBMANAGER_H
