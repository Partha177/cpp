#include<iostream>
using namespace std;

main()
{
	int arr[2][3]={{2,4,6},{6,4}};
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<arr[i][j]<<"\t";
		}
		cout<<endl;
	}
	
	cout<<arr[0][1]<<endl;
}
