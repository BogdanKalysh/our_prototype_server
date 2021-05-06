#include "handlerfactory.h"
#include <Poco/Net/HTTPServerRequest.h>
#include <dbmanager.h>
#include "userhandler.h"

namespace handlers
{

HandlerFactory::HandlerFactory(){
    addHandler("/user", new UserHandler);
//    addHandler("/category", new CategoryHandler);
//    addHandler("/transaction", new TransactionHandler);

    manager.reset(new DBManager);
}

Poco::Net::HTTPRequestHandler* HandlerFactory::createRequestHandler(
    const Poco::Net::HTTPServerRequest& request)
{
    if(handlers[request.getURI()])
        return handlers[request.getURI()]->getCopy();
    return nullptr;
}

void HandlerFactory::addHandler(std::string uri, IHandler* handler){
    handlers[uri] = handler;
}

}
