#include<iostream>
using namespace std;

class className
{
	public:
		className();//constructor
		~className();//deconstructor:no return, no parameter, no overloading, no need to call
};

className::className()
{
	cout<<"I am the constructor\n";
}

className::~className()
{
	cout<<"I am the deconstructor\n";
}

main()
{
	className object;//constructor calls as soon as we create object
	cout<<"deconstructor calls when object is diminished\n";
	
}
	
