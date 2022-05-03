/*Да се състави програма за нуждите на производствена организация, която съхранява в масив следните данни за работниците:
-    име;
-    ЕГН;
-    размер на дневното заплащане;
-    брой на отработени дни през месеца';
и извършва следните операции, избирани от меню:
-    добавя към масива данните на нов работник;
-    извежда всички въведени данни;
-    извежда имената на мъжете с месечно заплащане над 400лв;
-    създава нов масив с имената и датите на раждане на жените с дневно заплащане под 20 лв.
 */


#include "CWorker.h"
#include <iostream>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

void main() {
	
	CWorker employee[100];
	int numOfemp=0,womensUnder=0;
	char menu;
	//CWorker* employee = new CWorker[employees];
	do {
		cout << "         MENU FOR ADDING EMPLOYEE:\n"
		 << "1 - Add new employee: \n"
		 << "2 - Show all employee: \n"
		 << "3 - Names of the all men with salary over 400$: \n"
		 << "4 - Names and birth dates of the all women with daily salary above 20$: \n"
		 << "Chose 0 for end:";
		cin >> menu;

		switch (menu) {
		case '0': break;
		case '1': employee[numOfemp++].setData(); break;
		case '2': for (int i = 0; i < numOfemp; i++) employee[i].getData(); break;
		case '3': for (int i = 0; i < numOfemp; i++) if (employee[i].getGender() == "Male" && employee[i].dailyPayment * employee[i].workDays > 399) 
			employee[i].menOver()
		; break;
		case '4': for (int i = 0; i < numOfemp; i++)  if (employee[i].dailyPayment < 20 && employee[i].getGender() == "Women")
			{
			employee[i].womenUnder();
			CWorker* employee = new CWorker[womensUnder++];
			

		}
			
			; break;
		default: cout << "\nERROR YOUR INPUT IS INCORRECT\n";
		}
		
	} while (menu != '0');
	
}