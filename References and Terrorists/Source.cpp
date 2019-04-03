#include<iostream>
#include<string>
#include<stdlib.h>
#include<windows.h>
#include <thread>

using namespace std;

//Declaring Functions
void CheckNormalBankBalance();
void CheckHackedBankBalance();
void AgentChoice();

//Declaring and Initializing Variables
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
int HackersBackBalance = 100000000;
int JoeCoffeShopBalance = 1000;

string AgentName;

int main()
{
	cout << "Please enter your name:   ";
	cin >> AgentName;
	cout << "\nWelcome Agent " + AgentName + " to the CIA's AntiHacker Program.\n";
	cout << "We've gotten a tip that a terrorist ring has amassed a large sum of money, and they plan to use it to establish a network of people here in America.\n";
	cout << "Using this programs credentials, you should be able to access and check that bank account, as well as the the bank account of a 'Joe's Coffee Shop'.\n";
	cout << "Joe's Coffee Shop has helped our mission countless times, and we're going to return the favor.";
	

	system("pause");
	return 0;
}

void AgentChoice()
{
	
}


void CheckNormalBankBalance()
{
	
}

void CheckHackedBankBalance()
{
	
}
