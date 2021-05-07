#ifndef IHANDLER_H
#define IHANDLER_H

#include <Poco/Net/HTTPRequestHandler.h>
#include <Poco/Net/HTTPServerRequest.h>
#include <Poco/Net/HTTPServerResponse.h>
#include <Poco/JSON/Object.h>
#include "ijsonparser.h"
#include "IDbManager.h"
#include <memory>
#include <Poco/JSON/Object.h>

//template <typename T>
class IHandler : public Poco::Net::HTTPRequestHandler
{
public:
//    std::shared_ptr <IJsonParser<T>> parser;
    std::shared_ptr <IDBManager> manager;
    virtual IHandler* getCopy() = 0;
    virtual QJsonObject convertIsteamToJson(std::istream &body) = 0;

    virtual void get(Poco::Net::HTTPServerRequest& request,
                     Poco::Net::HTTPServerResponse& response) = 0;
    virtual void post(Poco::Net::HTTPServerRequest& request,
                      Poco::Net::HTTPServerResponse& response) = 0;
    virtual void put(Poco::Net::HTTPServerRequest& request,
                     Poco::Net::HTTPServerResponse& response) = 0;
    virtual void del(Poco::Net::HTTPServerRequest& request,
                     Poco::Net::HTTPServerResponse& response) = 0;

//    virtual ~IHandler();
};

#endif // IHANDLER_H
