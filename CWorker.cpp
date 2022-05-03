#include "CWorker.h"
#include <iostream>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <conio.h>
#include <sstream>
using namespace std;

CWorker::CWorker() {
	this->name = "ERROR";
	this->PIN = "Incorrect number";
	this->dailyPayment = 0.00;
	this->workDays = 0;
}
CWorker::CWorker(string name, string PIN, float dailyPayment, int workDays) {
	this->name = name;
	this->PIN = PIN;
	this->dailyPayment = dailyPayment;
	this->workDays = workDays;
}

CWorker::~CWorker() {};

void CWorker::setData() {
	cin.ignore();
	cout << "\tEnter name of the employee: \n"; getline(cin, name);
	cout << "Enter Personal Identity number: "; getline(cin, PIN);
	cout << "Enter daily peyment for the employee: "; cin >> dailyPayment;
	cout << "Enter work days for the employee: "; cin >> workDays;
}
void CWorker::getData() {
	cout << "\tName of the employee: " << name << endl
	 << "Personal id. number on the employee is: " << PIN << endl
	 << "Daily payment for the employ1ee: " << dailyPayment << endl
	 << "Work days for the employee: " << workDays << endl;
}
string CWorker::getGender() {
	string gender;
	int num = PIN[8] - '0';
	if (num % 2 == 0) {
		gender = "Male";
		return gender;
	}
	else {
		gender = "Women";
		return gender;
	}

}

void CWorker::menOver() {
			cout << "\tName of Employee with Salary over 400 : " << string(name) << endl;
};
void CWorker::womenUnder() {
	int year = atoi(PIN.substr(0, 2).c_str());
	int month = atoi(PIN.substr(2, 2).c_str());
	int day = atoi(PIN.substr(4, 2).c_str());
	

	cout << "\nWomen under 20$ daily peyment : " << string(name)<< 
	"\nBirthday Date : \n Year : "
	<< 1900 + year << ", mounth: " << month << ", day: " << day << endl;
}