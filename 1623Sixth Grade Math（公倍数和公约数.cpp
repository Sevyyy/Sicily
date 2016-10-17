#include<iostream>
using namespace std;
int main()
{
int n,t,yu=1,s,gbs,gys;
cin >> n;
int *a = new int[n];
int *b = new int[n];
for(int i = 0; i <n; i++)
cin >> a[i] >> b[i];
for (int i = 0; i < n; i++)
{
s = a[i] * b[i];
if (a[i]>b[i])
{
t=b[i];
b[i] = a[i];
a[i] = t;
}
while (a[i] != 0)
{
yu = b[i] % a[i];
b[i] = a[i];
a[i] = yu;
}
gys = b[i];
gbs = s / gys;
cout << i+1 << " " << gbs << " " << gys << endl;
}
delete  [] a;
delete  [] b;
return 0;
}       
