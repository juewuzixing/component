#include <QCoreApplication>
#include <QQmlEngine>
#include <QQmlComponent>
#include <QDebug>
#include "person.h"

int main(int argc, char ** argv)
{
    QCoreApplication app(argc, argv);
    qmlRegisterType<Person>("People", 1,0, "Person");

    QQmlEngine engine;
    QQmlComponent component(&engine, QUrl("qrc:main.qml"));
    Person *person = qobject_cast<Person *>(component.create());
    if (person) {
        qWarning() << "The person's name is" << person->name();
        qWarning() << "They wear a" << person->shoeSize() << "sized shoe";
    } else {
        qWarning() << component.errors();
    }

    return 0;
}
