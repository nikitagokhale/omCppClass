#include<iostream>

using namespace std;

int main()
{
    char fullname[30];
    int age;
    cout<<"Enter your fullname:- ";
    cin.getline(fullname, sizeof(fullname));
    cout<<fullname;
    return 0;
}
