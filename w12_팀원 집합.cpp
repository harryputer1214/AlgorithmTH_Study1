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
	int team[100001];
	int stud[100001];
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>team[i]>>stud[i];
	}
	for(int i=1;i<=n;i++){
	  for(int j=0;j<n;j++){
			if(team[j]==i){
				cout<<stud[j]<<' ';
		}
		}
		cout<<'\n';
	}
}

/*
5
1 2
2 1
1 3
2 4
3 5

10 
5 7
2 4
5 10
1 1
4 3
3 6
2 5
5 8
3 2
1 9

*/
