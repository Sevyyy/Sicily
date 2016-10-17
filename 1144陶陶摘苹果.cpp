#include<iostream>
using namespace std;
int main()
{
int pg[10];
int shou,sum=0;
for (int i = 0; i <= 9; i++)
cin >> pg[i];
cin >> shou;
for (int i = 0; i <= 9; i++)
if (pg[i] <= shou + 30)
sum++;
cout << sum << endl;
return 0;

}  
