#include<iostream>
using namespace std;
class troll
{
public:
    int a;
    int b;
    int c;
    troll(int x,int y)
    {
        a=x;
        b=y;
        c=a*b;
    }

};

int main()
{
    troll obj(2,3);
    cout<<obj.c<<endl;
}
