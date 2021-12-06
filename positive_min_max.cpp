#include <bits/stdc++.h> 
using namespace std;
main(){
	int a[8];
	for(int i=0;i<8;i++){
		scanf("%d",&a[i]);
	}
	sort(a,a+8);
	printf("%d\n",a[7]);
	for(int i=0;i<8;i++){
		if(a[i]>0){
			printf("%d",a[i]);
			break;
		}
	}
}
