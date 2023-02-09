#include<iostream>
#include<stdlib.h>
using namespace std;

class complex
{
	public:
		int real;
		int imag;
		
		void getdata()
		{
			cout<<"Enter real part of number :";
			cin>>real;
			
			cout<<"Enter imaginary part of number :";
			cin>> imag;
		}
		
		void putdata()
		{
			cout<<"The imaginary number is ";
			cout<<real<<" + "<<imag<<" i";
			
		}
		
		complex add(complex x,complex y,complex z)
		{
			complex a;
			a.real=z.real+x.real+y.real;
			a.imag=z.imag+x.imag+y.imag;
			return a;
		}
		
		complex sub(complex x,complex y)
		{
			complex z;
			z.real=x.real-y.real;
			z.imag=x.imag-y.imag;
			return z;
		}
		
};

int main()
{
	int ch;
	while(1)
	{
	cout<<" \nMENU \n1.Addition of 3 numbers \n2.Subtraction of 2 numbers \n3.Exit"<<endl;
	cout<<"Enter your choice:";
	cin>>ch;
	switch(ch)
	{
	case 1:
	{
		complex c1,c2,c3,c4;
		c1.getdata();
		c2.getdata();
		c3.getdata();
		c4=c4.add(c1,c2,c3);
		c4.putdata();
		break;
	}
	
	case 2:
	{
		complex c1,c2,c3,c4;
		c1.getdata();
		c2.getdata();
		c3=c3.sub(c1,c2);
		c3.putdata();
		break;
	}
	case 3:
	{
		exit(0);
	}
	}
	}
}
