QT += core gui opengl widgets
TARGET = HelloOpenGL
TEMPLATE = app
SOURCES = main.cpp \
    glwidget.cpp
HEADERS = \
    glwidget.h
OTHER_FILES = mainwindow.ui

DISTFILES +=

RESOURCES += \
    resources.qrc
