#include<bits/stdc++.h>
using namespace std;
main(){
	int a,b,c,d,x[8];
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	scanf("%d",&d);
	for(int i=0;i<8;i++){
		scanf("%d",&x[i]);
		if(x[i]<d){
			x[i]=0;
			printf("0\n");
		}
		else if(x[i]<c){
			x[i]=1;
			printf("1\n");
		}
		else if(x[i]<b){
			x[i]=2;
			printf("2\n");
		}
		else if(x[i]<a){
			x[i]=3;
			printf("3\n");
		}else{
			x[i]=4;
			printf("4\n");
		}
	}
	double all=0;
	for(int i=0;i<8;i++){
	all=all+x[i];	
	}
	printf("%.6lf",all/8);
}
