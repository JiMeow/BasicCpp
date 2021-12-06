#include<bits/stdc++.h>
using namespace std;
main(){
	int m,n,p,x,y;
	scanf("%d%d",&m,&n);
	scanf("%d",&p);
	int a[m][n];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			a[i][j]=0;
		}
	}
	for(int i=0;i<p;i++){
		scanf("%d%d",&x,&y);
		a[x-1][y-1]=i+1;
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
