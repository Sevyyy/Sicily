#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main()
{
    int m,cd,k;
    cin >> m;
    while (m != 0)
    {
        string n;
        cin >> n;
        cd = n.size();
        for (int i = 1; i <=m; i++)
        {
            for (k=1; k <= cd / m; k++)
            {
                if (k % 2 != 0)
                    cout << n[(k - 1)*m + i - 1];
                else
                    cout << n[k*m-i];
            }
        }
        cout << endl;
        cin >> m;
    }
    return 0;
}                                 
