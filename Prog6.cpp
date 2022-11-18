#include<iostream>
#include<string.h>
#include<iomanip>

using namespace std;

struct var
{
    int salInt;
    double salFloat;
};
//salary = 10000
union salary
{
    int salInt;
    double salFloat;
};

int main()
{
    /*var student;
    student.rollno = 31130;
    //student.name = "hsvdgj";
    strcpy(student.name,"Nikita Gokhale");
    student.age = 20;
    student.dept = "Computer";
    //string newString = student.dept;
    cout<<student.rollno<<" "<<student.name<<" "<<student.age;
    cout<<sizeof(int);
    cout<<"\n"<<sizeof(double);
    salary obj;
    obj.salInt = 10000;
    */
    var v1;
    salary s1;
    cout<<sizeof(v1)<<" "<<sizeof(s1);
    return 0;
}
