#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
main(){
	int n,k,maxgold=0,maxsilver=0,maxbronze=0,maxall=0,test=0;
	scanf("%d",&n);
	struct{
		int name;
		int gold;
		int silver;
		int bronze;
		int all;
	}o[n];
	for(int i=0;i<n;i++){
		scanf("%d",&o[i].name);
		scanf("%d",&o[i].gold);
		scanf("%d",&o[i].silver);
		scanf("%d",&o[i].bronze);
		o[i].all=o[i].gold+o[i].silver+o[i].bronze;
	}
	
	for(int i=0;i<n;i++){
		if(maxgold<o[i].gold){
			maxgold=o[i].gold;
		}
		if(maxsilver<o[i].silver){
			maxsilver=o[i].silver;
		}
		if(maxbronze<o[i].bronze){
			maxbronze=o[i].bronze;
		}
		if(maxall<o[i].all){
			maxall=o[i].all;
		}
	}
	while(true){
		scanf("%d",&k);
		if(k<=0){
				printf("good bye");
				break;
		}
		else if(k==1001){
			for(int i=0;i<n;i++){
				if(maxgold==o[i].gold){
					printf("%d ",o[i].name);
				}
			}
			printf("\n");
		}
		else if(k==1002){
			for(int i=0;i<n;i++){
				if(maxsilver==o[i].silver){
					printf("%d ",o[i].name);
				}
			}
			printf("\n");
		}
		else if(k==1003){
			for(int i=0;i<n;i++){
				if(maxbronze==o[i].bronze){
					printf("%d ",o[i].name);
				}
			}
			printf("\n");
		}
		else if(k==2000){
			for(int i=0;i<n;i++){
				if(maxall==o[i].all){
					printf("%d ",o[i].name);
				}
			}
			printf("\n");
		}
		else if(k==3000){
			for(int i=0;i<n;i++){
				if(o[i].all>0){
					printf("%d ",o[i].name);
				}
			}
			printf("\n");
		}
		else{
			bool check = false;
			for(int m=0;m<n;m++){
				if(o[m].name==k){
					printf("%d %d %d %d\n",o[m].gold,o[m].silver,o[m].bronze,o[m].all);
					check = true;
				}
			}
			if(check==false){
					printf("invalid code\n");
			}
		}
	}
}
