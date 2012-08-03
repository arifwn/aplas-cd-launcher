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

QVariantList FileSystem::test()
{
    qDebug() << "invoking test()";
    QVariantList l;
    #ifdef Q_WS_X11
    QString s1 = QString("hello Linux!");
    #elif Q_WS_WIN
    QString s1 = QString("hello Windows!");
    #elif Q_WS_MACX
    QString s1 = QString("hello OSX!");
    #endif

    int s2 = 9000;

    l.append(qVariantFromValue(s1));
    l.append(qVariantFromValue(s2));
    return l;
}

void FileSystem::log(QString s)
{
    qDebug() << s;
}
