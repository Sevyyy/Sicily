#include<iostream>
using namespace std;
int main()
{
for (int i = 100; i <= 999; i++)
{
int a = i % 10;
int b = (i % 100) / 10;
int c = (i -10*b-a) / 100;
if (a*a*a + b*b*b + c*c*c == i)
cout << i << endl;
}
return 0;
}                                 
