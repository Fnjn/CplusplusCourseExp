#include "Account.cpp"
#include "MyPoint.cpp"
#include "StackOfIntegers.cpp"
#include "Loan.cpp"
#include "Circle.cpp"
#include "Stack.cpp"
#include "STL.cpp"

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
    Loan L1(5, 5, 10000), L2(3, 2, 5000), L3, L4(2,1,1000),L5;
    outputToFile("Exercise12_6.dat", 5, L1,L2,L3,L4,L5);
    cout<<"Total Loan Amount is "<<calTotalLoanFromFile("Exercise12_6.dat")<<endl;

/*ʵ��5 Circle��*/
    Circle C1;
    Circle C2(3);

    cout<<"C1 < C2 is "<<(C1 < C2)<<endl;
    cout<<"C1 <= C2 is "<<(C1 <= C2)<<endl;
    cout<<"C1 == C2 is "<<(C1 == C2)<<endl;
    cout<<"C1 != C2 is "<<(C1 != C2)<<endl;
    cout<<"C1 > C2 is "<<(C1 > C2)<<endl;
    cout<<"C1 >= C2 is "<<(C1 >= C2)<<endl;

/*ʵ��6 �޸�StackOfIntegers��*/
    StackOfIntegers S2;
    try
    {
        S2.pop();
    }
    catch(EmptyStackException &ex)
    {
        cout<<ex.what();
    }

/*ʵ��7 ��չStack��*/
    Stack<double> S3;
    S3.push(1.7);
    S3.push(3.0/2);
    S3.printStack();

    cout<<"S3 contains 1.5 is "<<S3.contains(1.5)<<endl;
    cout<<"S3 contains 3.2 is "<<S3.contains(3.2)<<endl;

/*ʵ��8 STL����*/
    countText("Night watcher swear.txt");
	getchar();
    return 0;
}
