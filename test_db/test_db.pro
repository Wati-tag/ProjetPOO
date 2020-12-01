QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    article.cpp \
    client.cpp \
    cont_art_gest.cpp \
    cont_client_gest.cpp \
    cont_emp_gest.cpp \
    cont_order_gest.cpp \
    cont_stat.cpp \
    db_gest_art.cpp \
    db_gest_client.cpp \
    db_gest_emp.cpp \
    db_gest_order.cpp \
    db_gest_stat.cpp \
    employee.cpp \
    main.cpp \
    mainwindow.cpp \
    order.cpp \
    stats.cpp

HEADERS += \
    article.h \
    client.h \
    cont_art_gest.h \
    cont_client_gest.h \
    cont_emp_gest.h \
    cont_order_gest.h \
    cont_stat.h \
    db_gest_art.h \
    db_gest_client.h \
    db_gest_emp.h \
    db_gest_order.h \
    db_gest_stat.h \
    employee.h \
    mainwindow.h \
    order.h \
    stats.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
