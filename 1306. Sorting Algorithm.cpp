
#include<iostream>
#include<cstring>
#include<string>
#include<cmath>
#include<stack>
#include<queue>
#include<vector>
#include<algorithm>
#include<cstdlib>
using namespace std;

int main() 
{
    int n, m;
    while (cin >> n >> m)
    {
        int a[100005];
        if (n == 0 && m == 0)
            break;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        cout << a[0];
        for (int i = m; i < n; i += m)
            cout  << " "<< a[i];
        cout << endl;
    }
    return 0;
}
