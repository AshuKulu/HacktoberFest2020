// CASINO GAME
#include<iostream>
#include<string>
#include<cstdlib>//header file which have random number gen function
#include<ctime>
using namespace std;
void drawline(int n,char symbol);
void rules();
 
 int main()
 {
 	string playername;
 	int amount;
 	int bettingamount;
 	int guess;//this will store the number given by user
 	int dice;//this will store the number given by computer
 	char choice;
 	
 	srand(time(0));//this will seed the number(random number gen function)
 	
 	drawline(60,'_');
 	cout<<"\n\n\n\t\tCASINO GAME\n\n\n\n";
 	drawline(60,'_');
 	
 	cout<<"\n\nEnter your name:";
 	getline(cin,playername);
 	
 	cout<<"\n\nEnter money to play the game: $";
 	cin>>amount;
 	
 	do
	 	{
	 		system("cls");
	 		rules();
	 		cout<<"\n\nyour current balance is $"<<amount<<"\n";
	 		//getting players betting amount
	 		
	 		do
	 		{
	 			cout<<playername<<" ,enter money to bet : $";
	 			cin>>bettingamount;
	 			if(bettingamount>amount)
	 			cout<<"your betting amount is more than your current balance\n"
	 			<<"\nRe-enter data\n";
	 			
			 }while(bettingamount > amount);
			 do
			 {
			 	cout<<"guess a number between 1 to 10: ";
			 	cin>>guess;
			 	if(guess<=0 || guess>10)
			 	cout<<"please check the number!! it should be between 1 to 10\n"<<"\nRe-enter data\n ";
			
        }while(guess <= 0 || guess > 10);
        
         dice = rand()%10 + 1; //this will genrate a random number between 1 to 10
        if(dice==guess)
        {
        	cout<<"\n\nGood Luck you won $"<<bettingamount*10;
        	amount=amount+bettingamount*10;
		}
		else
		{
			cout<<"Bad Luck this time you lost $"<<bettingamount;
			amount=amount-bettingamount;
		}
		cout << "\nThe winning number was : " << dice <<"\n";
        cout << "\n"<<playername<<", You have $ " << amount << "\n";
        if(amount == 0)
        {
            cout << "You have no money to play ";
            break;
        }
        cout << "\n\n-->Do you want to play again (y/n)? ";		
        cin >> choice;
    }while(choice =='Y'|| choice=='y');
    
    cout<<"\n\n\n";
    drawline(70,'=');
    cout<<"\n\nthanks for playing this game, your cureent balance is $"<<amount<<"\n\n";
     
     return 0;
    
	}
	void drawline(int n,char symbol)
	{for(int i=0;i<n;i++)
	cout<<symbol;
	cout<<"\n";
}
	void rules()
	{
		system("cls");
		cout<<"\n\n";
		drawline(80,'-');
    cout << "\t\tRULES OF THE GAME\n";
    drawline(80,'-');
    cout << "\t1. Choose any number between 1 to 10\n";
    cout << "\t2. If you win you will get 10 times of money you bet\n";
    cout << "\t3. If you bet on wrong number you will lose your betting amount\n\n";
    drawline(80,'-');
}
