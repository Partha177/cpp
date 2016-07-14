#include<iostream>
using namespace std;

class Bhajpa
{
	public:
		Bhajpa() ;//constructor can't be constant, it can be called by both const and regular object
		void Bhajpa1();
		void Bhajpa2() const
		{
			cout<<"I am the constant function\n"<<endl;
		}
};

Bhajpa::Bhajpa() 
{
	cout<<"\nI am the constructor"<<endl;
}

void Bhajpa::Bhajpa1()
{
	cout<<"I am the regular function\n";
}

main()
{
	//const int a=3;
	//a=2;
	//cout<<a;
	Bhajpa obj;
	obj.Bhajpa1();
	
	const Bhajpa obj1;//only const obj can call const function
	obj1.Bhajpa2();//no need to write constant
}
