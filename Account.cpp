#include "Account.h"
using namespace std;

Account::Account()
{
    id = 0;
    balance = 0;
    annualInterestRate = 0;
    setUpTime = time(NULL);
}

Account::Account(int id,double balance, double annualInterestRate)
{
    this->id = id;
    this->balance = balance;
    this->annualInterestRate = annualInterestRate;
    setUpTime = time(NULL);
}

void Account::setID(int id)
{
    this->id = id;
}

void Account::setBalance(double balance)
{
    this->balance = balance;
}

void Account::setAnnualInterestRate(double annualInterestRate)
{
    this->annualInterestRate = annualInterestRate;
}

int Account::gerID()
{
    return id;
}

double Account::getBalance()
{
    return balance;
}

double Account::getAnnualInterestRate()
{
    return annualInterestRate;
}

char* Account::getSetUpTime()
{
    return asctime(localtime(&setUpTime));
}

double Account::getMonthlyInterestRate()
{
    return annualInterestRate / 12;
}

void Account::withDraw(double withdrawAmount)
{   if(balance < withdrawAmount)
    {
        cout<<"Your account is deficit"<<endl;
        return;
    }
    balance -= withdrawAmount;
//    cout<<"Withdraw $"<<withdrawAmount<<" successfully, Your account balance: "<<balance<<endl;
}

void Account::deposit(double depositAmount)
{
    balance += depositAmount;
//    cout<<"deposit $"<<depositAmount<<" successfully, Your account balance: "<<balance<<endl;
}
