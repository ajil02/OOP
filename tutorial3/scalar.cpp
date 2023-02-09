#include<iostream>
using namespace std;
class scalar
{
	public:
		int x[3];
		scalar()
		{
			x[0]=1;
			x[1]=2;
			x[2]=3;
		}
		scalar(int a)
		{
			x[0]=a;
			x[1]=2;
			x[2]=3;
		}
		scalar(int a,int b)
		{
			x[0]=a;
			x[1]=b;
			x[2]=3;
		}
		scalar(int a,int b,int c)
		{
			x[0]=a;
			x[1]=b;
			x[2]=c;
		}
		scalar multiply(scalar u,int v)
		{
			scalar t;
			t.x[0]=u.x[0]*v;
			t.x[1]=u.x[1]*v;
			t.x[2]=u.x[2]*v;
			return t;
		}
		void display()
		{
			cout<<x[0]<<"i+"<<x[1]<<"j+"<<x[2]<<"k"<<endl;
		}
		~scalar()
		{
			cout<<"Destructor"<<endl;
		}
};
int main()
{
	scalar obj1;
	obj1=obj1.multiply(obj1,2);
	obj1.display();
}
