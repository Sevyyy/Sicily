#include<iostream>
using namespace std;
int main()
{   
    int n;
    cin>>n;
    for(int i=100;i<=n;i++)
    {
        int a=i%10;
        int b=i/10%10;
        int c=i/100;
        if(a*a*a+b*b*b+c*c*c==i)
        {
            cout<<i<<endl;
        }
    }
}
