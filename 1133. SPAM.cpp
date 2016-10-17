
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

bool have(char c)
{
    if (c >= 'a'&&c <= 'z')
        return true;
    if (c >= 'A'&&c <= 'Z')
        return true;
    if (c >= '0'&&c <= '9')
        return true;
    if (c == '-' || c == '_' || c == '.')
        return true;
    return false;
}
int main() 
{
    string s;
    while (cin >> s)
    {
        string head = "";
        string tail = "";
        int n = s.size();
        int index = 1;
        int hindex, tindex;
        while (index < n - 1)
        {
            if (s[index] == '@' && have(s[index - 1]) && s[index - 1] != '.' && s[index + 1] != '.' && have(s[index + 1]))
            {
                hindex = index - 2;
                tindex = index + 2;
                while (hindex >= 0 && have(s[hindex]) && (s[hindex] != '.' || s[hindex + 1] != '.'))
                {
                    hindex--;
                }
                while (tindex < n && have(s[tindex]) && (s[tindex] != '.' || s[tindex - 1] != '.'))
                {
                    tindex++;
                }
                hindex++;
                tindex--;
                if (s[hindex] == '.')
                    hindex++;
                if (s[tindex] == '.')
                    tindex--;
                string s1 = s.substr(hindex, index - hindex);
                string s2 = s.substr(index, tindex - index + 1);
                cout << s1 + s2 <<endl;
            }
            index++;
        }
    }
    return 0;
}

