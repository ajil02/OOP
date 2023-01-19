#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;

class str
{
	public:	
		char s[25];
		str()
		{
		}
		str(char st[])
		{
			strcpy(this->s,st);
		}
		str operator +(str const &obj)
		{
			str s3;
			strcpy(s3.s,this->s);
			strcat(s3.s,obj.s);
			return s3;
		}
		str operator =(str const &obj)
		{
			str x;
			strcpy(this->s,obj.s);
			return x;
		}
		str operator ++()
		{
			str x;
			for(int i=0;i<strlen(this->s);i++)
			{
				this->s[i]=toupper(this->s[i]);
			}
		}
		str operator --()
		{
			str x;
			for(int i=0;i<strlen(this->s);i++)
			{
				this->s[i]=tolower(this->s[i]);
			}
		}
		int length(char s[25])
		{	
			int y;
			y=strlen(this->s);
			return y;
		}			
};
int main()
{
	char s1[25]="BTECH";
	char s2[25]="csbs";
	str obj1(s1);
	str obj2(s2);
	str obj3;
	int ch;
	while(1)
	{	
		cout<<"\n";
		
		cout<<"1.Overload + operator to carry out the concatenation of strings."<<endl;
		cout<<"2.Overload = operator to carry out string copy."<<endl;
		cout<<"3.Overload - operator to carry out sub-string removal."<<endl;
		cout<<"4.Overload <= operator to carry out the comparison of strings."<<endl;
		cout<<"5.Overload ++ operator to change string characters to upper case"<<endl;
		cout<<"6.Overload -- operator to change string characters to lower case."<<endl;
		cout<<"7.Function to display the length of a string."<<endl;
		cout<<"8.Exit"<<endl;
		cout<<"Enter your choice:";
		cin>>ch;
		switch(ch)
		{
			case 1:
			{
				obj3=obj1+obj2;
				cout<<obj3.s;
				break;
			}
			case 2:
			{	
				obj1=obj2;
				cout<<obj1.s;
				break;
			}
			case 5:
			{
				++obj2;
				cout<<obj2.s;
				break;
			}
			case 6:
			{
				--obj1;
				cout<<obj1.s;
				break;
			}
			case 7:
			{
				obj1(s1);
				cout<<"Length is:"<<;
			}
			case 8:
			{
				exit(0);
			}
		}
	}
}
				
