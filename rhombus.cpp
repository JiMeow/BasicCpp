#include <bits/stdc++.h>
using namespace std;
int main () {
	int a;
	scanf("%d",&a);
	int n=(a+1)/2;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=a;j++){
			if(j<n-i+1 || j>n+i-1){
				printf(" ");
			}else{
				printf("*");
			}
		}
		printf("\n");
	}
	for(int i=1;i<n;i++){
		for(int j=1;j<a;j++){
			if(j>i && j<=a-i){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
}
