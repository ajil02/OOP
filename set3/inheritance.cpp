#include<iostream>
using namespace std;

class employee
{
	public:
		int age,phone,sal;
		string name,address;
		
		void getdata()
		{
			cout<<"Enter name:";
			cin>>name;
			cout<<"Enter age:";
			cin>>age;
			cout<<"Enter phone number:";
			cin>>phone;
			cout<<"Enter the address:";
			cin>>address;
			cout<<"Enter the salary:";
			cin>>sal;
		}
		void printsalary()
		{
			cout<<"Name:"<<name<<endl;
			cout<<"Age:"<<age<<endl;
			cout<<"Phone number:"<<phone<<endl;
			cout<<"Address:"<<address<<endl;
			cout<<"Salary:"<<sal<<endl;
		}
};
class officer:public employee
{
	public:
		string specialisation;
		officer()
		{
			cout<<"Enter the specialisation:";
			cin>>specialisation;
		}
		void printdata()
		{
			cout<<"Specialised field:"<<specialisation<<endl;
		}
};
class manager:public employee
{
	public:
		string dept;
		manager()
		{
			cout<<"Enter the department:";
			cin>>dept;
		}
		void printdata1()
		{
			cout<<"Department:"<<dept<<endl;
		}
};


int main()
{
	employee e;
	cout<<endl<<"Details of the officer:"<<endl;
	officer o;
	o.getdata();
	
        cout<<endl<<"Details of the manager:"<<endl;
        manager m;
        m.getdata();
        
        cout<<endl<<"Details of the officer:"<<endl;
	o.printsalary();
	o.printdata();
	
	cout<<endl<<"Details of the manager:"<<endl;
	m.printsalary();
        m.printdata1();
}	


