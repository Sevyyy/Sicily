#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int q = 1; q <= t; q++)
    {
        int n;
        scanf("%d", &n);  
        int b=0,ok=1;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                int a;
                scanf("%d", &a);  
                if (i == 1 && j == 1)
                {
                    b = a;
                }
                if (i == j)
                {
                    if (a != b)
                        ok = 0;
                }
                if (i!=j)
                {
                    if (a != 0)
                        ok = 0;
                }
            }
        }
        
        if (ok)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
