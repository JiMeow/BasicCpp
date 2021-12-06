#include<bits/stdc++.h>
using namespace std;
main(){
	int n,a[5],max=0,min=1000000;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[0]);
		scanf("%d",&a[1]);
		scanf("%d",&a[2]);
		scanf("%d",&a[3]);
		scanf("%d",&a[4]);
		sort(a,a+5);
		int m=a[4]-a[0];
		if(min>m){
			min=m;
		}
		if(max<m){
			max=m;
		}
	}
	printf("%d %d %d",max,min,max-min);
}
