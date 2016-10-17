#include<iostream>
#include<cstring>
#include<string>
#include<set>

using namespace std;

struct node
{
    char data;
    node * left;
    node * right;
};
int treecount = 1;

node * create_tree(string pre, string post)
{
    if (pre.size() == 0)
        return NULL;
    node * tree = new node();
    tree->data = pre[0];
    set<char> pre_set, post_set;
    int len = 0;
    for (int i = 1; i < pre.size(); i++)
    {
        pre_set.insert(pre[i]);
        post_set.insert(post[i - 1]);
        len++;
        if (pre_set == post_set)
            break;
    }
    tree->left = create_tree(pre.substr(1, len), post.substr(0, len));
    tree->right = create_tree(pre.substr(len + 1, pre.size() - 1 - len), post.substr(len, post.size() - 1 - len));
    if (tree->left == NULL && tree->right != NULL || tree->left != NULL && tree->right == NULL)
        treecount *= 2;
    return tree;
}

int main()
{
    string pre, post;
    cin >> pre >> post;
    node * tree = create_tree(pre, post);
    cout << treecount;
    return 0;
}
