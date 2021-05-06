#ifndef APPLICATIONSERVICE_H
#define APPLICATIONSERVICE_H

#include <Poco/Util/ServerApplication.h>
#include <Poco/Net/HTTPServer.h>
#include <Poco/Net/ServerSocketImpl.h>


class ApplicationService : public Poco::Util::ServerApplication
{
public:
    ApplicationService();


};

#endif // APPLICATIONSERVICE_H
