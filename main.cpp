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
/*实验1 Account类*/
    Account A1(1122,20000,4.5);
    A1.withDraw(2500);
    A1.deposit(3000);
    cout<<A1.getBalance()<<"\t"<<A1.getMonthlyInterestRate()<<"\t"<<A1.getSetUpTime()<<endl;

/*实验2 MyPoint类*/
    MyPoint P1;
    MyPoint P2(10,30.5);
    cout<<P1.distance(P2)<<endl;

    _3DPoint P3;
    _3DPoint P4(10,30,25.5);
    cout<<P3.distance(P4)<<endl;

/*实验3 StackOfIntegers类*/
    StackOfIntegers S1;
    primeDivisor(120, S1);
    S1.printStack();

/*实验4 Loan对象*/
    Loan L1(5, 5, 10000), L2(3, 2, 5000), L3, L4(2,1,1000),L5;
    outputToFile("Exercise12_6.dat", 5, L1,L2,L3,L4,L5);
    cout<<"Total Loan Amount is "<<calTotalLoanFromFile("Exercise12_6.dat")<<endl;

/*实验5 Circle类*/
    Circle C1;
    Circle C2(3);

    cout<<"C1 < C2 is "<<(C1 < C2)<<endl;
    cout<<"C1 <= C2 is "<<(C1 <= C2)<<endl;
    cout<<"C1 == C2 is "<<(C1 == C2)<<endl;
    cout<<"C1 != C2 is "<<(C1 != C2)<<endl;
    cout<<"C1 > C2 is "<<(C1 > C2)<<endl;
    cout<<"C1 >= C2 is "<<(C1 >= C2)<<endl;

/*实验6 修改StackOfIntegers类*/
    StackOfIntegers S2;
    try
    {
        S2.pop();
    }
    catch(EmptyStackException &ex)
    {
        cout<<ex.what();
    }

/*实验7 扩展Stack类*/
    Stack<double> S3;
    S3.push(1.7);
    S3.push(3.0/2);
    S3.printStack();

    cout<<"S3 contains 1.5 is "<<S3.contains(1.5)<<endl;
    cout<<"S3 contains 3.2 is "<<S3.contains(3.2)<<endl;

/*实验8 STL容器*/
    countText("Night watcher swear.txt");
	getchar();
    return 0;
}
