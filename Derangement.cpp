#include<bits/stdc++.h>
using namespace std;
main(){
	int a[21],n;
	a[0]=1;
	a[1]=0;
	scanf("%d",&n);
	for(int i=2;i<=n;i++){
		a[i]=(i-1)*(a[i-1]+a[i-2]);
	}
	printf("%d",a[n]);
}
