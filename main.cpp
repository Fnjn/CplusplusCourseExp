#include "Account.cpp"
//#include "MyPoint.cpp"
#include "StackOfIntegers.cpp"
#include "Loan.cpp"

using namespace std;

int main()
{
/*实验1 Account类*/
    Account A1(1122,20000,4.5);
    A1.withDraw(2500);
    A1.deposit(3000);
    cout<<A1.getBalance()<<"\t"<<A1.getMonthlyInterestRate()<<"\t"<<A1.getSetUpTime()<<endl;

/*实验2 MyPoint类*/
//    MyPoint P1;
//    MyPoint P2(10,30.5);
//    cout<<P1.distance(P2)<<endl;

/*实验3 StackOfIntegers类*/
    StackOfIntegers S1;
    primeDivisor(120, S1);
    S1.printStack();

/*实验4 Loan对象*/
    Loan L1, L2, L3, L4, L5;


    return 0;
}
