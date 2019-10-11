#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;


void drawLine(int n, char symbol){

	for (int i = 0; i < n; ++i)
	{
		cout<< symbol;
	}
cout<<"\n";

}
void rules(){
	system("cls");
	cout<<"\n\n";
	drawLine(100,'-');
	cout<<"\t Rules Of Game\n";
	drawLine(100,'-');
	cout<<"\t1. Choose any number between 1 to 10\n";
	cout<<"\t2. If you win you got the 10x of your money\n";
	cout<<"\t3. If you choose the wrong number you will loose your money\n";

	drawLine(100,'-');

}




int main()
{
	string playerName;
	int amount;
	int bettingAmount;
	int guess;
	int dice;
	char choice;

	srand(time(0));



	drawLine(60,'_');
	cout<<"\n\nWelcome to game\n\n\n";
	drawLine(60,'_');

	cout<<"\n Enter your name\n\n";
	getline(cin,playerName);

	cout<<"\nEntet amount you want to deposit\n\n";
	cin>>amount;

	do{
		system("cls");
		rules();
		cout<<"your current balance is "<<amount<<"\n";


		do{
			cout<<playerName<< " enter amount to bet:  \n";
			cin >> bettingAmount;
			if (bettingAmount > amount)
			{
				cout<<"Insufficient balance\n try again \n";
			}

		}
		while(bettingAmount >= amount);

		do
		{
			cout<<"enter your guess for number\n";
			cin >> guess;

			if (guess <= 0 || guess > 10)
			{
				cout<<"your guess is out of bound\n";
			}

		}
		while(guess<=0 || guess >10);



		dice = rand()%10 +1;

		if (guess == dice)
		{
			cout<< " \n\n good luck you won\n"<< bettingAmount *10;
			amount = amount + bettingAmount*10;
		}
		else{
			cout<<"Bad luck , try next time , you lost "<<bettingAmount<<endl;
			amount = amount - bettingAmount;

		}

		cout<<"\n the winning number was : "<<dice<<"\n";

		if (amount == 0)
		{
			cout << "you have no money to play";
			break;
		}

		cout<<"\n\n Do you want to play again (Y/y)\n";
		cin >> choice;

	}
	while(choice == 'y' || choice == 'Y');


	cout << "\n\n\n";
	cout << "thanks for playing the game \n";
	cout << "your account balance is : "<<amount<<endl;

	drawLine(70,'*');



	return 0;
}
