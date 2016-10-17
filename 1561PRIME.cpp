#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,ys,zs=2,i,k,xs=1;
    cin>>n;
    for(i=3;xs!=n;i+=2)
    {
      for(k=2;;++k)
      {
        ys=i%k;
        if(ys==0)
          break;
        else if(k>sqrt(i*1.0))
        {
          zs=i;
          ++xs;
          break;
        }                     
      }                   
    }
    cout<<zs<<endl;
    return 0;
}    
