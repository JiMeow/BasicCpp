#include<bits/stdc++.h>
using namespace std;
main(){
	int n;
	cin >> n;
	int a[n];
	int all=0,max=0,min=11;
	if(n==3){
		for(int i=0;i<n;i++){
			cin >> a[i];
			all=all+a[i];
			if(max<a[i]){
				max=a[i];
			}
			if(min>a[i]){
				min=a[i];
			}
		}
	}
	else if(n==5){
		for(int i=0;i<n;i++){
			cin >> a[i];
			all=all+a[i];
			if(max<a[i]){
				max=a[i];
			}
			if(min>a[i]){
				min=a[i];
			}
		}
		all=all-min-max;
	}
	
	else if(n==7){
		for(int i=0;i<n;i++){
			cin >> a[i];
			all=all+a[i];
			if(max<a[i]){
				max=a[i];
			}
			if(min>a[i]){
				min=a[i];
			}
		}
		all=all-min-max;
	}
	
	else if(n==9){
		for(int i=0;i<n;i++){
			cin >> a[i];
			all=all+a[i];
			if(max<a[i]){
				max=a[i];
			}
			if(min>a[i]){
				min=a[i];
			}
		}
		all=all-min-max;
	}
	
	cout << all;
}
