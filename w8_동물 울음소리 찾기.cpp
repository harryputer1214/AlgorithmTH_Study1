#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
using namespace std;

int main() {
	string c,r;
	int n,check;

	cin>>c>>n;
	for(int i=0;i<n;i++){
		cin>>r;
		if(c==r){
			check++;
		}
	}

	if(check>=1){
		printf("Yes\n");
	}
	else{
		printf("No\n");
	}
}
