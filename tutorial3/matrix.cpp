#include<iostream>
using namespace std;
class matrix
{
	public:
		int x[2][2];
		matrix()
		{
			x[0][0]=1;
			x[0][1]=2;
			x[1][0]=3;
			x[1][1]=4;
		}
		matrix(int a,int b,int c,int d)
		{
			x[0][0]=a;
			x[0][1]=b;
			x[1][0]=c;
			x[1][1]=d;
		}
		matrix addmat(matrix u,matrix v)
		{
			matrix z;
			z.x[0][0]=u.x[0][0]+v.x[0][0];
			z.x[0][1]=u.x[0][1]+v.x[0][1];
			z.x[1][0]=u.x[1][0]+v.x[1][0];
			z.x[1][1]=u.x[1][1]+v.x[1][1];
			return z;
		}
		void display()
		{
			cout<<x[0][0]<<" "<<x[0][1]<<endl<<x[1][0]<<" "<<x[1][1]<<endl;
		}
		~matrix()
		{
			cout<<"Destructor"<<endl;
		}
};
int main()
{
	matrix obj1,obj2(10,10,10,10),obj3;
	obj3=obj3.addmat(obj1,obj2);
	obj3.display();
}
