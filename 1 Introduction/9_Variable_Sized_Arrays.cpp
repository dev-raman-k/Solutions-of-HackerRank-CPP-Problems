#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	//input
	// x --> no of arrays
	// y --> no of queries
	// s --> iterator for Pointer array
	int x,y,s=0;
	cin>>x>>y;
	// Pointer array of size x
	int* arr[x];

	while(x--) {
		// n --> no of elememts in a particular vector
		int n;
		cin>>n;

		// Pointer array will store address of new integer arrays of size n
		arr[s] = new int[n];
		for(int i=0; i<n; i++) {
			cin>>arr[s][i];
		}
		s++;
	}
	while(y--) {
		int a,b;
		cin>>a>>b;
		cout<<arr[a][b]<<endl;
	}
	return 0;
}
