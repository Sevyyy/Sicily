#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n, total = 0, lw, zf, bf, totalmax = 0;
    char gb, xb;
    string name, nameex;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int totalgr = 0;
        cin >> name >> zf >> bf >> gb >> xb >> lw;
        if (zf > 80 && lw)
            totalgr += 8000;
        if (zf > 85 && bf > 80)
            totalgr += 4000;
        if (zf > 90)
            totalgr += 2000;
        if (zf > 85 && xb == 'Y')
            totalgr += 1000;
        if (bf> 80 && gb == 'Y')
            totalgr += 850;
        total += totalgr;
        if (totalgr > totalmax)
        {
            totalmax = totalgr;
            nameex=name;
        }
    }
    cout << nameex << endl << totalmax << endl << total << endl;
    return 0;
}                             
