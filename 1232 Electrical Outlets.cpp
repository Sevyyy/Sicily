#include<iostream>
using namespace std;
int main()
{
int n;
cin >> n;
for (int i = 1; i <= n;i++)
{
int k;
cin >> k;
int ks, sum = 1;
for (int j = 1; j <= k; j++)
{
cin >> ks;
sum += ks;
}
cout << sum - k << endl;
}
return 0;
}      
