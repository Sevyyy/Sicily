#include<iostream>
#include<cstring>
#include<list>
#include<string>
using namespace std;
int main()
{
    int n;
    while(cin>>n&&n!=0)
    {
    if(n%2)
    cout<<"Bob"<<endl;
    else
    cout<<"Alice"<<endl;
    }
    return 0;
}
