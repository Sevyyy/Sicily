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
string a[20005];
int b[20005];
void change(string &s)
{
    int length = s.size();
    for (int i = 0; i < length; i++)
        s[i] = tolower(s[i]);
}
void find(string s, int n)
{
    int left = 0;
    int right = n - 1;
    int mid;
    while (left <= right)
    {
        mid = (left + right) / 2;
        if (s == a[mid])
        {
            b[mid] = 1;
            break;
        }
        else if (s < a[mid])
            right = mid - 1;
        else if (s > a[mid])
            left = mid + 1;
    }
}
int main() 
{
    int T;
    cin>>T;
    while(T--){
    int n, m;
    for (int i = 0; i < 20005; i++)
        b[i] = 0;
    while (cin >> n&&n != 0 && cin >> m)
    {
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            change(a[i]);
        }
        sort(a, a + n);
        for (int i = 0; i < m; i++)
        {
            string t;
            cin >> t;
            change(t);
            find(t, n);
        }
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (!b[i])
                cnt++;
        }
        cout << cnt << endl;
        for (int i = 0; i < 20005; i++)
            b[i] = 0;
    }
    }
    return 0;
}
