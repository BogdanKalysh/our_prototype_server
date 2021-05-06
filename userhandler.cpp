#include "userhandler.h"
#include "userparser.h"
#include "user.h"


UserHandler::UserHandler(){
    parser.reset(new UserParser);
}

void UserHandler::handleRequest(
    Poco::Net::HTTPServerRequest& request,
        Poco::Net::HTTPServerResponse& response){

    if(request.getMethod() == Poco::Net::HTTPRequest::HTTP_GET){

    }else if(request.getMethod() == Poco::Net::HTTPRequest::HTTP_POST){
        std::istream &body = request.stream();

        std::string sBody;
        std::getline(body,sBody);
        QString qBody = QString::fromStdString(sBody);
        QByteArray br = qBody.toUtf8();
        QJsonDocument doc = QJsonDocument::fromJson(br);
        QJsonObject obj = doc.object();

        User user = parser.get()->parse(obj);



    }else if(request.getMethod() == Poco::Net::HTTPRequest::HTTP_PUT){

    }else if(request.getMethod() == Poco::Net::HTTPRequest::HTTP_DELETE){

    }
}

UserHandler::~UserHandler(){

}
