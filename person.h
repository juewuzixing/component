#ifndef PEOSON_H
#define PEOSON_H

#include <QObject>

// 由于这个对象并不需要可视化，我们继承最基础的QObject即可
class Person : public QObject
{
    Q_OBJECT // QML组件基于元对象系统，所以QObject和Q_OBJECT不能少
    Q_PROPERTY(QString name READ name WRITE setName)
    Q_PROPERTY(int shoeSize READ shoeSize WRITE setShoeSize)
public:
    Person(QObject *parent = 0);

    QString name() const;
    void setName(const QString &name);

    int shoeSize() const;
    void setShoeSize(int size);

private:
    QString m_name;
    int m_shoeSize;
};

#endif // PEOSON_H
