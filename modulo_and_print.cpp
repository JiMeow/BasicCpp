#include <bits/stdc++.h> 
using namespace std;
main(){
	int n;
	scanf("%d",&n);
	
	if(n%3==0 || n%5==0){
		if(n%3==0 && n%5==0){
			printf("3 5");
		}
		else if(n%5==0){
			printf("5");
		}
		else if(n%3==0){
			printf("3");
		}
	}

}
