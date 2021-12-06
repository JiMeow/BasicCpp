#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
main(){
	int k,count=0,n;
	scanf("%d",&n);
	for(int j=0;j<n;j++){
	scanf("%d",&k);
	while(1){
		count=0;
		for(int i=1;i<k;i++){
			if(k%i==0){
				count++;
			}
		}
		if(count==3){
			printf("%d\n",k);
			break;
		}
		k=k+1;
	}
}
}
