#include<bits/stdc++.h>
using namespace std;
main(){
	int a,b,m,n,ansm,ansn;
	scanf("%d%d",&a,&b);
	scanf("%d%d",&m,&n);
	if(a==0 && m!=0){
		printf("Unable to finish order");
	}
	else if(b==0 && n!=0){
		printf("Unable to finish order");
	}
	else{
		if(a==0 && m==0){
			
		}
		else {
		if(m%(6*a)==0){
			ansm=m/(6*a);
		}else{
			ansm=1+m/(6*a);
		}
		}
		if(b==0 && n==0){
			
		}
		else {
		if(n%(10*b)==0){
			ansn=n/(10*b);
		}else{
			ansn=1+n/(10*b);
		}
		}
		if(ansn>ansm){
			int x=ansn;
			ansn=ansm;
			ansm=x;
		}
		printf("%d",ansm);
	}
}
