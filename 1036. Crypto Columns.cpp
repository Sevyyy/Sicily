
#include<iostream>
#include<cstring>
#include<string>
#include<cmath>
using namespace std;
int main() 
{
    string k;
    while (cin >> k && k != "THEEND")
    {
        string s;
        cin >> s;
        int y = k.size();
        int x = s.size() / y;
        char a[101][101];
        int index[11];
        for (int i = 0; i < y; i++)
        {
            index[i] = i ;
        }
        for (int i = y - 2; i > -1; i--)
        for (int j = i; j < y - 1; j++)
        if (k[j] > k[j + 1])
        {
            char temp1 = k[j];
            k[j] = k[j + 1];
            k[j + 1] = temp1;
            int temp2 = index[j];
            index[j] = index[j + 1];
            index[j + 1] = temp2;
        }
        int cnt = 0;
        for (int i = 0; i < y; i++)
        {
            for (int j = 0; j < x; j++)
            {
                a[j][index[i]] = s[cnt];
                cnt++;
            }
        }
        for (int i = 0; i < x;i++)
            for (int j = 0; j < y;j++)
                cout << a[i][j];
        cout << endl;
    }
    return 0;
}

