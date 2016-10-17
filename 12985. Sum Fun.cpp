#include<iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a + b == c)
            cout << a << " + " << b << " = " << c << endl;
        else if (b + c == a)
            cout << b << " + " << c << " = " << a << endl;
        else if (a + c == b)
            cout << a << " + " << c << " = " << b << endl;
        else
            cout << a << " " << b << " " << c << " " << "NO SUM" << endl;
    }
    return 0;
}              
