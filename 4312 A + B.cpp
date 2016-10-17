#include<iostream>
#include<cmath>
using namespace std;
int reverse(int);
int main()
{
int n;
cin >> n;
int *a = new int[n];
int *b = new int[n];
for (int i = 0; i < n; i++)
cin >> a[i] >> b[i];
for (int i = 0; i < n; i++)
cout << reverse(a[i]) + reverse(b[i]) << endl;
return 0;
}
int reverse(int a)
{
int w = 0, s = 1, shi = 10, sum = 0, b;
while (s != 0)
{
s = a / shi;
shi *= 10;
w++;
}
for (int i = w; i >= 1; i--)
{
b = a % 10;
sum += b*(pow(10, double(i - 1)));
a /= 10;
}
return sum;
}    
