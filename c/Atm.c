#include <stdio.h>
void reset();
balance=10000,pass=9557;
int main()
{
	int choice,amount,n=0,number,opt;
	char ch;
	do
	{
		printf("=============WELCOME TO THE HDFC BANK=============\n");
		reset();
	    printf("\n\nPress 1 for Cash Deposit\nPress 2 for Cash Withdrawl\nPress 3 for Balance Enquiry\nPress 4 for Quit");
		printf("\n\nEnter your choice\n");
		scanf("%d",&choice);
		if(choice==1)
		{
			printf("Enter the amount to be paid\n");
			scanf("%d",&amount);
			if(amount>=50 && amount%50==0)
			{
				while(n<amount)
			    {
				    printf("Enter the amount in following notes\n");
			        printf("press 1 for 50\npress 2 for 100\npress 3 for 200\npress 4 for 500\npress 5 for 2000\n");
			        scanf("%d",&opt);
			        if(opt==1)
			    	{
			    		printf("Enter the number of notes\n");
			    		scanf("%d",&number);
			    		n+=number*50;
			    	}
			    	else if(opt==2)
			    	{
			    		printf("Enter the number of notes\n");
			    		scanf("%d",&number);
			    		n+=number*100;
			    	}
			    	else if(opt==3)
			    	{
			    		printf("Enter the number of notes\n");
			    		scanf("%d",&number);
			    		n+=number*200;
			    	}
			    	else if(opt==4)
			    	{
			    		printf("Enter the number of notes\n");
			    		scanf("%d",&number);
			    		n+=number*500;
			    	}
			    	else if(opt==5)
			    	{
			    		printf("Enter the number of notes\n");
			    		scanf("%d",&number);
			    		n+=number*2000;
			    	}
			    	else
			    	{
			    		printf("Wrong choice\n");
			    	}
			    }
			    if(n==amount)
			    {
			    	printf("Amount successfully paid\n");
			    	printf("============Thanks for using our service============\n");
			    }
			    else
			    {
			    	printf("You enter larger number of notes than amount\n");
			    }
			}
			else
			{
				printf("Enter the valid amount\n");
			}
		}
		else if(choice==2)
		{
			printf("Emter the amount to be withdraw\n");
			scanf("%d",&amount);
			if(balance>=amount)
			{
				printf("Transaction successful\nCollect your money\n");
				balance=balance-amount;
			}
			else
			{
				printf("Insufficient balance\n");
				printf("============Thanks for using our service============\n");
			}
		}
		else if(choice==3)
		{
			printf("Your balance is %d",balance);
		}
		else if(choice==4)
		{
			printf("============Thanks for using our service============\n");
		}
		else
		{
			printf("Invalid choice\n");
		}
		printf("Want more transaction (y/n)\n");
		scanf("%c",&ch);
	}while(ch=='y');
	return 0;
}
void reset()
{
	int p,mob,mobile=5403;
	char ch;
	printf("Enter your password\n");
	scanf("%d",&p);
	if(p!=pass)
	{
		printf("You have entered wrong password\nit seems to be unauthorized access\n");
		printf("want to reset your password (y/n)\n");
		scanf("%c",&ch);
		if(ch=='y')
		{
			printf("Verify your last four mobile digit\n");
			scanf("%d",&mob);
			if(mob==mobile)
			{
				printf("Enter your new password\n");
				scanf("%d",&p);
			}
			else
			{
				printf("It seems to be spam\n");
			}
		}
		else
		{
			printf("============Thanks for using our service============\n");
			exit(0);
		}
		
	}
	else
	{
		printf("You have successfully login\n");
	}
}
