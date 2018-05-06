#include "person.h"

Person::Person(QObject *parent)
    : QObject(parent),m_shoeSize(0)
{
}

QString Person::name() const {
    return m_name;
}

void Person::setName(const QString &name) {
    m_name = name;
}

int Person::shoeSize() const {
    return m_shoeSize;
}

void Person::setShoeSize(int size) {
    m_shoeSize = size;
}
