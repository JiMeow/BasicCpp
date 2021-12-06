#include<bits/stdc++.h>
using namespace std;
main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i==0){
				printf("%d",n%10);
			}
			else if(i<=j){
				printf("%d",(n-i)%10);
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
}
