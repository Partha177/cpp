#include<iostream>
#include<string>
using namespace std;

main()
{
	//1.
	string s1="Partha";
	cout<<s1<<endl;
	
	//2.
	string s2("Pritam");
	cout<<s2<<endl;
	
	//3.
	string s3("Partha Pritam Paul");
	cout<<s3<<endl;
	
	//4.
	string s5;
	getline(cin, s5);
	cout<<s5<<endl;
	
	//5.
	string s4;
	cin>>s4;
	cout<<s4<<endl;
	
	//6.
	string s6="Om Namoh Shivay";
	string s7;
	s7=s6;
	cout<<s7<<endl;
	
	//7.
	string s8="Ram Ram";
	string s9;
	s9.assign(s8);
	cout<<s7<<endl;
	
	//8.
	string s10="Bharat Mata ki Jay";
	cout<<s10.at(0)<<endl;
	
	//9.
	string s11="Jai Bajrangbali";
	cout<<s11.length()<<endl;
	
	//10.
	string s12="Ramayana";
	for(int i=0;i<s12.length();i++)
	{
	cout<<s12.at(i);
	}
	cout<<endl;
	
	//11.
	string s13("I love my India");
	cout<<s13.substr(10,5)<<endl;		//substr(distance from beginning, length)
	
	//12.
	string s14("Ram");
	string s15("Laksman");
	cout<<s14<<' '<<s15<<endl;
	s14.swap(s15);
	cout<<s14<<' '<<s15<<endl;
	
	//13.
	string s16("I am an Indian");
	cout<<s16.find("an")<<endl;
	cout<<s16.rfind("an")<<endl;		//rfind=reverse
	
	//14.
	string s17("Jo bole so nihaal");
	s17.erase(8);
	cout<<s17<<endl;
	
	//15.
	string s18("Abki baar Modi sarkar");
	s18.replace(10,4,"NaMo");
	cout<<s18<<endl;
	
	//16.
	string s19("sabka malik ek hai");
	s19.insert(6,"Bhagaban ");
	cout<<s19<<endl; 
}
