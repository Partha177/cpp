#include<iostream>
using namespace std;

main()
{
	int a[5]={44,88,99,22,55};
	int sum=0;
	cout<<"index"<<"----------------"<<"element"<<endl;
	for(int i=0;i<5;i++)
	{
		
		cout<<"  "<<i<<"---------------------"<<a[i]<<endl;
		sum+=a[i];
	}
	cout<<"total is="<<sum<<endl;
}
