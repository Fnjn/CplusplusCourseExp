#include "Loan.h"

using namespace std;

Loan::Loan()
{
    annualInterestRate = 0;
    numberOfYears = 0;
    loanAmount = 0;
}

Loan::Loan(double annualInterestRate, int numberOfYears, double loanAmount)
{
    this->annualInterestRate = annualInterestRate;
    this->numberOfYears = numberOfYears;
    this->loanAmount = loanAmount;
}

double Loan::getAnnualInterestRate()
{
    return annualInterestRate;
}

int Loan::getNumberOfYears()
{
    return numberOfYears;
}

double Loan::getLoanAmount()
{
    return loanAmount;
}


void Loan::setAnnualInterestRate(double annualInterestRate)
{
    this->annualInterestRate = annualInterestRate;
}

void Loan::setNumberOfYears(int numberOfYears)
{
    this->numberOfYears = numberOfYears;
}

void Loan::setLoanAmount(double loanAmount)
{
    this->loanAmount = loanAmount;
}


double Loan::getMonthlyPayment()
{
    double monthlyInterestRate = annualInterestRate / 1200;
    return loanAmount * monthlyInterestRate / (1 - pow(1/(1+monthlyInterestRate),numberOfYears*12));
}

double Loan::getTotalPayment()
{
    return getMonthlyPayment() * numberOfYears * 12;
}

//void outputToFile(char* filename, Loan P1)
//{
//	ofstream output;
//	output.open(filename);
//	output<<P1<<endl;
//	output.close();
//}
