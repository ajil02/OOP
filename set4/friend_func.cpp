#include <iostream>
#include <stdlib.h>
using namespace std;

class account 
{
	public:
		string name;
		int accno;
		string acctype;
		
	account()
	{
		name="Ram";
		accno=21023;
		acctype="Platinum";
	}
};

class curacct: public account 
{
	public:
		float camt;
		
		curacct()
		{
			acctype="Current";
			camt=0;
		}
		
	friend void display(curacct &a);
	friend void deposit(curacct &a,float amt);
	friend void withdraw(curacct &a, float amt);
};

class savacct: public account {
	public:
		float samt;
		float intrate;
		
		savacct()
		{
			acctype="Savings";
			samt=0;
			intrate=0.05;
		}
	
	friend void display(savacct &a);
	friend void deposit(savacct &a,float amt);
	friend void interest(savacct &a);
	friend void withdraw(savacct &a, float amt);
};

void display(curacct &a)
{
	cout<<"Account Owner:"<<a.name<<endl;
	cout<<"Account No:"<<a.accno<<endl;
	cout<<"Account Type:"<<a.acctype<<endl;
	cout<<"Current Account Balance:"<<a.camt<<endl;
}

void display(savacct &a)
{
	cout<<"Account Owner:"<<a.name<<endl;
	cout<<"Account No:"<<a.accno<<endl;
	cout<<"Account Type:"<<a.acctype<<endl;
	cout<<"Savings Account Balance:"<<a.samt<<endl;
}

void deposit(curacct &a,float amt)
{
	a.camt+=amt;
	cout<<"\nAmount Deposited in Current Account\n";
}

void deposit(savacct &a,float amt)
{
	a.samt+=amt;
	cout<<"\nAmount Deposited in Savings Account\n";
}

void interest(savacct &a)
{
	cout<<"Interest Rate: "<<a.intrate<<endl;
	a.samt+=(a.samt*a.intrate);
	cout<<"Interest Deposited:"<<endl;
}

void withdraw(curacct &a, float amt)
{
	if(a.camt<amt)
		cout<<"Insufficient Fund"<<endl;
	else
	{
		a.camt-=amt;
		cout<<"Cash Withdrawn from Current Account"<<endl;
	}
}

void withdraw(savacct &a, float amt)
{
	if(a.samt<amt)
		cout<<"Insufficient Fund"<<endl;
	else
	{
		a.samt-=amt;
		cout<<"Cash Withdrawn from Savings Account"<<endl;
	}
}

int main()
{
	curacct current;
	savacct savings;
	int ch;
	while(1)
	{
		cout<<"Bank Menu"<<endl;
		cout<<"1.Display Balance\n2.Deposit Cash"<<endl;
		cout<<"3.Deposit Interest\n4.Withdraw Cash"<<endl;
		cout<<"5.Exit"<<endl;
		cout<<"Enter your choice: ";
		cin>>ch;
		
		switch(ch)
		{
			case 1:
			{
				int a;
				cout<<"Choose account type to display balance\n1.Current\n2.Savings\n   Enter Choice: ";
				cin>>a;
				switch(a)
				{
					case 1:
					{
						display(current);
						break;
					}
	
					case 2:
					{
						display(savings);	
						break;
					}
				}
			break;
			}
			
		case 2:
		{
			int a;
			cout<<"Choose account type to deposit into?\n   1.Current\n   2. Savings\n   Enter Choice: ";
			cin>>a;
			switch(a)
			{
				case 1:
				{
					int dep;
					cout<<"Enter Deposit amount:";
					cin>>dep;
					deposit(current,dep);
					break;
				}
				
				case 2:
				{
					int dep;
					cout<<"Enter Deposit amount:";
					cin>>dep;
					deposit(savings,dep);
					break;
				}
			}
			break;
	}
	
		case 3:
		{
			interest(savings);
			break;
		}
	
		case 4:
		{
			int a;
			cout<<"Choose account type to withdraw from?\n1.Current\n2. Savings\n   Enter Choice: ";
			cin>>a;
			switch(a)
			{
				case 1:
				{
					int take;
					cout<<"Enter Withdrawal amount:";
					cin>>take;
					withdraw(current,take);
					break;
				}
				
				case 2:
				{
					int take;
					cout<<"Enter Withdrawal amount:";
					cin>>take;
					withdraw(savings,take);
					break;
				}
			}
			break;
		}
		
		case 5:
		{
			cout<<"Exiting"<<endl;
			exit(0);
		}
	
		default:
		{
			cout<<"Wrong choice"<<endl;
			break;
		}
		
	}
	cout<<"\n\n";
	}
}

