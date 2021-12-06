#include<bits/stdc++.h>
using namespace std;
main(){
	int n;
	scanf("%d",&n);
	int x=n;
	int y=(n+1)/2;
	for(int i=0;i<y;i++){
		for(int j=0;j<x;j++){
			if(i==0){
				printf("A");
			}
			else if(i-1>=j){
				printf("1");
			}
			else if(i>0 && j>=i && j<=x-1-i){
				printf("A");
			}
			else if (x-j<=i){
				printf("*");
			}
		}
		printf("\n");
	}
}
