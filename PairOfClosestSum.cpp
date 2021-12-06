#include<bits/stdc++.h>
using namespace std;
main(){
    int n,k,minn=2000000000,ab,ans1,ans2,countp=0,abs,use=2000000000;
    cin >> k >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]!=a[j]){
			ab=a[i]+a[j];
			abs=a[i]-a[j];
			if(abs<0){
				abs=0-abs;
			}
			
            if(ab<k){
                ab=k-ab;
            }
            else{
            	ab=ab-k;
			}
            if(minn>ab){
                minn=ab;
                ans1=a[i];
                ans2=a[j];
            }
            else if(minn==ab){
            	if(abs<use){
            		use=abs;
            		ans1=a[i];
                	ans2=a[j];
				}
			}
        }
        }
    }
    if(ans1 > ans2){
    	int x=ans1;
    	ans1=ans2;
    	ans2=x;
	}
    cout << ans1+ans2 << endl << ans1 << " " << ans2;
}
