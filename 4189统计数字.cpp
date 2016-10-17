#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    int a[200002];
    int n;
    while (cin >> n&&n!=0)
    {
        for (int i = 0; i < n; i++)
            cin>>a[i];
        sort(a + 0, a + n);
        int m = n;
        for (int i = 0; i < n; i++)
        {
            if (a[i + 1] == a[i])
                --m;
        }
        cout << m << endl;
    }
    return 0;
}                     
