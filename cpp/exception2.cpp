#include<iostream>
using namespace std;

main()
{
	try
	{
		int num1;
		cout<<"Enter first number\n";
		cin>>num1;
		
		int num2;
		cout<<"Enter second number\n";
		cin>>num2;
		
		if(num2==0)
		{
			throw 411;
		}
		
		cout<<"dividing num1 by num2::"<<(float)num1/(float)num2<<endl;
	}
	catch(int x)
	{
		cout<<"Error "<<x<<"\nyou can't divide by 0\n";
	}
}
		
