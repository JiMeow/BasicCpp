#include<bits/stdc++.h>
using namespace std;
main(){
	int n;
	scanf("%d",&n);
	char a[39];
	int score[3]; //W D L
	for(int i=0;i<n;i++){
		for(int j=0;j<3;j++){
			score[j]=0;
		}
		scanf("%s",a);
		for(int j=0;j<38;j++){
		if(a[j]=='W'){
			score[0]++;
		}
		else if(a[j]=='L'){
			score[2]++;
		}
		else if(a[j]=='D'){
			score[1]++;	
		}
	}
	printf("%d %d %d ",score[0],score[1],score[2]);
	printf("%d %d %d\n",2*score[0]+score[1],3*score[0]+score[1],5*score[0]+score[1]-score[2]);
	}
}
