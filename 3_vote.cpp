#include<bits/stdc++.h>
using namespace std;
main(){
	int n,k,num,max=0,z;
	scanf("%d%d",&n,&k);
	int a[n+1];
	for(int i=0;i<n+1;i++){
		a[i]=0;
	}
	for(int i=0;i<k;i++){
		scanf("%d",&num);
		for(int j=1;j<=n;j++){
			if(num==j){
				a[j]++;
			}
		}
	}
	for(int i=1;i<n+1;i++){
		if(max<a[i]){
			max=a[i];
			z=i;
		}
	}
	printf("%d\n%d",z,max);
}
