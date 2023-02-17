#include <iostream>
#include <cstdio>
#include <string>
#include <utility>
using namespace std;

struct Student{
	int id;
	string name;
	int c;
	int a;
};

int main() {
	int i,c,a;
	char s[20];
	string name;
	Student stud[10000];
	int test=0;
	int n;
	int m;
	string t;
	cin>>n;

	for(int i=0;i<n;i++){
		scanf("%d %s %d %d",&i,s,&c,&a);
		stud[i].id=i;
		stud[i].name=s;
		stud[i].c=c;
		stud[i].a=a;
	}

	cin>>m;
	for(int i=0;i<m;i++){
		cin>>t;
		test=0;
		
		for(int j=0;j<n;j++){
			name=stud[i].name;
			
			if(name==t){
				printf("%d ",stud[i].id);
				printf(" %d %d\n",stud[i].c,stud[i].a);
				test=1;
				continue;
			}
			
		}
		
		if(test==0){
			printf("%d",-1);
		}
	}
}

/*
5
2145 Evan 10 0
1954 Adela 8 2
7452 Chris 9 1
2465 Cygnus 2 8
8613 Lucid 5 5
2
Adela
Lucid

2
1657 Damian 1 2
5476 Bead 5 6
2
Damian
James

*/
