#include<bits/stdc++.h>
using namespace std;
main(){
	int m,n,count=0;
	cin >> m;
	int lot[m];
	for(int i=0;i<m;i++){
		cin >> lot[i];
		lot[i]=lot[i]%1000;
	}
	cin >> n;
	int ans[n];
	for(int i=0;i<n;i++){
		cin >> ans[i];
		ans[i]=ans[i]%1000;
	}
	
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(lot[i]==ans[j]){
				count++;
			}
		}
	}
	cout << count;
}
