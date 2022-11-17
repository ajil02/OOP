#include<iostream>
using namespace std;

class employee
{
	public:
		string name,address;
		int year,salary;

		void getdata()
		{
			cout<<"Enter the name:";
			cin>>name;
			
			cout<<"Enter the date of joining:";
			cin>>year;
			
			cout<<"Enter the salary:";
			cin>>salary;
			
			cout<<"Enter the address:";
			cin>>address;
		}
		
		void putdata()
		{
			cout<<endl;
			cout<<name<<"  "<<year<<"  "<<salary<<"  "<<address;
			cout<<endl;
		}	
};

int main()
{
	employee emp1,emp2,emp3;
	emp1.getdata();
	emp2.getdata();
	emp3.getdata();
	cout<<"Name"<<" Year Of Joining "<<" Salary "<<"Address";
	emp1.putdata();
	emp2.putdata();
	emp3.putdata();
}
