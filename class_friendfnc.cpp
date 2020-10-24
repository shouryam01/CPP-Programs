//C++ Program to demonstrate the example of a friend function with class

#include<iostream>
using namespace std;

class Number
{
private:
    int a;

public:
    void get_num(int x);
    //Declaration of friend Function
    friend void printNum(Number NUM);

};

//Class Member function definitions

void Number :: get_num(int x)
{
    a = x;
}

//Friend Function definition , no need of using scope resolution operator (::)

void printNum(Number NUM)
{
    cout<<"Value of private data member of a class member :"<<NUM.a;

}


int main()
{
    Number nObj; //Object Declaration
    nObj.get_num(1000);
    printNum(nObj);

    return 0;
}
