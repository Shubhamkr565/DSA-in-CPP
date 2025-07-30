#include<iostream>
#include<algorithm>
using namespace std;

// Define a student structure
struct Student {
    string name;
    int marks;
};

// Comparator function for sorting
bool compare(Student a, Student b) {
    if (a.marks == b.marks) {
        return a.name < b.name;  // Alphabetical order if marks are same
    }
    return a.marks > b.marks;    // Descending order of marks
}

int main() {
    // Student data
    Student students[] = {
        {"Anjali", 94},
        {"Rahul", 97},
        {"Neha", 94},
        {"Zoya", 98},
        {"Aman", 92},
        {"Karan", 92},
        {"Bhavna", 97}
    };

    int total_students = sizeof(students) / sizeof(students[0]);

    // Sort using comparator
    sort(students, students + total_students, compare);

    // Print sorted student list with ranks
    cout << "Student Marks with Ranks:\n";
    int rank = 1;
    for (int i = 0; i < total_students; i++) {
        // If same marks as previous, same rank
        if (i > 0 && students[i].marks == students[i - 1].marks) {
            // Same rank, do not increment
        } else {
            rank = i + 1;
        }

        cout << "Name: " << students[i].name
             << ", Marks: " << students[i].marks
             << ", Rank: " << rank << endl;
    }

    return 0;
}
