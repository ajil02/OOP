#include<iostream>
using namespace std;
class student
{
	public:
		int Rno,cont,sgpa[8],i;
		string Sname,email;
		float cgpa,sum;
		void getdata()
		{
			cout<<"Enter the name of the student:";
			cin>>Sname;
			cout<<"Enter the roll no:";
			cin>>Rno;
			cout<<"Enter the contact number:";
			cin>>cont;
			cout<<"Enter the email address:";
			cin>>email;
			for(i=0;i<8;i++)
			{
				cout<<"Enter the Sem "<<i+1<<" GPA:";
				cin>>sgpa[i];
			}
		}
		void putdata()
		{
			cout<<"Name of the student is:"<<Sname<<endl;
			cout<<"Roll no is:"<<Rno<<endl;
			cout<<"Contact number of the student is:"<<cont<<endl;
			cout<<"Email address of the student is:"<<email<<endl;
			for(i=0;i<8;i++)
			{
				cout<<"Sem "<<i+1<<" GPA is:"<<sgpa[i]<<endl;
			}
			
		}
		float compute()
		{
			for(i=0;i<8;i++)
			{
				sum=sum+sgpa[i];
			}
			cgpa=sum/8;
			return cgpa;
		}
};
int main()
{
	float y;
	student obj;
	obj.getdata();
	obj.putdata();
	y=obj.compute();
	cout<<"Total CPGA is:"<<y<<endl;
}
