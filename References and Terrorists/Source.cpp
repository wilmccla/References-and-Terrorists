#include<iostream>
#include<string>

using namespace std;

//Declaring Functions
void CheckNormalBankBalance();
void CheckHackedBankBalance();

//Declaring and Initializing Variables
int OriginalBankBalance = 1000000;
int HackedBankBalance = 1000;
string AgentName;

int main()
{
	cout << "Please enter your name:   ";
	cin >> AgentName;
	cout << "\nWelcome Agent " + AgentName + " to the CIA's AntiHacker Program.\n";
	cout << "We've gotten a tip that the bank account of a large celebrity has been targeted.\n";
	cout << "Using this programs credentials, you should be able to access and check that bank account, as well as the suspected bank account the hackers moved the money to.";
	system("pause");
	
}

void CheckNormalBankBalance()
{
	cout << "$ " << OriginalBankBalance;
}

void CheckHackedBankBalance()
{
	cout << "$ " << HackedBankBalance;
}
