#include<iostream>
using namespace std;
int main()
{
int n,max,sr;
cin >> n;
while (n != 0)
{
cin>>sr;
max=sr;
for (int i = 2; i <= n; i++)
{
cin >> sr;
if (sr >= max)
max = sr;
}
cout << max << endl;
cin >> n;
}
return 0;
}  
