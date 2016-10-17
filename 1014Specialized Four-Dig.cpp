#include<iostream>
using namespace std;
int sjzsum(int a)
{
int b, sum=0;
while (a > 0)
{
b = a % 10;
sum += b;
a /= 10;
}
return sum;
}
int sejzsum(int a)

{
int b, sum = 0;
while (a > 0)
{
b = a % 12;
sum += b;
a /= 12;
}
return sum;
}
int sljzsum(int a)
{
int b, sum = 0;
while (a > 0)
{
b = a % 16;
sum += b;
a /= 16;
}
return sum;
}
int main()
{
for (int i = 1000; i <= 9999;i++)
if (sjzsum(i) == sejzsum(i) && sjzsum(i) == sljzsum(i))
cout << i << endl;
return 0;
}                    
