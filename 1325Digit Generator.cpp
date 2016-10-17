#include<iostream>
using namespace std;
int summm(int a)
{
int sum=a,b=1;
while (a > 0)
{
b = a % 10;
sum += b;
a /= 10;
}
return sum;
}

int  main()
{
int k;
cin >> k;
for (int j = 1; j <= k; j++)
{
int n;
cin >> n;
for (int i = n-45; i <= n; i++)
{
if (summm(i) == n)
{
cout << i << endl;
break;
}
else if (i == n)
cout << 0 << endl;
}
}
return 0;
}                       
