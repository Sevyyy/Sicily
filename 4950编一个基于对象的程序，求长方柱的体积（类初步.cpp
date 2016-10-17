#include<iostream>
#include<algorithm>
using namespace std;
class Cal
{
private:
	int len;
	int wid;
	int high;
	int v;
public:
	void acq()
	{
		cin >> len >> wid >> high;
	}
	void total()
	{
		v = len*wid*high;
	}
	void show()
	{
		cout << v << endl;
	}
};
int main()
{
	Cal jiege[3];
	for (int i = 0; i < 3; i++)
	{
		jiege[i].acq();
		jiege[i].total();
	}
	for (int i = 0; i < 3; i++)
	{
		jiege[i].show();
	}
	return 0;
}

