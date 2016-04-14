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

void outputToFile(char* filename, int n, Loan P1, ...)
{
	fstream output;
	output.open(filename, ios::out | ios::binary);

	va_list arg_ptr;
	Loan tmp = P1;

    output.write((char*)&tmp,sizeof(Loan));
//	cout<<P1.getLoanAmount()<<endl;

	va_start(arg_ptr, P1);
	for(int i=0; i<n-1; i++)
	{
		tmp = va_arg(arg_ptr, Loan);
		output.write(reinterpret_cast<char *>(&tmp),sizeof(Loan));
//		cout<<tmp.getLoanAmount()<<endl;
	}
	va_end(arg_ptr);

	output.close();
}

double calTotalLoanFromFile(char* filename)
{
    fstream input;
    input.open(filename, ios::in | ios::binary);
    Loan tmp;
    double totalAmount = 0;

    while(!input.eof())
    {
        input.read(reinterpret_cast<char *>(&tmp),sizeof(Loan));
        totalAmount += tmp.getLoanAmount();
    }

    input.close();
    return totalAmount;
}
