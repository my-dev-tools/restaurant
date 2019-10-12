#include<iostream.h>
#include<conio.h>
void Cal(int year);
void main()
{
	int y;
	clrscr();
	cout<<"Enter the year to check it's leap or not= \n";
	cin>>y;
	if(y%4==0)
	{
	cout<<"It's a leap year";
	}
	else
	{
	cout<<"It's not a leap year";
	}
	Cal(y);
	getch();
}
void Cal(int year)
{
	int month;
	cout<<"\nEnter the month= ";
	cin>>month;
	if(month==4 || month==6 || month==9 || month==11)
	{
		cout<<"\n30 days";
	}
	else if(month==2)
	{
		if(year%4==0) {
		cout<<"\n29 days";
		}
		else
		{	cout<<"\n28 days";
		}
	}
	else
	{       if(month>12 || month<=0) {
		cout<<"\ninvalid month";
		}
		else
		{ 	cout<<"\n31 days";
		}
	}

}

