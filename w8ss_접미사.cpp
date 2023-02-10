#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
using namespace std;

int main() {
  string str="";
	cin>>str;
	int size=str.size();
	for (int i=0;i<size;i++){
		cout<<str.substr(i,size-i);
		printf("\n");
	}
}
