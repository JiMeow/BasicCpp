#include<bits/stdc++.h>
using namespace std;
main(){
    int n,m,k;
    scanf("%d",&n);
    k=3*n-2;
    m=2*n;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(j==0){
                    if(n%10-i<0){
                        printf("%d",(n%10-i+1000000)%10);
                    }
                    else printf("%d",(n%10-i%10));
            }
            if(j==m-1){
                    if(k%10-i<0){
                        printf("%d",(k%10-i+10000000)%10);
                    }
            else printf("%d",(k%10-i)%10);
            }
            else{
                    if(2*i==j && i!=0 && i!=n-1){
                        printf("%d",(n+i)%10);
                    }
                    else{
                    	if(j==1 || j==m-2){
                    	
					}
                    	else{
                        	printf(" ");
                    	}
					}

            }
        }
        printf("\n");
    }
}
