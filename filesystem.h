#ifndef FILESYSTEM_H
#define FILESYSTEM_H

#include <QObject>
#include <QtWebKit/QGraphicsWebView>
#include <QtWebKit/QWebFrame>

class FileSystem : public QObject
{
    Q_OBJECT
public:
    QGraphicsWebView * graphicWebView;

    explicit FileSystem(QObject *parent = 0);
    Q_INVOKABLE QString test();

signals:

public slots:
    void addToJavaScript();
};

#endif // FILESYSTEM_H
