#include<iostream>
#include<string>
using namespace std;
int main()
{
	string a[2] = {"Alice","Bob"};
	int n;
	while(cin>>n&&n)
		cout<<a[n%2]<<endl;
		return 0;
}
