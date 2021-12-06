#include <bits/stdc++.h> 
using namespace std;
main(){
	long int score=0;
	int m=3,n=1,M,N;
	scanf("%d",&M);
	scanf("%d",&N);
	while(true){
		score=score+m*n;
		if(M==m && N==n){
			break;
		}
		int m1=m;
		m=m1+n;
		n=m1-n;
	}
	printf("%ld",score);
}
