#ifndef HANDLERFACTORY_H
#define HANDLERFACTORY_H

#include <Poco/Net/HTTPRequestHandlerFactory.h>
#include <map>
#include <memory>
#include "IDbManager.h"

namespace handlers
{

class HandlerFactory : public Poco::Net::HTTPRequestHandlerFactory
{
private:
    std::shared_ptr <IDBManager> manager;

    std::map <std::string, IHandler*> handlers;

    HandlerFactory();
    Poco::Net::HTTPRequestHandler* createRequestHandler(const Poco::Net::HTTPServerRequest& request) override;

public:
    void addHandler(std::string uri, IHandler* handler);
};

}
#endif // HANDLERFACTORY_H
