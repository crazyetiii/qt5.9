#ifndef QPERSON_H
#define QPERSON_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class qperson; }
QT_END_NAMESPACE

class qperson : public QWidget
{
    Q_OBJECT
    Q_CLASSINFO("author","Wang")
    Q_CLASSINFO("company","UPC")
    Q_CLASSINFO("version","1.0.0")

    Q_PROPERTY(int age READ age WRITE setAge NOTIFY ageChanged)
    Q_PROPERTY(QString name MEMBER m_name)
    Q_PROPERTY(int score MEMBER m_score)

public:
    qperson(QWidget *parent = nullptr);
    ~qperson();
    explicit  qperson(QString fName, QObject *parent = nullptr);
    int     age();
    void    setAge(int value);
    void    incAge();
signals:
    void    ageChanged(int value);
public slots:



private:
    Ui::qperson *ui;

    int  m_age=10;
    QString  m_name;
    int      m_score=79;
};
#endif // QPERSON_H
