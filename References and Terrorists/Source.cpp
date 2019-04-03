#include<iostream>
#include<string>
#include<stdlib.h>
#include<windows.h>
#include <thread>

using namespace std;

//Declaring Functions
void CheckJoesBankBalance();
void CheckHackerBankBalance();
void AgentChoice();
void NormalBankTransaction(int x, int y);
void HackedBankTransaction(int& x, int& y);

//Declaring and Initializing Variables
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
int HackersBackBalance = 100000000;
int JoesCoffeShopBalance = 100;
int Choice;
string AgentName;
string FlavorIn;

// Main function handles most of the text work that the player will see on the screen
int main()
{
	cout << "Please enter your name:   ";
	cin >> AgentName; // Getting name from the player, little bit of added flavor
	cout << "\nWelcome Agent " + AgentName + ", to the CIA's AntiHacker Program.\n";
	cout << "We've gotten a tip that a terrorist ring has amassed a large sum of money, and they plan to use it to establish a network of people here in America.\n";
	cout << "Using this programs credentials, you should be able to access and check that bank account, as well as the the bank account of a 'Joe's Coffee Shop'.\n";
	cout << "Joe's Coffee Shop has helped our mission countless times, and we're going to return the favor.\n";
	cout << "Now, let us begin...\n";
	cout << "Which account would you like to look at first?\n\n";
	AgentChoice(); // Calls the AgentChoice function
	cout << "\nNow that you've seen both accounts, with the simple press of a button, you can swap those amounts.\n";
	cout << "Joe's going to have a hefty payday, and we're going to have free coffee for life.\n";
	cout << "Press any button on your keyboard and the enter key to initiate the swap program.\n";
	cin >> FlavorIn; // Added this cin to make it seem like the player is actually starting the program, just some flavor
	NormalBankTransaction(HackersBackBalance, JoesCoffeShopBalance); // Calls the NormalBankTransaction function with the parameters of the Hacker's and Joe's bank balances.
	cout << "Damnit! They added some kind of countermeasure.\n";
	cout << "Give me a second here...\n";
	cout << "Okay, let's give this one a try.\n";
	cout << "Press any button on your keyboard and the enter key to initiate our new and improved swap program.\n";
	cin >> FlavorIn;
	system("pause");
	return 0;
}

void AgentChoice() // Simple function that uses a swap to let the player choose which bank account to see first
{
	SetConsoleTextAttribute(hConsole, 14);
	cout << "1 - Joe's Coffee Shop\n";
	cout << "2 - The Terrorist's Account\n\n";
	SetConsoleTextAttribute(hConsole, 15);
	cin >> Choice;
	switch(Choice)
	{
	case 1:
		CheckJoesBankBalance();
		cout << "Now for the hacker's account.\n\n";
		CheckHackerBankBalance();
		break;

	case 2:
		CheckHackerBankBalance();
		cout << "Now for Joe's Bank account.\n\n";
		CheckJoesBankBalance();
		break;
	}
	return;
}


void CheckJoesBankBalance()
{
	cout << "\nJOE'S BANK BALANCE\n";
	cout << "$" << JoesCoffeShopBalance << endl;
	system("pause");
	return;
}

void CheckHackerBankBalance()
{
	cout << "\nHACKER'S BANK BALANCE\n";
	cout << "$" << HackersBackBalance << endl;
	system("pause");
	return;
}

void NormalBankTransaction(int x, int y)
{
	cout << "\nInitializing Bank Transaction..."<< endl;
	int temp = x;
	x = y;
	y = temp;
	SetConsoleTextAttribute(hConsole, 12);
	cout << "Warning, credentials invalid. Transaction Failed.\n";
	SetConsoleTextAttribute(hConsole, 15);
	CheckJoesBankBalance();
	CheckHackerBankBalance();
	system("pause");
	return;
}

void HackedBankTransaction(int& x, int& y)
{
	
}
