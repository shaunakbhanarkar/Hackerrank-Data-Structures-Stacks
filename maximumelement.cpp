#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   

    int n;
    cin>>n;

    stack<int> normalStack;
    stack<int> maxStack;

    while (n--)
    {
        int query;
        cin>>query;

        switch (query)
        {
            case 1:
                int x;
                cin>>x;
                normalStack.push(x);
                if (maxStack.empty() || maxStack.top() <= x)
                {
                    maxStack.push(x);
                }
                break;
            case 2:
                if (normalStack.top() == maxStack.top())
                {
                    maxStack.pop();
                }
                normalStack.pop();
                break;
            default:
                cout<<maxStack.top()<<endl;
        }
    }
    return 0;
}
