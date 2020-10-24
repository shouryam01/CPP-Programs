#include<iostream>

using namespace std;

int main()
{
    try
    {
        int momsAge=30;
        int sonsAge= 34;

        if(sonsAge > momsAge)
            throw 99;

    }

    catch(int x){
    cout<<"son age can not be older than the age of the mom, ERROR NUMBER :"<<x<<endl;
    }

}
