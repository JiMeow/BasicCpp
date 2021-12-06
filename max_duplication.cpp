#include<bits/stdc++.h>
using namespace std;
main(){
	int n,max=1,ans=0,countt=0,pop=0;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	sort(a,a+n);
	for(int i=0;i<n-1;i++){
		if(a[i]==a[i+1]){
			max++;
		}
		else{
			if(ans<max){
				ans=max;
			}
			max=1;
		}
	}
	for(int i=0;i<=n-ans;i++){
		countt=0;
		for(int j=0;j<ans;j++){
			if(a[i]==a[i+j]){
				countt++;
			}
		}
		if(countt==ans){
			if(pop<a[i]){
				pop=a[i];
			} 
		}
	}
	cout << pop << endl << ans;
}
