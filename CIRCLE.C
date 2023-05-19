#include<iostream>
#include<conio.h>
using namespace std;
class Employee
{
    public:
    char name[100];
    int age;
    float salary;
    void getdata(void)
    {
        cout<<"Enter Employee Name: ";
        cin>>name;
        cout<<"\n Enter Employee Age: ";
        cin>>age;
        cout<<"\n Enter Employee Salary: ";
        cin>>salary;
    }
    void showdata(void)
    {
        cout<<"\n ********5 Employees Information Are********";
        cout<<"\n Name: "<<name;
        cout<<"\n Age:  "<<age;
        cout<<"\n Salary:  "<<salary;
        
    }
    
};
int main()
{
    Employee e[5];
    int i;
    for(i=0;i<5;i++)
    {
        e[i].getdata();
    }
    for(i=0;i<5;i++)
    {
        e[i].showdata();
    }
    
    return 0;
}
