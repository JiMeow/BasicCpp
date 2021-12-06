#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<string.h>
main(){
	int a,b,last;
	scanf("%d",&a);
	scanf("%d",&b);
	int c[a],d[b];
	for(int i=1;i<=a;i++){
		c[i-1]=0;
	}
	for(int i=1;i<=b;i++){
		scanf("%d",&d[i-1]);
	}
	for(int i=0;i<b;i++){
		if(d[i]>=1 && d[i]<=a ){
			c[d[i]-1]=1;
		}
	}
	
	
	int n[a];
	
	for(int i=1;i<=a;i++){
		n[i-1]=0;
	}
	
	for(int i=0;i<a;i++){
		int max=0;
			if(c[i]==1){
				int j=i;
				while(true){
					j=j-1;
					if(c[j]==1 || j<=-1){
						break;
					}
					if(c[j]==0){
						max=max+1;
					}
					
				}
				n[i]=max;
				last=i;
			}
		}
		int maxx=a-last-1;
	for(int i=0;i<a;i++){
		if(n[i]>maxx){
			maxx=n[i];
		}
	}	
	printf("%d\n",maxx);
	for(int i=0;i<a;i++){
		int test=0;
		if(c[i]==0){
			for(int j=1;j<=maxx-1;j++){
				if(c[i+j]==0){
					test++;
				}
			}
			if(test==maxx-1){
				printf("%d ",i+maxx);
			}
		}
	}
}
