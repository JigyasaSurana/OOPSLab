//operator overloading for == op.
#include<iostream>
using namespace std;
class complex 
{
	int real,img;
	public:
		complex()
		{
			real=img=0;
		}
		complex(int real,int img)
		{
			this->real=real;
			this->img=img;
		}
		void display()
		{
			cout<<real<<"+i"<<img<<endl;
		}
		bool operator==(complex c)
		{
			if(real==complex.real && img==c.img)
			return true
			else
			return false;
		}
 };
 int main()
{
complex c1(10,20),c2(10,24)
if(c1==c2) //c1.operator==(c2);
cout<<"same";
else 	
cout<<"Not same";
return 0;
} 
