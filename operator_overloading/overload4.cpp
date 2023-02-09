#include<iostream>
using namespace std;
class complex
{
	public:
		float r,i;
		complex()
		{
			r=0;
			i=0;
		}
		complex(float x,float y)
		{
			r=x;
			i=y;
		}
		void print()
		{
			cout<<r<<"+"<<i<<"i"<<endl;
		}
		complex  operator /(complex const &obj)
		{
			complex res;
			res.r=((r*obj.r)+(obj.i*i))/((obj.r*obj.r)+(obj.i*obj.i));
			res.i=((i*obj.r)-(obj.i*r))/((obj.r*obj.r)+(obj.i*obj.i));
			return res;
		}
};
int main()
{
	complex a(3,3),b(2,2),c;
	c=a/b;
	c.print();
}
