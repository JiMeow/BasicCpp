#include<bits/stdc++.h>
using namespace std;
main(){
	int n,ans=0,abx;
	scanf("%d",&n);
	int a[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			abx=a[i][j]-a[j][i];
			if(abx<0){
				abx=-abx;
			}
			ans=ans+abx;
		}
	}
	
	
	printf("%d",ans);
}
