#include<bits/stdc++.h>
using namespace std;
main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i==0){
				printf("*");
			}
			else if(i==n-1){
				printf("*");
			}
			else if(j==0){
				printf("*");
			}
			else if(j==n-1){
				printf("*");
			}
			else if(i>=2 && i<=n-3 && j>=2 && j<=n-3){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
}
