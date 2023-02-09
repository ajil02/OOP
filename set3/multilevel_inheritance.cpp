#include<iostream>
using namespace std;

class student
{
	public:
		int rno;
		string name;
		
		void getStudentData()
		{
			cout<<"Enter the rollno:";
			cin>>rno;
			cout<<"Enter name:";
			cin>>name;
			
		}
};
class test:public student
{
	public:
		int m1,m2,m3;
		
		void getMarks()
		{
			cout<<"Enter the mark of subject1:";
			cin>>m1;
			cout<<"Enter the mark of subject2:";
			cin>>m2;
			cout<<"Enter the mark of subject3:";
			cin>>m3;	
		}
};
class result:public test
{
	public:
		int total;
		void compute()
		{
			total=m1+m2+m3;
		}
		void putresult()
		{
			cout<<"Roll no:"<<rno<<endl;
			cout<<"Name:"<<name<<endl;
			cout<<"Mark of subject1:"<<m1<<endl;
			cout<<"Mark of subject2:"<<m2<<endl;
			cout<<"Mark of subject3:"<<m3<<endl;
			cout<<"Total marks obtained:"<<total<<endl;
		}
};

int main()
{
	student s;
	test t;
	result r;
	
	r.getStudentData();
	r.getMarks();
	r.compute();
	cout<<endl<<"The result is:"<<endl;
	r.putresult();
}
