#include<iostream>
#include<cstring>
#include<string>
#include<cmath>
using namespace std;
int point(int x,int y)
{
    double dis1 = sqrt((x - 30)*(x - 30) + (y - 30)*(y - 30));
    double dis2 = sqrt((x - 100)*(x - 100) + (y - 30)*(y - 30));
    double dis3 = sqrt((x - 170)*(x - 170) + (y - 30)*(y - 30));
    if (dis1 < 20)
        return 1;
    if (dis2 < 10)
        return 2;
    if (dis3 < 5)
        return 3;
    return 0;
}
int main() 
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        int x;
        int y;
        int score = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> x >> y;
            score += point(x, y);
        }
        cout << score << endl;
    }
    return 0;
}

