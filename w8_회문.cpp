#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
using namespace std;

int main() {
	char s[10000];
	int t1=0,t2;
	int check,n;
	cin>>n;
	int out=0;

	for(int i=0; i<n;i++){
		check=0;
		scanf("%s",s);
		t1 = 0;
		t2=strlen(s)-1;
		while(t1<=t2){
			//printf("%c %c\n", s[t1], s[t2]);
			if(s[t1]!=s[t2]){
				
				check=1;
				break;
			}
			t1++;
			t2--;
		}
		if(check==0){
			out++;
		}
	}
	printf("%d",out);
}
/*
4
adam
madam
level
label

*/
