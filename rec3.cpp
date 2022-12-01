#include<iostream>
using namespace std;
static int c=1;
class employee
{
	private:
		int computeNetSalary()
		{
			da=0.52*basic;
			if(basic<10000)
			{
				it=basic*0;
			}
			else if(10000<basic<20000)
			{
				it=basic*0.10;
			}
			else if(20000<basic<30000)
			{
				it=basic*0.20;
			}
			else if(30000<basic<40000)
			{
				it=basic*0.30;
			}
			netsalary=basic+da-it;
		}
	public:
		int empno=0,basic,da,it,netsalary;
		string ename;
			
		void getdata()
		{
			cout<<"Enter the employee name:";
			cin>>ename;
			cout<<"Enter the basic salary:";
			cin>>basic;
		}
		employee()
		{
			empno=empno+c;
			c=c+1;
		}
		void putdata()
		{
			computeNetSalary();
			cout<<"The employee number is:"<<empno<<endl;
			cout<<"The employee name is:"<<ename<<endl;
			cout<<"The basic salary of the employee is:"<<basic<<endl;
			cout<<"DA:"<<da<<endl;
			cout<<"Income tax:"<<it<<endl;
			cout<<"Net salary of the employee is:"<<netsalary<<endl;
		}
		~employee()
		{
			cout<<"Executing destructor"<<endl;
		}
			
};

int main()
{	
	employee obj[3];
	for(int i=0;i<3;i++)
	{
	obj[i].getdata();
	obj[i].putdata();
	cout<<endl;
	}
}				
