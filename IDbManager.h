#ifndef IDBMANAGER_H
#define IDBMANAGER_H

class IDBManager{
public:
    virtual int getUserRepository() = 0;
    virtual int getCategoryRepository() = 0;
    virtual int getTransactionRepository() = 0;
};

#endif // IDBMANAGER_H
