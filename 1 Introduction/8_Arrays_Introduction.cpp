#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin>>n;
	int a[n];

	for(int i=0; i<n; i++)
		cin>>a[i];

	for(int i=0; i<n/2; i++) {
		int x = a[i];
		a[i] = a[n-i-1];
		a[n-i-1] = x;
	}
	for(int i=0; i<n; i++)
		cout<<a[i]<<" ";

	return 0;
}
