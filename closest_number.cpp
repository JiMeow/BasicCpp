#include <bits/stdc++.h> 
using namespace std;
main(){
	int a[8],x,ab[8],min=100000;
	scanf("%d",&x);
	for(int i=0;i<8;i++){
		scanf("%d",&a[i]);
		if(a[i]<x){
			ab[i]=x-a[i];
		}else{
			ab[i]=a[i]-x;
		}
		if(min>ab[i]){
			min=ab[i];
		}
	}
	for(int i=0;i<8;i++){
		if(min==ab[i]){
			printf("%d",a[i]);
		}
	}
}
