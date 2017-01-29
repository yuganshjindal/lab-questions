#include<bits/stdc++.h>
using namespace std;
class Complex
{
	int a,b;
	int c,d;
	public:
	void input()
	{
		cout<<"Enter real and the imaginary part of first complex number";
		cin>>a>>b;
		cout<<endl<<"Enter real and the imaginary part of second complex number";
		cin>>c>>d;
	}
	void logic()
	{
		int t;
		cout<<"1.Addition"<<endl<<"2.Subtraction"<<endl<<"3.Multiplication"<<endl<<"4.Division"<<endl<<"Enter your choice :";
		cin>>t;
		switch(t)
		{
			case 1:
			{
				cout<<"After adding :"<<a+c<<"+i"<<b+d<<endl;
				break;
			}
			case 2:
			{
				cout<<"After subtraction :"<<a-c<<"+i"<<b-d<<endl;
				break;	
			}
			case 3:
			{
				int e,f;
				e=(a*c)-(b*d);
				f=(a*d)+(b*c);
				cout<<"After multiplication :"<<e<<"+i"<<f<<endl;
				break;
			}
			case 4:
			{
				int e,f,g;
				e=(a*c)+(b*d);
				f=(b*c)-(a*d);
				g=(c*c)+(d*d);
				cout<<"After division :"<<e/g<<"+i"<<f/g<<endl;
				break;
			}
		}
	}
};
int main()
{
	Complex r;
	r.input();
	r.logic();
	return 0;
}
