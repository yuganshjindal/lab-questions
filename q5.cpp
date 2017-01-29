#include<bits/stdc++.h>
using namespace std;
class Complex
{
	int real,imag;
	public:
	void set()
	{
		cout<<"enter real and imag part";
		cin>>real>>imag;
	}
	friend Complex sum(Complex,Complex);
	void display();
};
void Complex::display()
{
	cout<<"the sum of complex num is :"<<real<<"+i"<<imag<<endl;
}
Complex sum(Complex a,Complex b)
{
	Complex t;
	t.real=a.real+b.real;
	t.imag=a.imag+b.imag;
	return t;
}
int main()
{
	Complex a,b,c;
	a.set();
	b.set();
	c=sum(a,b);
	c.display();
	return 0;
}
