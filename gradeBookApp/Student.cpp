#include "Student.h"

Student::Student(string n)
{
	this->name = n;
	this->NofG = 0.0;
	this->TotalGrade = 0.0;
	this->AverageGrade = 0.0;
}

void Student::AddGrade(double g)
{
	this->TotalGrade += g;
}

void Student::CalcAverage(double g)
{
	this->AverageGrade = this->TotalGrade / g;
}

double Student::getAvgGrade() {
	return this->AverageGrade;
}

double Student::getTotGrade() {
	return this->TotalGrade;
}

string Student::getLetterGrade(double g)
{
	if (g == 100)
	{
		return "A+";
	}
	else if (g >= 93)
	{
		return "A";
	}
	else if (g >= 90)
	{
		return "A-";
	}
	else if (g >= 87)
	{
		return "B+";
	}
	else if (g >= 83)
	{
		return "B";
	}
	else if (g >= 80)
	{
		return "B-";
	}
	else if (g >= 77)
	{
		return "C+";
	}
	else if (g >= 73)
	{
		return "C";
	}
	else if (g >= 70)
	{
		return "C-";
	}
	else if (g >= 67)
	{
		return "D+";
	}
	else if (g >= 63)
	{
		return "D";
	}
	else if (g >= 60)
	{
		return "D-";
	}
	else
	{
		return "F";
	}
}
