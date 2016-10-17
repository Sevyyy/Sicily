#include<iostream>
using namespace std;
int main()
{
    int m,n,x,y;
    cin >> m >> n;
    while (m != 0 || n != 0)
    {
        y = (n - 2 * m) / 2;
        x = m - y;
        if (x < 0 || y < 0)
        {
            cout << "No answer" << endl;
            cin >> m >> n;
        }
        else
        {
            cout << x << " " << y << endl;
            cin >> m >> n;
        }
    }
    return 0;
}       
