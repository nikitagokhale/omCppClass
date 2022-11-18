//switch case
#include<iostream>
using namespace std;

int main()
{
    int a, b;
    cout<<"Enter 2 variables:- ";
    cin>>a>>b;

    char choice = '0';
    while(choice != '5')
    {
        cout<<"\n\nMAIN MENU\n1. ADD.\n2. Sub.\n3. Multiply.\n4. divide\n5. EXIT\n";
        cout<<"Enter your choice:- ";
        cin>>choice;
        switch(choice)
        {
        case '1':
            cout<<"Addition of a and b is "<<a+b;
            break;

        case '2':
            cout<<"Subtraction of a and b is "<<a-b;
            break;

        case '3':
            cout<<"Multiplication of a and b is "<<a*b;
            break;

        case '4':
            cout<<"Division of a and b is "<<a/b;
            break;

        case '5':
            cout<<"Thank you!";
            break;

        default:
            cout<<"Enter a correct choice!";
            break;
        }
    }

    return 0;
}
