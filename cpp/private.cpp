#include<iostream>
#include<string>

using namespace std;

class str
{
	private:
		string name;
	public:
		void set (string x)
		{
			name=x;
		}
		string disp()
		{
			return name;
		}
};

main()
{
	str obj;
	obj.set("Partha");
	cout<<obj.disp()<<endl;
}
