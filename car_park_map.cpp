#include <bits/stdc++.h>
using namespace std;
int main () {
	int m,n,k,r,c;
	scanf("%d",&m);
	scanf("%d",&n);
	scanf("%d",&k);
	int a[m][n];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			a[i][j]=0;
		}
	}
	for(int i=0;i<k;i++){
		scanf("%d%d",&r,&c);
		a[r-1][c-1]=1;
	}
	
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(a[i][j]==0){
				printf("_");
			}else{
				printf("x");
			}
		}
		printf("\n");
	}
}
