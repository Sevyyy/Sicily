#include<iostream>
using namespace std;
int main()
{
    int n,zj;
    while(cin>>n){
    int *a = new int[n];
    cin >> a[0];
    for (int i = 1; i < n;i++)
    {
        cin >> a[i];
        for (int k = 0; k < i; k++)
        {
            if (a[i] == a[k])
            {
                n--;
                i--;
                break;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int k = i+1; k < n; k++)
        {
            if (a[k]<a[i])
            {
                zj = a[i];
                a[i] = a[k];
                a[k] = zj;
            }
        }
    }
    cout << n << endl;
    for (int i = 0; i < n-1; i++)
        cout << a[i] << " ";
    cout<<a[n-1]<<endl;
    delete[] a;
    }
}                                 
