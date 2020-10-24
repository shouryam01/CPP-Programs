#include<iostream>
using namespace std;
int max_money(int n, int k)
{
    if(n%2 == 0)
        return (n/2)*k;

    else
        return ((n+1)/2)*k;
}
