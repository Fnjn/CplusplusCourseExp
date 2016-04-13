#include "Account.cpp"
#include "MyPoint.cpp"
#include "StackOfIntegers.cpp"
#include "Loan.cpp"
#include "Circle.cpp"

using namespace std;

int main()
{
/*ʵ��1 Account��*/
    Account A1(1122,20000,4.5);
    A1.withDraw(2500);
    A1.deposit(3000);
    cout<<A1.getBalance()<<"\t"<<A1.getMonthlyInterestRate()<<"\t"<<A1.getSetUpTime()<<endl;

/*ʵ��2 MyPoint��*/
    MyPoint P1;
    MyPoint P2(10,30.5);
    cout<<P1.distance(P2)<<endl;

    _3DPoint P3;
    _3DPoint P4(10,30,25.5);
    cout<<P3.distance(P4)<<endl;

/*ʵ��3 StackOfIntegers��*/
    StackOfIntegers S1;
    primeDivisor(120, S1);
    S1.printStack();

/*ʵ��4 Loan����*/
    Loan L1, L2, L3, L4, L5;
//    outputToFile("Exercise12_6.dat",&L1);

/*ʵ��5 Circle��*/
    Circle C1;
    Circle C2(3);

    cout<<"\nC1 < C2 is "<<(C1 < C2)<<endl;
    cout<<"C1 <= C2 is "<<(C1 <= C2)<<endl;
    cout<<"C1 == C2 is "<<(C1 == C2)<<endl;
    cout<<"C1 != C2 is "<<(C1 != C2)<<endl;
    cout<<"C1 > C2 is "<<(C1 > C2)<<endl;
    cout<<"C1 >= C2 is "<<(C1 >= C2)<<endl;

/*ʵ��6 �޸�StackOfIntegers��*/

    return 0;
}
