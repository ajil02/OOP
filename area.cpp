#include<iostream>
using namespace std;

class area
{
	public:
		int length;
		int breadth;
		int area;
		
		void setdim()
		{
			cout<<"Enter the length:";
			cin>>length;
			cout<<"Enter the breadth:";
			cin>>breadth;
			area=length*breadth;
		}
		
		void getarea()
		{
			
			cout<<"The area is "<<area;
			
		}
};

int main()
{
	area x;
	x.setdim();
	x.getarea();
}

