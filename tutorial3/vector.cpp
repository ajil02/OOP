#include<iostream>
using namespace std;
class vector
{
	public:
		int x[3];
		vector()
		{
			x[0]=1;
			x[1]=2;
			x[2]=3;
		}
		vector(int a)
		{
			x[0]=a;
			x[1]=2;
			x[2]=3;
		}
		vector(int a,int b)
		{
			x[0]=a;
			x[1]=b;
			x[2]=3;
		}
		vector(int a,int b,int c)
		{
			x[0]=a;
			x[1]=b;
			x[2]=c;
		}
		vector addvector(vector u,vector v)
		{
			vector t;
			t.x[0]=u.x[0]+v.x[0];
			t.x[1]=u.x[1]+v.x[1];
			t.x[2]=u.x[2]+v.x[2];
			return t;
		}
		void display()
		{
			cout<<x[0]<<"i+"<<x[1]<<"j+"<<x[2]<<"k"<<endl;
		}
		~vector()
		{
			cout<<"Destructor"<<endl;
		}
};
int main()
{
	vector obj1,obj2(2,3,4),obj3;
	obj3=obj3.addvector(obj1,obj2);
	obj3.display();
}
