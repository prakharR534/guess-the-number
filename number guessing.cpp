#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

void rules(){
	system("cls");
	cout<<"\n\n";
	drawLine(100,'-');
	cout<<"\t Rules Of Game\n";
	drawLine(100,'-');
	cout<<"\t1. Choose any number between 1 to 10\n";
	cout<<"\t2. ";

	drawLine(100,'-');

}

void drawLine(int n, char symbol){

	for (int i = 0; i < n; ++i)
	{
		cout<< symbol;
	}
cout<<"\n";

}


int main()
{
	string playerName;
	int amount;
	int bettingAmount;
	int guess;
	int dice;
	char choice;


	
	return 0;
}