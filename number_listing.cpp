#include<bits/stdc++.h>
using namespace std;
main(){
	int n,k;
	cin >> n;
	int a[10000];
	for(int i=0;i<10000;i++){
		a[i]=0;
	}
	for(int i=0;i<n;i++){
		cin >>k;
		for(int j=0;j<10000;j++){
			if(k==j+1){
				a[j]=1;
			}
		}
	}
	
	for(int i=0;i<10000;i++){
		if(a[i]==1){
			printf("%d ",1+i);
		}
	}
}
