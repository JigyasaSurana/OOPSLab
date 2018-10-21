#include<iostream>
using namespace std;
class unary
{
	int a,b;
	public:
		unary()
		{
			a=0;
			b=0;
		}
		unary(int a,int b)
		{
			this->a=a;
			this->b=b;
		}
		void display()
		{
			cout<<"a="<<a<<"b="<<b;
		}
		void operator++()
		{
			a++;
			b++;
		}
		
};
int main()
{
	unary u;
	u.display();
	++u;
	u.display();
}

