#include <bits/stdc++.h> 
using namespace std;
main(){
	int a,x,count=0;
	scanf("%d",&x);
	while(true){
		scanf("%d",&a);
		if(a==0){
			break;
		}
		if(a==x){
			count++;
		}
	}
	if(count!=0){
	printf("%d",count);
	}
	else{
		printf("None");
	}
}
