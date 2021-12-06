#include<bits/stdc++.h>
using namespace std;
main(){
int a;
while(true){
	scanf("%d",&a);
	if(a<=0){
		break;
	}
	for(int j=0;j<a-1;j++){
		if((j+1)%5==0){
			printf("X");
		}
		else{
			printf("*");
		}
	}
	printf("%d\n",a%10);
}
}
