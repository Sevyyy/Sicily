#include<iostream>
#include<cmath>
using namespace std;
bool isprime(int n)
{
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n,x1,x2;
    while(cin>>n&&n!=0)
    {
        if(isprime(n))
        {
            cout<<0<<endl;
        }
        else
        {
            for(int i=n;i>0;i--)
            {
                if(isprime(i))
                {
                x1=i;
                break;
                }
            }
            for(int i=n;i<1299710;i++)
            {
                if(isprime(i))
                {
                    x2=i;
                    break;
                }
            }
            cout<<x2-x1<<endl;
        }
    }
    return 0;
}                            
