#include "STL.h"

using namespace std;

map<string, int> map1;

void countText(char* textname)
{
    ifstream input;
    string str;
    input.open(textname);

    while(!input.eof())
    {
        input >> str;

//        cout<<str<<endl;
    }
    input.close();
}
