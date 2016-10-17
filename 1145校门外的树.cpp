#include<iostream>
using namespace std;
int main()
{
int l, m,b,e,count=0;
cin >> l >> m;
int *shu = new int[l+1];
for (int i = 0; i <= l; i++)
{
shu[i] = 0;
}
for (int i = 1; i <= m; i++)
{
cin >> b >> e;
for (int j = b; j <= e; j++)
{
if (shu[j] == 0)
shu[j] = 1;
}
}
for (int k = 0; k <= l; k++)
{
if (shu[k] == 0)
{
count++;
}
}
cout << count << endl;
delete [] shu;
return 0;
}   
