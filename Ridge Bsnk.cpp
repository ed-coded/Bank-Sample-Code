#include <iostream>
#include <cstdlib>
#include <string>
#include <sstream>
#include <windows.h>
#include "stringconverter.h"

using namespace std;

void start();
void account_balance();
//void deposit();
//void withdraw();
	
	int Balance = 25000;
	string name;

int main(){
	int answer;
	system("color 03");
	SAT:start();
	cin >> answer;
		switch(answer){
			case 1: account_balance();break;
			case 2: //deposit();break;
			case 3: //withdraw();break;
			default: cout << "What you entered does not exit!!" << endl;
					 goto SAT; break;
		}
	return 0;
}

void start(){
	int ans;
		cout << "\n\t\t\t RIDGE BANK ATM \t\n";
		cout << "\t Welcome to the Ridge Bank ATM interface \n";
		cout << "Please verify your identity with us, \n";
			cout << "Enter your name: ";
			getline(cin, name);
			system("cls");
		cout << "\n\t\t\t RIDGE BANK ATM \t\n";
		cout << "1. Account Balance" << endl;
		cout << "2. Deposit" << endl;
		cout << "3. Withdrawal" << endl;
		cout << "4. Exit" << endl;
		cout << "Input: ";
}

void account_balance(){
	system("cls");
	long long int num, num1;
	string snum, snum1, scode;
	int code;
	for(int n = 1; n <= 3; n++){
		system("cls");
		cout << "Please Enter your 14 Digit Account Number\n";
		cout << "Account No.: ";
		cin >> num;
		snum = To_string(num);
		if(snum.length() == 1){
			system("cls");
			cout << "Please Re-enter your 14 Account Number\n";
			cout << "Account No.: ";
			cin >> num1;
				snum1 = To_string(num1);
				if( snum != snum1){
					system("cls");
					cout << "You failed to enter a valid Account number!"<<endl;
					cout << "Your session has been terminated.\n";
					break;
				}
		}
		else if(n == 3){
			system("cls");
			cout << "You failed to enter a valid Account number!"<<endl;
			cout << "Your session has been terminated.\n";
				break;
		}
		else{   system("cls");
				cout << "The Acount Number you entered does not exist\n";
				cout << "Please Retry!!" <<endl;
				Sleep(2500);
			}
		}
	if(num == num1){
		system("cls");
		cout << "Please verify your passcode!"<<endl;
		cout << "Enter 4 digit code: ";
		cin >> code;
		scode = To_string(code);
			if(scode.length() != 4){
				system("cls");
				cout << "You entered an invalid code!" << endl;
				cout << "This session has been terminated.\n";
			}
		
	}
	
}




