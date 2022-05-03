#include "CWorker.h"
#include <iostream>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <conio.h>
using namespace std;
CWorker::CWorker() {
	name = "ERROR";
	PIN = "Incorrect number";
	dailyPayment = 0.00;
	workDays = 0;

	
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
	cout << "\tEnter name of the employee: "; getline(cin, name);
	cout << "Enter Personal Identity number: "; getline(cin, PIN);
	cout << "Enter daily peyment for the employee: "; cin >> dailyPayment;
	cout << "Enter work days for the employee: "; cin >> workDays;
}
void CWorker::getData() {
	cout << "\tName of the employee: " << name << endl;
	cout << "Personal id. number on the employee is: " << PIN << endl;
	cout << "Daily payment for the employ1ee: " << dailyPayment << endl;
	cout << "Work days for the employee: " << workDays << endl;
}
void CWorker::pin() {
	string last1 = PIN.substr(PIN.length() - 1, 1);
	//string PINs = PIN;
	//std::string last2 = PINs.substr(PINs.length() - 2, 2);

};