#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<string.h>
main(){
	int n,k,last,perfect=0,error=0,Alltest=0,max=0;
	scanf("%d",&n);
	scanf("%d",&k);
	int num[k],test[n],top[n];
	for(int i=0;i<n;i++){
		test[i]=0;
		top[i]=0;
	}
	for(int i=0;i<k;i++){
		scanf("%d",&num[i]);
	}
	for(int i=0;i<k;i++){
		if(num[i]>=1 && num[i]<=n){
			test[num[i]-1]=1;
			top[num[i]-1]++;
		}
		if(num[i]<1 || num[i]>n){
			error++;
		}
	}
	
	for(int i=0;i<n;i++){
		Alltest=Alltest+test[i];
		if(max<top[i]){
			max=top[i];
		}
	}
	printf("%d\n%d\n%d\n",Alltest,error,k-Alltest-error);
	
	for(int i=0;i<n;i++){
		if(max==top[i]){
			printf("%d ",i+1);
		}
	}
}
