
#include<iostream>
#include<cstring>
#include<string>
#include<cmath>
#include<stack>
#include<queue>
#include<vector>
#include<algorithm>
#include<cstdlib>
#include<iomanip>
using namespace std;


int main() 
{
    int usb_v, led_v, led_ma, r_n;
    while (cin >> usb_v >> led_v >> led_ma >> r_n)
    {
        string *r_name = new string[r_n];
        int *r = new int[r_n];
        for (int i = 0; i < r_n; i++)
            cin >> r_name[i] >> r[i];
        double r_left = (usb_v - led_v) * 1.0  / (led_ma  * 1.0/ 1000);
        if (r_left <= 0)
            cout << "---" << endl;
        else
        {
            int index = -1;
            int dis = 100;
            for (int i = 0; i < r_n; i++)
            {
                if (r[i] >= r_left && r[i] - r_left < dis)
                {
                    index = i;
                    dis = r[i] - r_left;
                }
            }
            if (index == -1)
                cout << "IMPOSSIBLE" << endl;
            else
                cout <<fixed<< setprecision(2) << r_left << " " << r_name[index] << endl;
        }
        delete[] r_name;
        delete[] r;
    }
    return 0;
}

