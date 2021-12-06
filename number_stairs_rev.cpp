#include<bits/stdc++.h>
using namespace std;
main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[n-1-i]);
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			printf("%d",a[i]);
		}
		printf("\n");
	}
}
