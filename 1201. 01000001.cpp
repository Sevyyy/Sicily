
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
    int n;
    cin >> n;
    for (int num = 1; num <= n; num++)
    {
        string a, b;
        cin >> a >> b;
        if (b.size() < a.size())
        {
            string t = a;
            a = b;
            b = t;
        }
        while (a.size() < b.size())
            a = "0" + a;
        char carry = '0';
        int n = b.size();
        string ans = "";
        for (int i = n - 1; i >= 0; i--)
        {
            int t = a[i] + b[i] + carry - 3 * '0';
            if (t == 0)
            {
                ans = "0" + ans;
                carry = '0';
            }
            else if (t == 1)
            {
                ans = "1" + ans;
                carry = '0';
            }
            else if (t == 2)
            {
                ans = "0" + ans;
                carry = '1';
            }
            else if (t == 3)
            {
                ans = "1" + ans;
                carry = '1';
            }
        }
        if (carry == '1')
            ans = "1" + ans;
        int m = ans.size();
        int index = 0;
        while (ans[index] == '0' && index < m)
        {
            index++;
        }
        if (index == m)
            ans = "0";
        else
            ans = ans.substr(index, m - index);
        cout << num<<" "<<ans << endl;
    }
    return 0;
}


