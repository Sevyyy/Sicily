#include<iostream>
#include<algorithm>
#include<stack>
#include<vector>

using namespace std;

struct node
{
	char data;
	int left;
	int right;
	bool is_root;
};

node a[1005];
void print(int root)
{
	if(root == 0)
		return;
	else
	{
		cout<<a[root].data;
		print(a[root].left);
		print(a[root].right);
		return;
	}
}

int main()
{
	int n;
	while(cin>>n)
	{
		vector<int> v;
		v.clear();
		for(int i = 0;i < n;i ++)
		{
			int index,l,r;
			char c;
			cin>>index>>c>>l>>r;
			v.push_back(index);
			a[index].data = c;
			a[index].left = l;
			a[index].right = r;
			a[index].is_root = true;
		}
		for(int i = 0;i < n;i ++)
		{
			int l = a[v[i]].left;
			int r = a[v[i]].right;
			a[l].is_root = false;
			a[r].is_root = false;
		}
		int root;
		for(root = 0;root < n;root ++)
		{
			if(a[v[root]].is_root == true)
				break;
		}
		print(v[root]);
		cout<<endl;
	}
	return 0;
}