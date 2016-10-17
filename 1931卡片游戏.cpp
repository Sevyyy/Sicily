#include<iostream>
using namespace std;
int main()
{
    int t,zj,i,n;
    cin>>n;
    for(int l=1;l<=n;l++)
    {
    cin >> t;
    int *pai = new int[t];
    for (int i = 0; i < t; i++)
        pai[i] = i+1;
    for ( i = 1; i < t; i++)
    {
        zj = pai[i];
        for (int j = i; j <t-1; j++)
            pai[j] = pai[j+1];
        pai[t - 1] = zj;
    }
    for (int k = 0; k < t; k++)
        cout << pai[k] << " ";
    cout<<endl;
    delete [] pai;
    }
        return 0;
}         
