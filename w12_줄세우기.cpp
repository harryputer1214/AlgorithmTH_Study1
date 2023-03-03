#include <iostream>
#include <cstdio>
#include <string>
#include <stack>
#include <queue>
#include <algorithm>

using namespace std;

bool Start_Down(int left, int right){
	return left > right;
}
bool Start_Up(int left, int right){
	return left < right;
}

int main() {
	double h[100000];
	double check[100000];
	int n,change=0;

	cin>>n;
	for(int i=0;i<n;i++){
		cin>>check[i];
		h[i]=check[i];
	}
	sort(h,h+n);
	for(int i =0;i<n;i++){
		if(check[i]!=h[i]){
			change++;
		}
	}
	cout<<change;
}

/*
10
156.7 142.7 148.4 151.8 168.9 132.5 159.1 170.3 153.5 162.2

3
161.0 154.0 141.0 

3
101.1 123.5 157.4

*/
