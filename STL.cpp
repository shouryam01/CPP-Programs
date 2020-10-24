#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<String>v1;
	v1.push_back("Javatpint");
	v1.push_back("Tutorial");
	for (vector<String>::iterator itr = v1.begin(); itr != v1.end(); ++itr)
		cout << *itr;
	return 0;
}