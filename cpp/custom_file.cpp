#include<iostream>
#include<fstream>
using namespace std;

main()
{
	ofstream object("list.txt");
	cout<<"Enter players ID, Name, Dollars\n";
	cout<<"press ctrl+z to exit\n";
	
	int ID;
	string name;
	int dollars;
	
	while(cin>>ID>>name>>dollars)
	{
		object<<ID<<' '<<name<<' '<<dollars<<endl;
	}
	//object.close();
}
