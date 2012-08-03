#include <iostream>

#include "filesystem.h"

FileSystem::FileSystem(QObject *parent) :
    QObject(parent)
{
}

void FileSystem::addToJavaScript()
{
    std::cout << "registering fs" << std::endl;
    graphicWebView->page()->mainFrame()->addToJavaScriptWindowObject("fs", this);
}

QString FileSystem::test()
{
    std::cout << "invoking test()" << std::endl;
    return QString("hello world!");
}
