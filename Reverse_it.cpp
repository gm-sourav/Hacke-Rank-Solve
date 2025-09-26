#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int cls;
    char s;
    int id;
};
int main()
{
    int n;
    cin >> n;

    Student a[n];
    char section[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].cls >> a[i].s >> a[i].id;
        section[i] = a[i].s;
    }

    for (int i = 0; i < n; i++)
    {
        a[i].s = section[n - 1 - i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].cls << " " << a[i].s << " " << a[i].id << endl;
    }

    return 0;
}