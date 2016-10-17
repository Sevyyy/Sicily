#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int tt = 1; tt <= t; tt++)
    {
        int n, m;
        cin >> n >> m;
        int *ball = new int[n];
        int *left = new int[n];
        int *right = new int[n];
        for (int ttt = 0; ttt < n; ttt++)
        {
            left[ttt] = ttt;
            ball[ttt] = ttt + 1;
            right[ttt] = ttt + 2;
        }
        for (int i = 1; i <= m; i++)
        {
            int move, x, y;
            cin >> move >> x >> y;
            if (move == 1)
            {
                if (left[x - 1] != 0)
                    right[left[x - 1]-1] = right[x - 1];
                if (right[x - 1] != n + 1)
                    left[right[x - 1]-1] = left[x - 1];
                if (left[y - 1] != 0)
                    right[left[y - 1]-1] = x;
                left[x - 1] = left[y - 1];
                left[y - 1] = x;
                right[x - 1] = y;
            }
            else
            {
                if (left[x - 1] != 0)
                    right[left[x - 1]-1] = right[x - 1];
                if (right[x - 1] != n + 1)
                    left[right[x - 1]-1] = left[x - 1];
                if (right[y - 1] != n + 1)
                    left[right[y - 1]-1] = x;
                right[x - 1] = right[y - 1];
                right[y - 1] = x;
                left[x - 1] = y;
            }
        }
        for (int k = 0; k < n; k++)
        {
            if (left[k] == 0)
            {
                cout << ball[k] << " ";
                int next = right[k];
                while (next != n + 1)
                {
                    cout << next<< " ";
                    next = right[next-1];
                }
                cout << endl;
                break;
            }
        }
        delete[] left;
        delete[] ball;
        delete[] right;
    }
    return 0;
}      
