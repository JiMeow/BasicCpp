#include<bits/stdc++.h>
using namespace std;
main(){
	int n,count=0,ans=0;
	cin >> n ;
	char a[n+1];
	for(int i=0;i<n;i++){
		cin >> a[i] ;
	}
	for(int j=0;j<(2*n)-3;j++){
		count=0;
	for(int i=0;i<n-1;i++){
		if(a[i]=='M' && a[i+1]=='F'){
			count++;
			a[i]='F';
			a[i+1]='M';
			i++;
		}
	}
	if(count>0){
		ans++;
	}
}
	/*for(int i=0;i<n;i++){
		//printf("%c",a[i]);
		cout << a[i];
	}*/
	printf("%d",ans);
}
