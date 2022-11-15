#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int numer=220, denom=7;
    float PI = (float)numer/denom;
    cout<<fixed<<setprecision(2)<<setw(30)<<setfill('*');
    cout<<PI;
    return 0;
}

/*
int,
char,
bool,
float,
*/
