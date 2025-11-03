//# Lab4-NestedIfGrade.cpp
#include <iostream>
using namespace std;

int main() {
    int grade;

    cout << "Enter grade: ";
    cin >> grade;

    if (grade >= 75) {
        cout << "Result: Pass" << endl;
        cout << "Congratulations!" << endl;
        cout << "Keep up the Goodwork." << endl;
    } else {
        cout << "Result: Fail" << endl;
        cout << "Better luck nextime." << endl;
    }

    return 0;
}

//Guide Questions
//#1. Because if you remove the braces, only the first statement after if or else will belong to the condition.
//#2. it make posible to execute a several related lines of code, in short it allow a complex,meaningful decision to handle cleanly.
