#include<bits/stdc++.h>
using namespace std;
main(){
	int n,t,count=0,min=10,max=0;
	cin >> n ;
	cin >> t ;
	
	struct{
		char name[11];//8
		int score[10];
		int all=0;
	}a[n],gg;
	
	for(int i=0;i<n;i++){
		min=10;
		cin >> a[i].name ;
		for(int j=0;j<t;j++){
			cin >> a[i].score[j];
			if(min>a[i].score[j]){
				min=a[i].score[j];
			}
			a[i].all=a[i].all+a[i].score[j];
		}
		a[i].all=a[i].all-min;
	}
	
	for(int i=0;i<n;i++){
		if(max<a[i].all){
			max=a[i].all;
		}
	}
	
	printf("%d\n",max);
	for(int i=0;i<n;i++){
		if(max==a[i].all){
			printf("%s\n",a[i].name);
		}
	}
}
