#include<iostream>

using namespace std;
int a=0;
int main()
{
    int a=10;
    if(true)
    {
        int a=9;
        cout<<::a<<",";
    }
    cout<<::a;
    return 0;
}
