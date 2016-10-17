#include<iostream>
#include<cstring>
#include<string>
using namespace std;
int main()
{
    int n,count,score,l;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        char *p = new char[81];
        count = 0;
        score = 0;
        cin >> p;
        l = strlen(p);
        for (int k = 0; k < l; k++)
        {
            if (p[k] == 'O')
            {
                ++count;
            }
            else
            {
                count = 0;
            }
            score += count;
        }
        cout << score << endl;
        delete[] p;
    }
    return 0;
}        
