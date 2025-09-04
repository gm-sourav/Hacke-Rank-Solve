#include <iostream>
using namespace std;

struct Student {
    int ID;
    string Name;
    char Section;
    int Marks;
};

int main() {
    int T;
    cin >> T;

    while (T--) {
        Student students[3];

        for (int i = 0; i < 3; i++) {
            cin >> students[i].ID >> students[i].Name >> students[i].Section >> students[i].Marks;
        }

       
        Student best = students[0];

        for (int i = 1; i < 3; i++) {
            if (students[i].Marks > best.Marks) {
                best = students[i];
            } else if (students[i].Marks == best.Marks && students[i].ID < best.ID) {
                best = students[i];
            }
        }

        cout << best.ID << " " << best.Name << " " << best.Section << " " << best.Marks << endl;
    }

    return 0;
}
