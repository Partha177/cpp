#include<iostream>
#include<fstream>
using namespace std;

main()
{
	ofstream object;
	object.open("ppp.txt");
	object<<"Jai Shri Ram";
	object.close();
}
