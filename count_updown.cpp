#include<bits/stdc++.h>
using namespace std;
main(){
	int n;
	scanf("%d",&n);
	int a[n+1];
	a[0]=1;
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);	
	}
	for(int i=0;i<n;i++){
		if(a[i]<a[i+1]){
			if(a[i+1]-a[i]>=11){
				printf("%d . . . %d",a[i],a[i+1]);
			}
			else{
				for(int k=a[i];k<=a[i+1];k++){
				printf("%d ",k);
			}
			}
		}
		else{
			if(a[i]-a[i+1]>=11){
				printf("%d . . . %d",a[i],a[i+1]);
			}
			else{
				for(int k=a[i];k>=a[i+1];k--){
				printf("%d ",k);
			}
			}
		}
		printf("\n");
	}
}
