#include<iostream>
using namespace std;

//Base class
class Animal
{
public:
    void Eat()
    {
        cout<<"I can eat "<<endl;
    }

    void Sleep()
    {
        cout<<"I can sleep "<<endl;
    }
};

// derived class

class Dog : public Animal
{
public:
    void Bark()
    {
        cout<<"I can bark "<<"Woof Woof !!"<<endl;
    }
};

int main()
{
    //Create object of Dog class
    Dog dog1;

    //Calling member of the base class
    dog1.Eat();
    dog1.Sleep();

    //Calling member of the derived class
    dog1.Bark();

    return 0;
}
