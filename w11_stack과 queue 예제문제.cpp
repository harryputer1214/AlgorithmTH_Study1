#include <iostream>
#include <cstdio>
#include <string>
#include <stack>
#include <queue>
using namespace std;

int main() {
  stack<int> s;
	queue<int> q;
	int input;

	for(int i=0;i<10;i++){
		cin>>input;
		s.push(input);
		q.push(input);
	}

	while(!s.empty()){
		printf("%d ",s.top());
		s.pop();
	}
	printf("\n");
	while(!q.empty()){
		printf("%d ",q.front());
		q.pop();
	}
}
