#include <bits/stdc++.h>
using namespace std;
int main () {
	int N,K,M,dayM,dayN,day,min=100;
	scanf("%d",&K);
	scanf("%d%d",&M,&N);
	int small,big;
	if(M==0 || N==0){
		if(M==0){
			printf("0 %d",K);
		}
		else{
			for(int i=K;i>=1;i--){
				if(M%(6*i)==0){
				day=(M/(6*i));
			}
			else{
				day=(M/(6*i))+1;
			}
				if(min>day){
					min=day;
				}
			}
			
			if(M%6==0){
			big=(M/6);
			}else{																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																									
			big=(M/6)+1;
			}
			printf("%d %d",big/min,K-big/min);
		}
	}
	else{
	if(M%6==0){
		big=(M/6);
	}else{
		big=(M/6)+1;
	}
	
	if(N%10==0){
		small=(N/10);
	}else{
		small=(N/10)+1;
	}
	int day[K];
	for(int i=0;i<K;i++){
		day[i]=100;
	}

	
	for(int i=1;i<K;i++){
		int j=K-i;
		
		if(big%i==0){
		dayM=(big/i);
		}else{
		dayM=(big/i)+1;
		}
	
		if(small%j==0){
		dayN=(small/j);
		}else{
		dayN=(small/j)+1;
		}
		
		if(dayM>dayN){
			int x=dayM;
			dayM=dayN;
			dayN=x;
		}
		
		day[i-1]=dayN;
	}
	min=day[0];
	for(int i=0;i<K;i++){
		if(min>day[i]){
			min=day[i];
		}
	}
	//printf("day=%d\n",min);
	if(big%min==0){
		int ans=big/min;
		printf("%d %d",ans,K-ans);
	}
	else{
		int ans=1+(big/min);
		printf("%d %d",ans,K-ans);
	}
}
}

