#include<bits/stdc++.h>
using namespace std;
class A
{
	public:
	void swapv(int a,int b)
	{
		int temp;
	        temp=a;
    		a=b;
    		b=temp;
	}        
	void swapr(int &a, int &b)
	{
		int temp;
	        temp=a;
    		a=b;
    		b=temp;
	}
};
int main()
{
	A s;
	int i,j,t;
	cout<<"Enter any two numbers :";
	cin>>i>>j;
	cout<<"Before swapping I = "<<i<<" J = "<<j<<endl;
	cout<<"Enter \n1.For call by value. \n2.For call by reference.\n";
	cin>>t;
	switch(t)
	{
		case 1:
        	{
			s.swapv(i,j);
			break;
		}
		case 2:
		{
			s.swapr(i,j);
			break;
		}
		default:
		{
			cout<<"Please check your choice again :";
		}
	}
        cout<<"After swapping I = "<<i<<" J = "<<j<<endl;
	return 0;
}
