#include <iostream>
#include <cstdio>
#include <string>
#include <stack>
#include <queue>
using namespace std;

int main() {
  int n, k;
	int push;
	queue<int> q;

	cin>>n>>k;
	for(int i=1;i<=n;i++){
		q.push(i);
	}
	
	while(!q.empty()){
		for(int i=0;i<k-1;i++){
			push=q.front();
			q.pop();
			q.push(push);}
		cout<<q.front()<<' ';
		q.pop();
	}
}
