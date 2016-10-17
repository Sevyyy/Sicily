#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cout<<1;
        for(int j=2;j<i;j++)
            cout<<" "<<j;
        if(i!=1)
            cout<<" "<<i;
        for(int j=i-1;j>0;j--)
            cout<<" "<<j;
        cout<<endl;
    }
}
