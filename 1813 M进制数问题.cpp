
#include<iostream>
#include<cstring>
#include<string>
#include<cmath>
using namespace std;
string l = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int change(string num, int base)
{
    int n = num.size();
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int t;
        if (num[i] >= '0' && num[i] <= '9')
            t = num[i] - '0';
        if (num[i] >= 'A' && num[i] <= 'Z')
            t = num[i] - 'A' + 10;
        if (num[i] >= 'a' && num[i] <= 'z')
            t = num[i] - 'a' + 10;
        ans = ans * base + t;
    }
    return ans;
}
string change_back(int num, int base)
{
    string t = "";
    do
    {
        t += l[num%base];
        num /= base;
    }while(num != 0);
    string ans = "";
    for (int i = t.size()-1; i >= 0; i--)
    {
        ans += t[i];
    }
    return ans;
}
int main() 
{
    int T;
    cin >> T;
    while (T--)
    {
        int m;
        cin >> m;
        string a, b;
        cin >> a >> b;
        int numa = change(a, m);
        int numb = change(b, m);
        int p = numa / numb;
        int q = numa % numb;
        cout << change_back(p, m) << endl << change_back(q, m) << endl;
    }
    return 0;
}

