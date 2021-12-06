#include <bits/stdc++.h> 
using namespace std;
main(){
	int a,b,c;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	if(a+b==c){
		printf("+");
	}
	else if(a-b==c){
		printf("-");
	}
	else if(a*b==c){
		printf("*");
	}
	else if(a/b==c){
		printf("/");
	}
	else if(a%b==c){
		printf("%%");
	}
}
