// Main application code
#include <iostream>

double balance;

void init() {
    balance = 0;
}

// deposit function
double deposit(double amount){
    // refactor for negative number
    if(amount <= 0) {
        return balance;
    }
    balance = amount;
    return balance;
}


// testing section
#include <QtTest>

// add necessary includes here

class banksTransactions : public QObject
{
    Q_OBJECT

public:
    banksTransactions();
    ~banksTransactions();

private slots:
    void test_deposit();
    void test_deposit_negative();
};

banksTransactions::banksTransactions() {}

banksTransactions::~banksTransactions() {}

// tests
void banksTransactions::test_deposit() {
    // initialized balance with a value, see init() above
    init();

    // call the deposit function
    deposit(100.00);

    // test - QCOMPARE(actual, expected);
    QCOMPARE(balance, 100.00);
}

void banksTransactions::test_deposit_negative() {
    // initialized balance with a zero value, see init() above
    init();

    // call the deposit function
    deposit(-100.00);

    // test - QCOMPARE(actual, expected);
    QCOMPARE(balance, 0);
}

QTEST_APPLESS_MAIN(banksTransactions)

#include "tst_bankstransactions.moc"
