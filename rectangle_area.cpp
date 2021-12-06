#include <bits/stdc++.h> 
using namespace std;
main(){
	double a,b,c;
	scanf("%lf%lf",&a,&b);
	if(a<=0 || b<=0){
	if(a<=0 && b<=0){
		printf("invalid width and height");
	}
	else if(a<=0){
		printf("invalid width");
	}
	else if(b<=0){
		printf("invalid height");
	}
	}
	else{
	c=a*b;
	printf("%.2lf",c);
}
}
