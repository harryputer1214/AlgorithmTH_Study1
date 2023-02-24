#include <iostream>
#include <cstdio>
#include <string>
#include <stack>
#include <queue>
using namespace std;

int main() {
  int n;
	string y;
	int x;
	stack<int> m;
	queue<string> a;

	cin>>n;
	for(int i=0; i<n; i++){
		cin>>x;
		m.push(x);
		cin>>y;
		a.push(y);
	}

	for(int i=0; i<n; i++){
		printf("%d ",m.top());
		m.pop();
	}
	printf("\n");
	for(int i=0; i<n; i++){
		cout<<a.front();
		printf(" ");
		a.pop();
	}
}
