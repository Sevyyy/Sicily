#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        for (int k = 2; k <= n; k++)
        {
            if (n%k == 0)
            {
                n = n / k;
                cout << k << " ";
                k--;
            }
        }
        cout << endl;
    }
    return 0;
}                                 
