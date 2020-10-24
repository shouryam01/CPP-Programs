/* C++ program to create student class, read and print N student's details
(Example of array of objects).*/

#include<iostream>
using namespace std;

# define MAX 10

class Student
{
private:

    char name[40];
    int roll;
    int total;
    float perc;

public:

    void get_details(void);
    void put_details(void);
};

void Student::get_details(void)
{
    cout<<"Enter the name of the student :"<<endl;
    cin>>name;

    cout<<"Enter the roll number of the student :"<<endl;
    cin>>roll;

    cout<<"Enter total marks out of 500 :"<<endl;
    cin>>total;

    perc = float(total)/500 * 100;
}

void Student::put_details(void)
{
    cout<<"-------Student Details-------- "<<endl;
    cout<<"NAME : "<<name<<endl;
    cout<<"ROLL NUMBER : "<<roll<<endl;
    cout<<"TOTAL MARKS : "<<total<<endl;
    cout<<"PERCENTAGE % : "<<perc<<endl;

}

int main()
{
    Student std[MAX];
    int n, i;

    cout<<"Enter total number of Students : ";
    cin>> n;

    for(i=0;i<n;i++)
    {
        cout<<"Enter details of Student "<<i+1<<"\n";
        std[i].get_details();

    }

    cout<<endl;

    for(i=0;i<n;i++)
    {
        cout<<"Details of students : "<<i+1<<"\n";
        std[i].put_details();
    }
    return 0;
}


