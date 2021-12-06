#include<bits/stdc++.h>
using namespace std;
main(){
	int n;
	cin >> n;
	int a[n];
	a[0]=1;
	for(int i=1;i<=n;i++){
		cin >> a[i];
		if(a[i]>a[i-1]){
			if(a[i]-a[i-1]>=11){
				for(int j=0;j<3;j++){
					printf("%d ",a[i-1]+j);
				}
					printf(". . . ");
				for(int j=2;j>=0;j--){
					printf("%d ",a[i]-j);
				}
			}
			else{
				for(int j=a[i-1];j<=a[i];j++){
					printf("%d ",j);
				}
			}
		cout << endl;
		}
		else{
			if(a[i-1]-a[i]>=11){
				for(int j=0;j<3;j++){
					printf("%d ",a[i-1]-j);
				}
				printf(". . . ");
				for(int j=2;j>=0;j--){
					printf("%d ",a[i]+j);
				}
			}
			else{
				for(int j=a[i-1];j>=a[i];j--){
					printf("%d ",j);
				}
			}
		cout << endl;
		}
	}	
}
