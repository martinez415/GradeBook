#include <iostream>
#include <string>
#include "Student.h"
using namespace std;

int main()
{
    // Declare variables for Grade Book 
    string studentName;
    double NofG = 0.0;
    double grade = 0.0;
    double totGrade = 0.0;
    double avgGrade = 0.0;
    string letterGrade = " ";

    // Prompt user for student name
    cout << "Wilbur Wright Online Gradebook\n==============================" << endl;
    cout << "Please enter student first name: ";
    cin >> studentName;

    // Create an instance of the student class by passing student name as parameter
    Student gradeBook(studentName);

    system("PAUSE");
    system("CLS");

    // Prompt user to enter the amount of grades
    cout << "How many grades do you wish to enter?: ";
    cin >> NofG;

    // For loop to prompt user to enter each grade, store in grade variable, and call add grade method to get total grade
    for (int x = 1; x <= NofG; x++) {
        cout << " Please enter grade #" << x << ": ";
        cin >> grade;
        gradeBook.AddGrade(grade);
    }

    // Call class methods to calculate and store total grade, average grade, letter grade for student
    gradeBook.CalcAverage(NofG);
    totGrade = gradeBook.getTotGrade();
    avgGrade = gradeBook.getAvgGrade();
    letterGrade = gradeBook.getLetterGrade(avgGrade);

    system("PAUSE");
    system("CLS");

    // Display results of student grade book
    cout << "Student Profile\n===============" << endl;
    cout << "Student Name: " << studentName << endl;
    cout << "Total Grade: " << totGrade << endl;
    cout << "Average Grade: " << avgGrade << endl;
    cout << "Letter Grade: " << letterGrade << endl;
}


