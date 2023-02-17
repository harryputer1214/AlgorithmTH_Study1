#include <iostream>
#include <cstdio>
#include <string>
#include <utility>
using namespace std;

struct POINT{
	int m;
	int t;
};

int main() {
	POINT point[1000];
	int n,winner;
	int sum;

	cin>>n;
	for(int i=0;i<n;i++){
		cin>>point[i].m>>point[i].p;
	}

	winner=0;
	for (int i=1;i<n;i++){
		if(point[winner].m<point[i].m){
			winner=i;
		}
		else if(point[winner].m>point[i].m){
		}
		else if(point[winner].t<point[i].t){
			winner=i;
		}
		else if(point[winner].t>point[i].t){
		}
	}

	for (int i=1;i<n;i++){
		sum+=point[winner].m-point[i].m;
	}
	sum+=5000-point[winner].t;
	
	printf("%d",sum);
}
