#include <QDebug>

#include "filesystem.h"

FileSystem::FileSystem(QObject *parent) :
    QObject(parent)
{
}

void FileSystem::addToJavaScript()
{
    qDebug() << "registering fs";
    graphicWebView->page()->mainFrame()->addToJavaScriptWindowObject("fs", this);
}

QString FileSystem::test()
{
    qDebug() << "invoking test()";
    return QString("hello world!");
}

void FileSystem::log(QString s)
{
    qDebug() << s;
}
