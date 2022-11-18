#include<iostream>

using namespace std;

int main()
{
    //if, while, dowhile, for
    int a, b;
    cout<<"Enter 2 numbers:- ";
    cin>>a>>b;
    if(a>b)
        cout<<a;
    else if(a==b)
        cout<<a<<" "<<b;
    else
        cout<<b;



    int i = 10;
    while(i<10)
    {
        cout<<i;
        i++;
    }



    for(i=0;i<10;i++)
        cout<<i;




    i = 10;

    do
    {
        cout<<i;
    }while(i<10);

    return 0;
}
