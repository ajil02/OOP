#include<iostream>
using namespace std;

class student 
{
	public: 
		int rollno;
		string name;
		int mark1,mark2,mark3,total;
		
		student()
		{
			cout<<"Enter roll no: ";
			cin>>rollno;
			cout<<"Enter name: ";
			cin>>name;
			cout<<"Enter mark 1: ";
			cin>>mark1;
			cout<<"Enter mark 2: ";
			cin>>mark2;
			cout<<"Enter mark 3:";
			cin>>mark3;
		}
		
		int compute()
		{
			total=mark1+mark2+mark3;
			return total;
		}
		
		virtual void showData()
		{
			cout<<endl<<"Roll no: "<<rollno;
			cout<<endl<<"Name: "<<name;
			cout<<endl<<"Mark 1 : "<<mark1;
			cout<<endl<<"Mark 2 : "<<mark2;
			cout<<endl<<"Mark 3 : "<<mark3;
			cout<<endl<<"Total : "<<total<<endl;
		}
};

class minorcourse : public student 
{
	public:
	 	string minorm1,minorm2,minorm3;
	 	
	 	minorcourse()
	 	{
	 		cout<<"Enter minor course 1: ";
			cin>>minorm1; 
			cout<<"Enter minor course 2: ";
			cin>>minorm2; 
			cout<<"Enter minor course 3: ";
			cin>>minorm3;
		}
		
		void showData()
		{
			cout<<endl<<"Roll no: "<<rollno<<endl;
			cout<<"Name: "<<name<<endl;
			cout<<minorm1<<" mark:"<<mark1<<endl;
			cout<<minorm2<<" mark:"<<mark2<<endl;
			cout<<minorm3<<" mark:"<<mark3<<endl;
		}
};

int main()
{
	cout<<endl<<"Student Class"<<endl;
	student obj1;
	obj1.compute();
	
	cout<<endl<<"Minorcourse Class"<<endl;
	minorcourse obj2;
	
	student *ptr;
	ptr=&obj2;
	cout<<endl<<"Display Student class:";
	obj1.showData();
	cout<<endl<<"Display Minor class:";
	obj2.showData();
	cout<<endl<<"Display using pointer:"<<endl;
	ptr->showData();
}


