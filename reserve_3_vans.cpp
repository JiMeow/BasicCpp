#include <bits/stdc++.h> 
using namespace std;
main(){
	int n,a=0,b=0,c=0,d;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&d);
		if(a<=b && a<=c){
				printf("A\n");
				a=a+d;
		}
		else if(b<a && b<=c){
			printf("B\n");
			b=b+d;
		}
		else if(c<a && c<b){
			printf("C\n");
			c=c+d;
		}
	}
}
