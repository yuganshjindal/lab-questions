#include<bits/stdc++.h>
using namespace std;
class Shape
{
	protected:	
	double x, y;
	public:void getdata(double a, double b)
	{
		x=a;
		y=b;
	}
	virtual void display_area()=0;
};
class triangle:public Shape
{
		double triangle_area; void display_area()
		{
			triangle_area=(1*x*y)/2;
			cout<<"area of triangle is:"<<triangle_area<<endl;
		}
};
class rectangle:public Shape
{
	double rectangle_area; void display_area()
	{
		rectangle_area=x*y;
		cout<<"area of rectangle is:"<<rectangle_area<<endl;
	}
};
int main()
{
	Shape *p; 
	triangle t; 
	rectangle r;
	p=&t; 
	p->getdata(10,30); 
	p->display_area(); 
	p=&r; 
	p->getdata(20,30);
	p->display_area();
	return 0;
}
