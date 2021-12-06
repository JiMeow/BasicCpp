#include<bits/stdc++.h>
using namespace std;
main(){
	int a,b,c;
	cin >> a >> b >> c;
	int na,nb,nc;
	na=a/3;
	nb=b/4;
	nc=c/2;
	int max=na;
	if(max>nb){
		max=nb;
	}
	if(max>nc){
		max=nc;
	}
	//cout>> max >> " " >> a-(max*3) >> " " >> b-(max*4) >> " " >> (c-max*2);
	printf("%d %d %d %d",max,a-3*max,b-4*max,c-2*max);
}
