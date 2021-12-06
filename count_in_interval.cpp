#include <bits/stdc++.h> 
using namespace std;
main(){
	int a,x,y,All=0,count=0;
	scanf("%d",&x);
	scanf("%d",&y);
	for(int i=0;i<8;i++){
		scanf("%d",&a);
		if(x<y){
		if(x<=a && a<=y){
			All=All+a;
			count++;
		}
		}
		else{
			if(y<=a && a<=x){
			All=All+a;
			count++;	
		}
	}
	}
	if(count==0){
		printf("None");
	}else{
		printf("%d",count);
	}
}
