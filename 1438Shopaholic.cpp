#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        int a[20001];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a + 0, a + n);
        int sum = 0;
        for (int i = n-3; i>=0; i -= 3)
            sum += a[i];
        cout << sum << endl;
    }
    return 0;
}                         
