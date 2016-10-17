#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n != 0)
    {
        if (n == 1 || n == 2)
            cout << "Alice" << endl;
        else
            cout << "Bob" << endl;
        cin>>n;
    }
    return 0;
}      
