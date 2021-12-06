#include<bits/stdc++.h>
using namespace std;
main(){
	int n,x,count=0;
	double all=0;
	cin >> n;
	struct{
		char num[6];
		int score;
	}a[n],gg;
	
	for(int i=0;i<n;i++){
		scanf("%s",a[i].num);
		scanf("%d",&a[i].score);
	}
	
	for(int i=0;i<n;i++){
		all=all+a[i].score;
	}
	all=all/n;
	
	for(int i=0;i<n;i++){
		if(a[i].score>=all){
		count++;
		}
	}
	printf("%d\n",count);
	for(int i=0;i<n;i++){
		if(a[i].score>=all){
			printf("%s\n",a[i].num);
		}
	}
	
}
