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
		str operator <=(str const &obj)
		{
			str s3;
			strcpy(s3.s,this->s);
			if(strcmp(s3.s,obj.s)==0)
				cout<<"Same";
			else
				cout<<"Different";
			return s3;
		}
		str operator -(str const &obj)
		{
			int i,j=0,k=0,n=0;
			int flag=0;
			
		 	str s3;
			strcpy(s3.s,this->s);
			
			
			char neww[25];

			for(i=0;s3.s[i]!='\0';i++)
			{
				k=i;
			 
				while(s3.s[i]==obj.s[j])
				{
				    i++,j++;
				    if(j==strlen(obj.s))
				    {
				        flag=1;
				        break;
				    }
				}
			j=0;
			if(flag == 0)
				i=k;      
			else
				flag=0;

			s3.s[n++]=s[i];
			}

			s3.s[n]='\0';
			return s3;
		
		}
		str operator ++()
		{
			str x;
			for(int i=0;i<strlen(this->s);i++)
			{
				this->s[i]=toupper(this->s[i]);
			}
			return x;
		}
		str operator --()
		{
			str x;
			for(int i=0;i<strlen(this->s);i++)
			{
				this->s[i]=tolower(this->s[i]);
			}
			return x;
		}
		void length(str const &obj)
		{	
			int y;
			strcpy(this->s,obj.s);
			y=strlen(this->s);
			cout<<"length is:"<<y;
		}			
};
int main()
{
	char s1[25]="BTECH";
	char s2[25]="csbs";
	char s3[25]="I am in csbs";
	str obj1(s1);
	str obj2(s2);
	str obj4(s3);
	str obj3;
	int ch,y;
	cout<<"String 1:"<<s1<<"\n";
	cout<<"String 2:"<<s2<<"\n";
	cout<<"String 3:"<<s3<<"\n";
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
				cout<<obj3.s<<endl;
				break;
			}
			case 2:
			{	
				obj1=obj2;
				cout<<obj1.s<<endl;
				break;
			}
			case 3:
			{
				obj3=obj4-obj2;
				cout<<obj3.s<<endl;
				break;
			}
			case 4:
			{
				cout<<"Comparison between "<<s1<<" and "<<s2<<endl;
				obj3<=obj4;
				cout<<endl;
				break;
			}
			case 5:
			{
				++obj2;
				cout<<obj2.s;
				cout<<endl;
				break;
			}
			case 6:
			{
				--obj1;
				cout<<obj1.s;
				cout<<endl;
				break;
			}
			case 7:
			{
				cout<<s1<<endl;
				obj1.length(s1);
				cout<<endl;
				break;
			}
			case 8:
			{
				exit(0);
			}
		}
	}
}
