#include <QtGui/QApplication>
#include "html5applicationviewer.h"
#include "filesystem.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    Html5ApplicationViewer viewer;
    FileSystem fs;

    fs.graphicWebView = viewer.webView();
    QObject::connect(fs.graphicWebView->page()->mainFrame(), SIGNAL(javaScriptWindowObjectCleared()),
                     &fs, SLOT(addToJavaScript()));

    viewer.setWindowTitle("APLAS Bali 2012");
    viewer.resize(940, 500);
    viewer.setOrientation(Html5ApplicationViewer::ScreenOrientationAuto);
    viewer.showExpanded();
    viewer.loadFile(QLatin1String("html/index.html"));
    return app.exec();
}
