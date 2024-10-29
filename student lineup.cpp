// student lineup.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Name: Yochanan Allen 

#include <iostream>
#include <string>

using namespace std;

int main() {
    const int MAX_STUDENTS = 25;
    int numStudents;

    
    do {
        cout << "Enter the number of students (1-25): " << endl;
        cin >> numStudents;

        if (numStudents < 1 || numStudents > MAX_STUDENTS) {
            cout << "Invalid number. Please enter a number between 1 and 25." << endl;
        }
    } while (numStudents < 1 || numStudents > MAX_STUDENTS);

    string names[MAX_STUDENTS];

   
    cout << "Enter the names of the students:" << endl;
    cin.ignore(); 
    for (int i = 0; i < numStudents; ++i) {
        cout << "Student " << (i + 1) << ": ";
        getline(cin, names[i]); 
    }

    
    for (int i = 0; i < numStudents - 1; ++i) {
        for (int j = 0; j < numStudents - 1 - i; ++j) {
            if (names[j] > names[j + 1]) {
                
                string temp = names[j];
                names[j] = names[j + 1];
                names[j + 1] = temp;
            }
        }
    }

    
    cout << "The student at the front of the line: " << names[0] << endl;
    cout << "The student at the end of the line: " << names[numStudents - 1] << endl;

    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
