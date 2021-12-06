#include<bits/stdc++.h>
using namespace std;
main(){
	int n;
	scanf("%d",&n);
	int y=n;
	int x=(n+1)/2;
	for(int i=0;i<y;i++){
		for(int j=0;j<x;j++){
			if(i<y/2 && j<=i){
				printf("A");
			}
			else if (i<y/2){
				printf("1");
			}
			else if(i==y/2){
				printf("A");
			}
			else if(i>y/2 && y-i>j){
				printf("A");
			}
			else{
				printf("*");
			}
		}
		printf("\n");
	}
}
