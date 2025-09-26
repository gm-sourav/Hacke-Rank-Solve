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
};

bool cmp(Student l, Student r)
{
    if (l.engMarks != r.engMarks)
    {
        return l.engMarks > r.engMarks;
    }
    else if (l.mathMarks != r.mathMarks)
    {
        return l.mathMarks > r.mathMarks;
    }
    else
    {
        return l.id < r.id;
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

    sort(a, a + n, cmp);

    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].cls << " " << a[i].s << " " << a[i].id << " " << a[i].mathMarks << " " << a[i].engMarks << " " << endl;
    }

    return 0;
}