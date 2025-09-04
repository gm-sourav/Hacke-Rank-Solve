#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    while (getline(cin, s)) {
        string result = "";
        for (char c : s) {
            if (c != ' ') result += c; // remove spaces
        }
        sort(result.begin(), result.end());
        cout << result << "\n";
    }
}
