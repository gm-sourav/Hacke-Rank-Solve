#include <bits/stdc++.h>
using namespace std;
int main()

{
    string s;
    bool found = false;

    getline(cin, s);
    string t = "Jessica";

    stringstream ss(s);
    string word;

    while (ss >> word)
    {

        if (word == t)
        {
            found = true;
            break;
        }
    }

    if (found)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}