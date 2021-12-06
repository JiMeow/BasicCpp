#include <bits/stdc++.h> 
using namespace std;
main(){
	double a,b,c;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%lf",&c);
	if(c==0){
		printf("cannot divide by zero");
	}
	else{
		printf("%.6lf",(a+b)/c);
	}
}
