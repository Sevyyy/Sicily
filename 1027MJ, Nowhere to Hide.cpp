#include <iostream>  
#include<string>
#include<cstring>
using namespace std;
int main()
{
    string zj;
    int n,c;
    cin >> n;
    while (n != 0)
    {
        string *id = new string[n];
        string *idz = new string[n/2];
        string *idf = new string[n/2];
        string *ip = new string[n];
        for (int i = 0; i<n; i++)
        {
            cin >> id[i] >> ip[i];
        }
        c = 0;
        for (int k = 0; k<n; k++)
        {
            for (int l = k + 1; l<n; l++)
            {
                if (ip[k] == ip[l])
                {
                    idf[c] = id[l];
                    idz[c] = id[k];
                    c++;
                }
            }
        }
        for (int i = 0; i < n / 2; i++)
        {
            for (int k = i+1; k < n / 2; k++)
            {
                if (idz[i]>idz[k])
                {
                    zj = idz[i];
                    idz[i] = idz[k];
                    idz[k] = zj;
                    zj = idf[i];
                    idf[i] = idf[k];
                    idf[k] = zj;
                }
            }
        }
        for (int i= 0; i < n / 2; i++)
            cout << idf[i] << " is the MaJia of " << idz[i] << endl;
        cout << endl;
        delete[] id;
        delete[] idz;
        delete[] idf;
        delete[] ip;
        cin >> n;
    }
    return 0;
}                                 
