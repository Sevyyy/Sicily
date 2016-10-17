#include<iostream>
#include<cmath>
#include<string>
#include<omp.h>
#include<stdio.h>
#include<cstring>
using namespace std;
int main()
{
	int T;
	cin >> T;
	while (T--)
	{
		int n, a, b;
		scanf("%d%d%d",&n,&a,&b);
		if ((n - 1) % (a + b) >= a)
			printf("Alice\n");
		else
			printf("Bob\n");
	}
		return 0;
}
