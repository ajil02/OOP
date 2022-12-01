#include<iostream>
using namespace std;
static int count=1; 
class student
{
	private:
		int cont,sgpa[8];
		string email;
		float sum,cgpa;
		float compute()
		{
			for(i=0;i<8;i++)
			{
				sum=sum+sgpa[i];
			}
			cgpa=sum/8;
			cout<<"Total CPGA is:"<<cgpa<<endl;
		}
	public:
		int Rno=0,i;
		string Sname;
		
		student()
		{
			Rno=Rno+count;
			count=count+1;
		}
			
		void getdata()
		{
			cout<<"Enter the name of the student:";
			cin>>Sname;
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
			compute();
		}
		~student()
		{
			cout<<"Destructor";
		}
};
int main()
{
	int c;
	student obj[3];
	for(c=0;c<3;c++)
	{
		obj[c].getdata();
		obj[c].putdata();
		cout<<endl;
	}
}
