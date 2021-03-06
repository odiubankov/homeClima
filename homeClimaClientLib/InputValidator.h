#ifndef INPUTVALIDATOR_H
#define INPUTVALIDATOR_H

#include <QObject>


namespace homeclima {

    class InputValidator : public QObject
    {
        Q_OBJECT

    public:
        explicit InputValidator(QObject* parent = nullptr);

        Q_INVOKABLE bool isValidIP(const QString& ipAddress) const;
        Q_INVOKABLE bool isValidPort(const QString& port) const;

    private:
        QRegExp ipRegExp_;
        QRegExp portRegExp_;
    };

}

#endif // INPUTVALIDATOR_H
