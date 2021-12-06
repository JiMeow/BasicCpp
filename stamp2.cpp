#include<bits/stdc++.h>
using namespace std;
main(){
	int id[3],t[3],v[3],n,k,all=0,allstamp=0,stamp=0;
	for(int i=0;i<3;i++){
		cin >> id[i] >> t[i] >> v[i];
	}
	cin >> n >> k;
	int id2[n],money[n];
	for(int i=0;i<n;i++){
		cin >> id2[i] >> money[i] ;
	if(id2[i]==id[0] || id2[i]==id[1] || id2[i]==id[2]){
		for(int j=0;j<3;j++){
			if(id2[i]==id[j]){
				if(t[j]==1){
					all=all+money[i];
					stamp=stamp+v[j];
				}else{
					all=all+money[i]-v[j];
				}
			}
		}
	}
	else{
		all=all+money[i];
		allstamp=allstamp+money[i];
	}	
	}
	cout << all << endl << allstamp << endl << stamp+(allstamp/k) ;
}
