#include <iostream>
#include <time.h>

#ifndef ACCOUNT_H_INCLUDED
#define ACCOUNT_H_INCLUDED

class Account
{
public:
    Account();
    Account(int id,double balance, double annualInterestRate);

    void setID(int id);
    void setBalance(double balance);
    void setAnnualInterestRate(double annualInterestRate);

    int gerID();
    double getBalance();
    double getAnnualInterestRate();
    char* getSetUpTime();

    double getMonthlyInterestRate();
    void withDraw(double withdrawAmount);
    void deposit(double depositAmount);


private:
    int id;
    double balance;
    double annualInterestRate;
    time_t setUpTime;
};

#endif // ACCOUNT_H_INCLUDED
