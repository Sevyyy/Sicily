#include<iostream>
#include<cstring>
#include<string>
#include<queue>
#include<set>

using namespace std;

struct node
{
    char data;
    node * left;
    node * right;
};

node * create_tree(string pre, string ni)
{
    if (pre.size() == 0)
        return NULL;
    node * tree = new node();
    tree->data = pre[0];
    set<char> pre_set, ni_set;
    int len = 0;
    for (int i = 0; i < ni.size(); i++)
    {
        if (ni[i] == pre[0])
            break;
        len++;
    }
    tree->left = create_tree(pre.substr(1, len), ni.substr(0, len));
    tree->right = create_tree(pre.substr(len + 1, pre.size() - 1 - len), ni.substr(len + 1, ni.size() - 1 - len));
    return tree;
}

void print_bfs(node * tree)
{
    queue<node *> q;
    q.push(tree);
    while (!q.empty())
    {
        node * now = q.front();
        q.pop();
        cout << now->data;
        if(now->left != NULL)
            q.push(now->left);
        if(now->right != NULL)
            q.push(now->right);
    }
    cout << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        string pre, ni;
        cin >> pre >> ni;
        node * tree = create_tree(pre, ni);
        print_bfs(tree);
    }
    return 0;
}
