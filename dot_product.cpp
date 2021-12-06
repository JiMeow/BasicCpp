#include<bits/stdc++.h>
using namespace std;
main(){
	int n,ans=0;
	scanf("%d",&n);
	int a[n],b[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		scanf("%d",&b[i]);
	}
	for(int i=0;i<n;i++){
		ans=ans+(a[i]*b[i]);
	}
	printf("%d",ans);
}
