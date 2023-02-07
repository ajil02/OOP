#include<iostream>
using namespace std;
class student
{
	public:
		int rno;
		string name;
	
		void getData()
		{
		cout<<"Enter the roll number:";
		cin>>rno;
		cout<<"Enter the name:";
		cin>>name;
		}
		void print1()
		{
			cout<<"Roll number:"<<rno;
			cout<<"Name:"<<name;
		}
};
class intern:public student
{
	public:
		int IA1,IA2,IA3;
		void getMark()
		{
		cout<<"Enter the internal assessment mark1:"; 
		cin>>IA1;
		cout<<"Enter the internal assessment mark2:"; 
		cin>>IA2;
		cout<<"Enter the internal assessment mark3:";
		cin>>IA3;
		}
		
		void print2()
		{
			cout<<"Internal assessment mark1:"<<IA1;
			cout<<"Internal assessment mark2:"<<IA2;
			cout<<"Internal assessment mark3:"<<IA3;
		}
		friend class result;	
};
class external:public student
{
	public:
		int ese;
		void getEse()
		{
		cout<<"Enter the end semester exam mark:";
		cin>>ese;
		}
		void print3()
		{	
			cout<<"End semester exam mark:"<<ese;
		}
		friend class result;	
};
class result
{
	public:
		
		int total;
		int compute(student &t)
		{
			t.total=t.IA1+t.IA2+t.IA3+t.ese;
		}
		void print4()
		{
			cout<<"Total mark:"<<total;
		}
};
int main()
{
	student s;
	intern i;
	external e;
	result r;
	s.getData();
	s.print1();
	i.getMark();
	i.print2();
	e.getEse();
	e.print3();
	r.compute(s);
	r.print4();
}
		
