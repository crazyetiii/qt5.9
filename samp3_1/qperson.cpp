#include "qperson.h"
#include "ui_qperson.h"

qperson::qperson(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::qperson)
{
    ui->setupUi(this);
}

qperson::~qperson()
{
    delete ui;
}

qperson::qperson(QString fName, QObject *parent)
{
    m_name = fName;
}

int qperson::age()
{
    return m_age;
}

void qperson::setAge(int value)
{
    m_age = value;
    emit ageChanged(m_age);
}

void qperson::incAge()
{
    m_age++;
    emit ageChanged(m_age);
}

