#include<iostream>
using namespace std;

class student
{
	public:
		int rno,m1,m2;
		
		void getStudentData()
		{
			cout<<"Enter the rollno:";
			cin>>rno;
			cout<<"Enter the mark of subject1:";
			cin>>m1;
			cout<<"Enter the mark of subject2:";
			cin>>m2;
		}
};
class sport
{
	public:
		int graceMark;
		
		void getSportsData()
		{
			cout<<"Enter the grace mark:";
			cin>>graceMark;
		}
};
class report:public student,public sport
{
	public:
		int total;
		float avg;
		void compute()
		{
			total=m1+m2+graceMark;
			avg=total/3;
		}
		void displayReport()
		{	
			cout<<"Roll no:"<<rno<<endl;
			cout<<"Mark of subject1:"<<m1<<endl;
			cout<<"Mark of subject2:"<<m2<<endl;
			cout<<"Grace mark:"<<graceMark<<endl;
			cout<<"Total marks obtained:"<<total<<endl;
			cout<<"Average mark is:"<<avg<<endl;
		}
};

int main()
{
	student s;
	sport t;
	report r;
	
	r.getStudentData();
	r.getSportsData();
	r.compute();
	cout<<endl<<"The report is:"<<endl;
	r.displayReport();
}
