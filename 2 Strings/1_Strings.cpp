#include <iostream>
#include <string>
using namespace std;

int main() {
	string a,b;
	getline(cin, a);
	cin.ignore(0,'\n');
	getline(cin, b);
	cout<<a.length()<<" "<<b.length()<<endl<<a+b<<endl;

	char x = b.at(0);
	b.at(0) = a.at(0);
	a.at(0) = x;

	cout<<a<<" "<<b;
	return 0;
}
