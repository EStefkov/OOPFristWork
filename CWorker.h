#pragma once
#include <iostream>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

class CWorker
{
protected:
	
public:
	string name, PIN;
	float dailyPayment;
	int workDays;
	
	CWorker();
	CWorker(string name, string PIN, float dailyPayment, int workDays);
	~CWorker(); 
	void setData();
	void getData();
	void pin();
};

