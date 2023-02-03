#include <iostream>
#include <cstdio> 

int main() {
  char s[1001]="";
	int alphabet[26]={0,};
	
	int alphaT[26]={65,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90};
	int alphat[26]={97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122};

	scanf("%s",s);
	for (int i=0;i<=1000;i++){
		if (s[i]=='\0'){
			continue;
		}

		for(int j=0;j<26;j++){
			if(s[i]==alphaT[j]){
				alphabet[j]++;
			}
			if(s[i]==alphat[j]){
				alphabet[j]++;
			}
		}
	}

	for (int i=0;i<26;i++){
		printf("%d ",alphabet[i]);
	}
	printf("\n");
}
