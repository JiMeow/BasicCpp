#include <bits/stdc++.h> 
using namespace std;
main(){
	int z,n,a,count=0,min=0,test=0;
	scanf("%d",&n);	
	while(true){
		scanf("%d",&a);
		if(a==z && a==n){
			min++;
		}
		else{
			if(test<min){
				test=min+1;
			}
			min=0;
		}
		z=a;
		if(a==0){
			break;
		}
		if(a==n){
			count++;
		}
	}
	printf("%d\n%d",test,count);
}
