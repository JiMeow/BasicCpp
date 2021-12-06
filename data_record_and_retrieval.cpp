#include<bits/stdc++.h>
using namespace std;
main(){
	int n,x,count=0;
	cin >> n;
	struct{
		char numm[9];//8
		char fname[31];//30
		char lname[51];//50
		int score;
	}a[n],gg;
	
	for(int i=0;i<n;i++){
		scanf("%s",a[i].numm);
		scanf("%s",a[i].fname);
		scanf("%s",a[i].lname);
		scanf("%d",&a[i].score);
	}
	scanf("%d",&x);
	for(int i=0;i<n;i++){
		if(a[i].score==x){
			printf("%s %s %s\n",a[i].numm,a[i].fname,a[i].lname);
			count++;
		}
	}
	if(count==0){
		printf("None");
	}
}
