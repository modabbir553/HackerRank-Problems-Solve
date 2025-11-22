#include <bits/stdc++.h>
using namespace std;

class Student_info
{
public:
    int id;
    string name;
    char section;
    int total_marks;

    Student_info(int id, string name, char section, int total_marks)
    {
        this->id = id;
        this->name = name;
        this->section = section;
        this->total_marks = total_marks;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--)
    {

        Student_info *students[3];

        for (int i = 0; i < 3; i++)
        {
            int id, marks;
            string name;
            char section;
            cin >> id >> name >> section >> marks;

            students[i] = new Student_info(id, name, section, marks);
        }

        Student_info *topper = students[0];

        for (int i = 1; i < 3; i++)
        {
            if (students[i]->total_marks > topper->total_marks)
            {
                topper = students[i];
            }
            else if (students[i]->total_marks == topper->total_marks)
            {
                if (students[i]->id < topper->id)
                {
                    topper = students[i];
                }
            }
        }

        cout << topper->id << " " << topper->name << " "
             << topper->section << " " << topper->total_marks << "\n";

        for (int i = 0; i < 3; i++)
            delete students[i];
    }

    return 0;
}
