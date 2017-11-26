#ifndef SCRIPTLAUNCHER_H
#define SCRIPTLAUNCHER_H

#include <QProcess>
#include <QVariant>

class Process : public QProcess {
    Q_OBJECT

public:
    QString commandString;



    Process(QObject *parent = 0) : QProcess(parent) {
        QString commandString ="";
    }

    Q_INVOKABLE void start(const QString &program, const QVariantList &arguments) {
        QStringList args;

        // convert QVariantList from QML to QStringList for QProcess

        for (int i = 0; i < arguments.length(); i++)
            args << arguments[i].toString();

        QProcess::start(program, args);
    }

    Q_INVOKABLE void makedirs() {
        QStringList args;
        args<<"/home/nemo/folder1";
        commandString = QString("/home/nemo/folder1");

        QProcess::start("/bin/mkdir",args);
    }

    Q_INVOKABLE QString getCommandString() {
        return commandString;
    }

    Q_INVOKABLE QByteArray readAll() {
        return QProcess::readAll();
    }
};


#endif // SCRIPTLAUNCHER_H
