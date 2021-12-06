#include<bits/stdc++.h>
using namespace std;
main(){
	int a[100000],k=0;
	for(int i=0;i<100000;i++){
		a[i]=0;
	}
	while(true){
		scanf("%d",&a[k]);
		if(a[k]==0){
			break;
		}
		k++;
	}
	for(int i=k-1;i>=0;i--){
	printf("%d ",a[i]);
}
}
