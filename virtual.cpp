#include<iostream>
using namespace std;

class student {
	public:
		int rollno;
		string name;
		
		void get1()
		{
			cout<<"Enter student roll no: ";
			cin>>rollno;
			cout<<"Enter student name: ";
			cin>>name;
		}
};

class subject : virtual public student {
	public:
		string subjects;
		
		void get2()
		{
			cout<<"Enter student subject: ";
			cin>>subjects;
		}
};

class language : virtual public student {
	public:
		string languages;
		void get3()
		{
			cout<<"Enter student language: ";
			cin>>languages;
		}
};


class result : public subject,public language {
	public:
		int smark,lmark;
		
		void get4()
		{
			cout<<"Enter student subject mark: ";
			cin>>smark;
			cout<<"Enter student language mark: ";
			cin>>lmark;
		}
		
		void show()
		{
			cout<<endl<<"   Student Marklist";
			cout<<endl<<"   Roll no: "<<rollno;
			cout<<endl<<"   Name: "<<name;
			cout<<endl<<"   "<<subjects<<" subject mark : "<<smark;
			cout<<endl<<"   "<<languages<<" language mark : "<<lmark<<endl;
		}
};

int main()
{
	result obj1;
	obj1.get1();
	obj1.get2();
	obj1.get3();
	obj1.get4();
	obj1.show();
}
			

