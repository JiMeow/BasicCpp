#include <bits/stdc++.h> 
using namespace std;
main(){
	int a[8],odd=0,even=0,ODD=0,EVEN=0;
	for(int i=0;i<8;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<8;i++){
		if(a[i]%2==0){
			even++;
			EVEN=EVEN+a[i];
		}
		else{
			odd++;
			ODD=ODD+a[i];
		}
	}
	if(odd>even){
		printf("odd\n%d\n%d",EVEN,ODD);
	}
	else if(odd==even){
		printf("equal\n%d\n%d",EVEN,ODD);
	}
	else{
		printf("even\n%d\n%d",EVEN,ODD);
	}
}
