#include<iostream>
#include<cmath>
#include<string>
#include<algorithm>
#include<cstring>
#include<vector>
using namespace std;
int dps(string a,int na, string b,int nb, string c)
{
    if (na <0 && nb <0)
        return 1;
    else if (na>=0&&c[na + nb+1] == a[na] && dps(a, na-1, b, nb, c))
        return 1;
    else if (nb>=0&&c[na + nb+1] == b[nb] && dps(a, na, b, nb-1, c))
        return 1;
    else
        return 0;
}
int main()
{
    int n;
    cin >> n;
    string a, b, c;
    for (int i = 1; i <= n; i++)
    {
        cin >> a >> b >> c;
        if (dps(a,a.size()-1,b,b.size()-1,c))
            cout << "Data set " << i << ": " <<"yes"<< endl;
        else
            cout << "Data set " << i << ": " << "no" << endl;
    }
    return 0;
}
