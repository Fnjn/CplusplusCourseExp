#include "STL.h"

using namespace std;

typedef pair<string, int> PAIR;
int cmp(const PAIR& x, const PAIR& y)
{
    return x.second > y.second;
}

map<string, int> map1;
vector<pair<string, int> > p1;

void countText(char* textname)
{
    ifstream input;
    string str;
    map<string, int>::iterator iter;

    input.open(textname);

    while(!input.eof())
    {
        input >> str;
        iter = map1.find(str);

        if(iter == map1.end())
            map1.insert(map<string,int>::value_type(str,1));
        else
            (iter->second)++;
//        cout<<str<<endl;
    }
    input.close();

    for(iter=map1.begin(); iter!=map1.end(); iter++) p1.push_back(make_pair(iter->first,iter->second));
    sort(p1.begin(),p1.end(),cmp);

    int cnt = 0;
    for(vector<PAIR>::iterator p_iter=p1.begin(); p_iter!=p1.end(); p_iter++)
    {
        cout<<p_iter->first<<":"<<p_iter->second;
        cnt++;
        if(cnt == 6)
        {
            cout<<endl;
            cnt = 0;
        }
        else cout<<"\t";
    }
}


