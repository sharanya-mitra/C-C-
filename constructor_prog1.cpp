#include<iostream>
using namespace std;
class cable
{
	int cond;
	char type;
	public:
		cable()
		{
		}
		cable(int c, char t='C')
		{
			cond=c;
			type=t;
		}
		void putval()
		{
			cout << "This is a " << type << " type Data cable with " << cond << " conductors.";
		}
};
int main()
{
	cable dc1(5,'A'); //Parameterized constructor called implicitly
	cable dc2;
	dc2=cable(3); //Parameterized constructor called explicitly
	cout << "\n\n";
	dc1.putval();
	cout << "\n\n";
	dc2.putval();
	
}
