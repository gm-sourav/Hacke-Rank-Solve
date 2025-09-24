#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s, x;
        cin >> s >> x;

        size_t pos;

        while ((pos = s.find(x)) != string::npos)
        {
            s.replace(pos, x.length(), "#");
        };
        cout << s << endl;
    }
    return 0;
}