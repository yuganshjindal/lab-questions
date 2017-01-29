#include<bits/stdc++.h>
using namespace std;
class Person_data
{
	int age;
	float ht;
	public:
	Person_data(string a,int b,float c)
	{
		age=b;
		ht=c;
	}
	void cal_age(int a)
	{
		age=a-age;	
	}
	void cal_ht_cms()
	{
		ht=ht*100;	
	}
	void show()
	{
		cout<<"Approximate age of a person:"<<age<<"\nAge in cms:"<<ht<<endl;
	}
};
int main()
{
	Person_data p1("Ram",1975,1.05);
	p1.cal_age(2016);
	p1.cal_ht_cms();
	p1.show();
	return 0;
}
