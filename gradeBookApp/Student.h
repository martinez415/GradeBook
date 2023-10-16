#pragma once
#include <iostream>
using namespace std;

class Student
{
private:
	string name;
	double NofG;
	double TotalGrade;
	double AverageGrade;

public:
	Student(string);
	void AddGrade(double);
	void CalcAverage(double);
	double getAvgGrade();
	double getTotGrade();
	string getLetterGrade(double);
};
