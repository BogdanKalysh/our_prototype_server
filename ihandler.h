#ifndef IHANDLER_H
#define IHANDLER_H

#include <Poco/Net/HTTPRequestHandler.h>
#include <Poco/Net/HTTPServerRequest.h>
#include <Poco/Net/HTTPServerResponse.h>
#include <Poco/JSON/Object.h>
#include "ijsonparser.h"
#include <memory>

template <typename T>
class IHandler : public Poco::Net::HTTPRequestHandler
{

public:
    std::shared_ptr <IJsonParser<T>> parser;

    virtual IHandler* getCopy() = 0;
    virtual void handleRequest(
        Poco::Net::HTTPServerRequest& request,
        Poco::Net::HTTPServerResponse& response) override;
    virtual ~IHandler();

};

#endif // IHANDLER_H
