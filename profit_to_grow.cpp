#include <bits/stdc++.h>
using namespace std;
int main () {
	int N,K,All=0,income,outcome;
	scanf("%d",&N);
	scanf("%d",&K);
	for(int i=0;i<N;i++){
		scanf("%d",&income);
		scanf("%d",&outcome);
		All=All+income-outcome;
	}
	if(All>K){
		printf("Profit %d\n",All);
		printf("Expand");
	}
	else if(All>=K/2){
		printf("Profit %d\n",All);
		printf("Wait and see\n");
		All=0;
		for(int i=0;i<N;i++){
		scanf("%d",&income);
		scanf("%d",&outcome);
		All=All+income-outcome;
		}
	if(All>K){
		printf("Profit %d\n",All);
		printf("Expand");
	}
	else if(All>0){
		printf("Profit %d\n",All);
		printf("Not expand");
	}
	else if(All==0){
		printf("Breakeven\n");
		printf("Not expand");
	}
	else if(All<0){
		printf("Loss %d\n",-All);
		printf("Not expand");
	}
	
	}
	else if(All<K/2 && All>0){
		printf("Profit %d\n",All);
		printf("Not expand");
	}
	else if(All==0){
		printf("Breakeven\n");
		printf("Not expand");
	}
	else if(All<0){
		printf("Loss %d\n",-All);
		printf("Not expand");
	}
}
