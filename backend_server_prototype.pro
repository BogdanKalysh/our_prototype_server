QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    applicationservice.cpp \
    dbmanager.cpp \
    handlerfactory.cpp \
    main.cpp \
    user.cpp \
    userhandler.cpp \
    userparser.cpp

HEADERS += \
    applicationservice.h \
    constants.h \
    dbmanager.h \
    handlerfactory.h \
    idbmanager.h \
    ihandler.h \
    ijsonparser.h \
    user.h \
    userhandler.h \
    userparser.h

FORMS +=

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../poco_lib/poco/cmake-build/lib/release/ -lPocoData.71 -lPocoDataPostgreSQL.71 -lPocoDataSQLite.71\
 -lPocoEncodings.71 -lPocoFoundation.71 -lPocoJSON.71 -lPocoMongoDB.71 -lPocoNet.71 -lPocoRedis.71 -lPocoUtil.71\
 -lPocoXML.71 -lPocoZip.71
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../poco_lib/poco/cmake-build/lib/debug/ -lPocoData.71 -lPocoDataPostgreSQL.71 -lPocoDataSQLite.71\
-lPocoEncodings.71 -lPocoFoundation.71 -lPocoJSON.71 -lPocoMongoDB.71 -lPocoNet.71 -lPocoRedis.71 -lPocoUtil.71\
-lPocoXML.71 -lPocoZip.71
else:unix: LIBS += -L$$PWD/../poco_lib/poco/cmake-build/lib/ -lPocoData.71 -lPocoDataPostgreSQL.71 -lPocoDataSQLite.71\
-lPocoEncodings.71 -lPocoFoundation.71 -lPocoJSON.71 -lPocoMongoDB.71 -lPocoNet.71 -lPocoRedis.71 -lPocoUtil.71\
-lPocoXML.71 -lPocoZip.71

INCLUDEPATH += $$PWD/../poco_lib/poco/Foundation/include
INCLUDEPATH += $$PWD/../poco_lib/poco/Net/include
INCLUDEPATH += $$PWD/../poco_lib/poco/Util/include
INCLUDEPATH += $$PWD/../poco_lib/poco/JSON/include

DEPENDPATH += $$PWD/../poco_lib/poco/Foundation/include
DEPENDPATH += $$PWD/../poco_lib/poco/Net/include
DEPENDPATH += $$PWD/../poco_lib/poco/Util/include
DEPENDPATH += $$PWD/../poco_lib/poco/JSON/include
