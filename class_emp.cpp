#include<iostream>
using namespace std;
class employee
{
    int emp_no;
    float emp_sal;
    char emp_name[20];

public:
    void get();
    void disp();
};

void employee::get()
{
    cout<<"Enter employee number :"<<endl;
    cin>>emp_no;

    cout<<"Enter employee name :"<<endl;
    cin>>emp_name;

    cout<<"Enter employee salary :"<<endl;
    cin>>emp_sal;
}

void employee::disp()
{
    cout<<"Employee Details :"<<endl;
    cout<<"\n \t NUMBER :"<<emp_no;
    cout<<"\n \t NAME :"<<emp_name;
    cout<<"\n \t SALARy :"<<emp_sal;

}

int main()
{
    employee e;
    e.get();
    e.disp();

    return 0;
}
