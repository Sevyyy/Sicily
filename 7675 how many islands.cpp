#include<iostream>
#include<string>
#include<cstring>
int a[52][52];
using namespace std;
void color(int i, int j)
{
    if (a[i - 1][j - 1] == 1)
    {
        a[i - 1][j - 1] = 2;
        color(i - 1, j - 1);
    }
    if (a[i - 1][j] == 1)
    {
        a[i - 1][j] = 2;
        color(i - 1, j);
    }
    if (a[i - 1][j + 1] == 1)
    {
        a[i - 1][j + 1] = 2;
        color(i - 1, j + 1);
    }
    if (a[i][j - 1] == 1)
    {
        a[i][j - 1] = 2;
        color(i, j - 1);
    }
    if (a[i][j] == 1)
    {
        a[i][j] = 2;
        color(i, j);
    }
    if (a[i][j + 1] == 1)
    {
        a[i][j + 1] = 2;
        color(i, j + 1);
    }
    if (a[i + 1][j - 1] == 1)
    {
        a[i + 1][j - 1] = 2;
        color(i + 1, j - 1);
    }
    if (a[i + 1][j] == 1)
    {
        a[i + 1][j] = 2;
        color(i + 1, j);
    }
    if (a[i + 1][j + 1] == 1)
    {
        a[i + 1][j + 1] = 2;
        color(i + 1, j + 1);
    }
}
int main()
{
    int m, n;
    while (cin >> n >> m&&n != 0)
    {
        memset(a, sizeof(int), 0);
        for (int i = 1; i <= m; i++)
        {
            for (int j = 1; j <= n; j++)
                cin >> a[i][j];
        }
        int count = 0;
        for (int i = 1; i <= m; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (a[i][j] == 1)
                {
                    count++;
                    color(i, j);
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}
