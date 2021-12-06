#include <bits/stdc++.h> 
using namespace std;
main(){
	int x,y,r,n,x1,y1,abx,aby,count=0;
	scanf("%d%d",&x,&y);
	scanf("%d",&r);
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d%d",&x1,&y1);
		abx=x-x1;
		aby=y-y1;
		if(abx<0){
			abx=-abx;
		}
		if(aby<0){
			aby=-aby;
		}
		if(abx+aby<=r){
			count++;
		}
	}
	printf("%d",count);
}
