#include<bits/stdc++.h>
using namespace std;
main(){
int n,m,test=0;
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++){
	scanf("%d",&a[i]);
}	
scanf("%d",&m);
for(int i=0;i<n;i++){
	if(m==a[i]){
		printf("%d ",i+1);
		test++;
	}
}
if(test==0){
	printf("0");
}
}
