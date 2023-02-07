#include<iostream>
using namespace std;

class shape 
{
	public:
		void numberOfSides()
		{
		}
};

class rectangle: public shape
{
	public:
		void numberOfSides()
		{
			cout<<" A Rectangle has 4 sides"<<endl;
		}
}; 

class triangle: public shape
{
	public:
		void numberOfSides()
		{
			cout<<" A triangle has 3 sides"<<endl;
		}
}; 

class hexagon: public shape
{
	public:
		void numberOfSides()
		{
			cout<<" A hexagon has 6 sides"<<endl;
		}
}; 

int main()
{
	shape obj1;
	rectangle obj2;
	obj2.numberOfSides();
	triangle obj3;
	obj3.numberOfSides();
	hexagon obj4;
	obj4.numberOfSides();
}

