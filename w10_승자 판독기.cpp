#include <iostream>
#include <cstdio>
#include <string>
#include <utility>
using namespace std;

struct TEAM{
	int t;
	int a;
};

int main() {
	TEAM team[10001];
	int n,bigprize;

	cin>>n;
	for (int i=0;i<n;i++){
		cin>>team[i].t;
		cin>>team[i].a;
	}

	bigprize=0;
	for (int i=1;i<n;i++){
		if(team[bigprize].t<team[i].t){
			bigprize=i;
		}
		else if(team[bigprize].t>team[i].t){
		}
		else if(team[bigprize].a<team[i].a){
			bigprize=i;
		}
		else if(team[bigprize].a>team[i].a){
		}
	}

	printf("%d",bigprize+1);
}

/*
5
68 70
70 53
81 69
77 83
62 71

*/
