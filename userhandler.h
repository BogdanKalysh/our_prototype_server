#ifndef USERHANDLER_H
#define USERHANDLER_H

#include "ihandler.h"

class UserHandler : public IHandler
{
public:
    void handleRequest(
            Poco::Net::HTTPServerRequest& request,
            Poco::Net::HTTPServerResponse& response) override;

};

#endif // USERHANDLER_H
