#include<iostream>
using namespace std;
class restoring
{
    int x,y,count=0;
    int ar[50],br[50],ar1[50],br1[50];
    public:
        void getdata();
        void binary();
        void compliment();
        void sum();
        void subtract();
        void div();
        void left_shift();
        void display();
};
void restoring::getdata()
{
    cout<<"Divident : ";
    cin>>y;
    cout<<"Divisor : ";
    cin>>x;
}
void restoring::binary()
{
    int i,temp;
    temp=y;
    while(temp!=0)
    {
        temp=temp/2;
        count=count+1;
    }
    for(i=count;i>=0;i--)
    {
        ar[i]=x%2;
        x=x/2;
        br1[i]=ar[i];  
        ar1[i]=0;     
    }
    for(i=count-1;i>=0;i--)
    {
        br[i]=y%2;
        y=y/2;
    }
    cout<<"-----------------";
    cout<<"BINARY EQUIVALENT"<<endl;
    cout<<" M:";
    for(i=0;i<=count;i++)
        cout<<ar[i];
    cout<<" Q:";
    for(i=0;i<=count-1;i++)
        cout<<br[i];
        cout<<endl;
    cout<<"##############################"<<endl;
    cout<<endl;
}
void restoring::compliment()
{
    int i,c;
	for(i=count;i>=0;i--)
	{
		if(br1[i]==0)
			br1[i]=0;
		else{
			c=i;
			break;
		}
	}
	for(i=c-1;i>=0;i--)
	{
		if(br1[i]==1)
			br1[i]=0;
		else
			br1[i]=1;
	}
}
void restoring::sum()
{

	int i,c=0;
	cout<<"ADDITION"<<endl;
		cout<<"A:";
	for(i=0;i<=count;i++)
		cout<<ar1[i];

		cout<<" M:";
	for(i=0;i<=count;i++)
		cout<<ar[i];
		cout<<endl;

	for(i=count;i>=0;i--)
	{
		ar1[i]=ar1[i]+ar[i]+c;

		if(ar1[i]>1)
		{
			ar1[i]=ar1[i] % 2;
			c=1;
		}
		else
			c=0;
	}
}
void restoring::subtract()
{
   int i,c=0;
	cout<<"SUBTRACTION"<<endl;
		cout<<"A:";
	for(i=0;i<=count;i++)
		cout<<ar1[i];

		cout<<" MC:";
	for(i=0;i<=count;i++)
		cout<<br1[i];
		cout<<endl;

	for(i=count;i>=0;i--)
	{
		ar1[i]=ar1[i]+br1[i]+c;

		if(ar1[i]>1)
		{
			ar1[i]=ar1[i] % 2;
			c=1;
		}
		else
			c=0;
	}
}
void restoring::left_shift()
{
    cout<<"Left Shift"<<endl;
    int i;
    for(i=0;i<count;i++)
    {
        ar1[i]=ar1[i+1];
    }
    ar1[count]=br[0];
    for(i=0;i<count-1;i++)
        {
            br[i]=br[i+1];
        }

    cout<<" A:";
    for(i=0;i<=count;i++)
        cout<<ar1[i];
    cout<<" Q:";
    for(i=0;i<count-1;i++)
        cout<<br[i];
    cout<<"-";
    cout<<endl;
}
void restoring::div()
{
    int i,j;
    for(i=count;i>0;i--)
    {

         cout<<"Count : "<<i<<endl;
         if(ar1[0]==0)
         {
             left_shift();
             subtract();
         }
         else{
            left_shift();
            sum();
         }
         if(ar1[0]==0)
            br[count-1]=1;
         else
            br[count-1]=0;

         cout<<"----------------------------------"<<endl;
    cout<<" A: ";
    for(j=0;j<=count;j++)
        cout<<ar1[j];
    cout<<" Q: ";
    for(j=0;j<=count-1;j++)
        cout<<br[j];
        cout<<endl;
         cout<<"----------------------------------"<<endl;
         cout<<endl;
          cout<<"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl;
        cout<<endl;
    }

    if(ar1[0]==1)
    {

        cout<<"---------------------------------------"<<endl;
        sum();
    }
}
void restoring::display()
{
    cout<<"\t"<<"\t"<<"Result"<<endl;
    cout<<endl;
    int i;
    cout<<"\t"<< "Remainder: ";
    for(i=0;i<=count;i++)
        cout<<ar1[i];
    cout<<"  Quotient: ";
    for(i=0;i<=count-1;i++)
        cout<<br[i];
        cout<<endl<<endl;
        cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
}
int main()
{
    restoring obj;
    obj.getdata();
    obj.binary();
    obj.compliment();
    obj.div();
    obj.display();
    return 0;
}

