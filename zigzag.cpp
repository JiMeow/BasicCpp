#include<bits/stdc++.h>
using namespace std;
main(){
	int a[100000],i=0,max=1,ans=0,countt=0;
	while(true){
		cin >> a[i];
		if(a[i]<=0){
			break;
		}
		i++;
		countt++;
	}
	for(int i=0;i<countt-1;i++){
		if(a[i]%2!=a[i+1]%2){
			max++;
		}
		else{
			if(max>ans){
				ans=max;
			}
			max=1;
		}
	}
	cout << ans/2;
}
