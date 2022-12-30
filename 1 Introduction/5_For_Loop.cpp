#include <iostream>
#include <cstdio>
using namespace std;
string num(int i) {
	switch(i) {
		case 1 :
			return "one\n";
			break;

		case 2 :
			return "two\n";
			break;

		case 3 :
			return "three\n";
			break;

		case 4 :
			return "four\n";
			break;

		case 5 :
			return "five\n";
			break;

		case 6 :
			return "six\n";
			break;

		case 7 :
			return "seven\n";
			break;

		case 8 :
			return "eight\n";
			break;

		case 9 :
			return "nine\n";
			break;
	}
	if(i>9 && i%2==0)
		return "even\n";
	else
		return "odd\n";
}

int main() {
	int a,b;
	cin>>a>>b;
	for(int i=a; i<=b; i++)
		cout<<num(i);
	return 0;
}

