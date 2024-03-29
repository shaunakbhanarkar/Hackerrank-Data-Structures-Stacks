#include <bits/stdc++.h>

using namespace std;

// Complete the isBalanced function below.
string isBalanced(string s) {

    stack<char> res;
    for (int i=0;i<s.size();i++)
    {
        if (res.empty())
        {
            res.push(s[i]); 
        }
        else
        {
            if (res.top() == '(' && s[i] == ')')
            {
                res.pop();
            }
            // else if (res.top() == ')' && s[i] == '(')
            // {
            //     res.pop();
            // }
            else if (res.top() == '[' && s[i] == ']')
            {
                res.pop();
            }
            // else if (res.top() == ']' && s[i] == '[')
            // {
            //     res.pop();
            // } 
            else if (res.top() == '{' && s[i] == '}') 
            {
                res.pop();
            }
            // else if (res.top() == '}' && s[i] == '{')
            // {
            //     res.pop();
            // }
            else
            {
                res.push(s[i]);
            }
        }
    }

    if (res.empty())
        return "YES";
    return "NO";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string s;
        getline(cin, s);

        string result = isBalanced(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
