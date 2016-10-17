#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
bool isprime(int a)
{
	if (a == 1||a==0)
		return 0;
	int yu;
	for (int k = 2; k <= sqrt(a); k++)
	{
		if (a%k == 0)
		{
			return 0;
			break;
		}
	}
	return 1;
}
int main()
{
	char word[101];
	while (cin >> word)
	{
		int n = strlen(word);
		int min = 100, max = 0;
		for (int i = 0; i < n; i++)
		{
			int count = -1;
			for (int k = 0; k < n;k++)
			if (word[k] == word[i])
				count++;
			if (count < min)
				min = count;
			if (count>max)
				max = count;
		}
		int answer = max - min;
		if (isprime(answer))
			cout << "Lucky Word" << endl << answer << endl;
		else
			cout << "No Answer" << endl << 0 << endl;
	}
	
	return 0;
}
