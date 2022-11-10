#include<iostream>
using namespace std;
class student
{
	public:
		int stdid;
		string stdname;
	
		void getpersonalDetails()
		{
			cout<<"Enter student id:";
			cin>>stdid;
			cout<<"Enter student name:";
			cin>>stdname;
		}
		void putpersonalDetails()
		{
			cout<<"Student id is:"<<stdid<<endl;
			cout<<"Student name is:"<<stdname<<endl;
		}
};
class teacher
{
	public:
		int tid;
		string tname;
		
		void getpersonalDetails()
		{
			cout<<"Enter teacher id:";
			cin>>tid;
			cout<<"Enter teacher name:";
			cin>>tname;
		}
		void putpersonalDetails()
		{
			cout<<"Teacher id is:"<<tid<<endl;
			cout<<"Teacher name is:"<<tname<<endl;
		}
};
class gradecard
{
	public:
		int stdid,tid,intm1,intm2,asmark1,asmark2,endsem,totia,total,x;
		float gpa;
		
		void entermarks()
		{
			cout<<"Enter the student id:";
			cin>>stdid;
			cout<<"Enter the teacher id:";
			cin>>tid;
			cout<<"Enter sem1 internal mark:";
			cin>>intm1;
			cout<<"Enter sem1 assignment mark:";
			cin>>asmark1;
			cout<<"Enter sem2 internal exam :";
			cin>>intm2;
			cout<<"Enter sem2 assignment mark:";
			cin>>asmark2;
			cout<<"Enter endsem mark:";
			cin>>endsem;
			totia=intm1+intm2+asmark1+asmark2;
			total=endsem+totia;
		}
		void compute()
		{
			gpa=total/10;
			
			if(gpa>9)
			{
				x=10;
			}
			else if(gpa>8&&gpa<9)
			{
				x=9;
			}
			else if(gpa>7&&gpa<8)
			{
				x=8;
			}
			else
			{
				cout<<"Pass";
			}
		}
		void viewgradecard()
		{
			compute();
			cout<<"The student id is:"<<stdid<<endl;
			cout<<"Sem1 internal mark is:"<<intm1<<endl;
			cout<<"Sem1 assignment mark:"<<asmark1<<endl;
			cout<<"Sem2 internal exam is:"<<intm2<<endl;
			cout<<"Sem2 assignment mark is:"<<asmark2<<endl;
			cout<<"End sem mark is:"<<endsem<<endl;
			cout<<"Total GPA is:"<<x<<endl;
		}
};

gradecard gd1;

int main()
{
	student st1;
	teacher tchr1;
	st1.getpersonalDetails();
	st1.putpersonalDetails();
	tchr1.getpersonalDetails();
	tchr1.putpersonalDetails();
	gd1.entermarks();
	gd1.viewgradecard();
}
			
			
