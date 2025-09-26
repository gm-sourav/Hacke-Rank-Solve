#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int cls;
    char s;
    int id;
    int mathMarks;
    int engMarks;
    int sum = 0;
};

bool cmp(Student l, Student r)
{
    if (l.sum == r.sum)
    {
        return l.id < r.id;
    }
    else
    {
        return l.sum > r.sum;
    }
}
int main()
{
    int n;
    cin >> n;

    Student a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].cls >> a[i].s >> a[i].id >> a[i].mathMarks >> a[i].engMarks;
    }

    for (int i = 0; i < n; i++)
    {
        a[i].sum = a[i].mathMarks + a[i].engMarks;
    }

    sort(a, a + n, cmp);

    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].cls << " " << a[i].s << " " << a[i].id << " " << a[i].mathMarks << " " << a[i].engMarks << " " << endl;
    }

    return 0;
}