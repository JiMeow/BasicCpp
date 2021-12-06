#include<bits/stdc++.h>
using namespace std;
main(){
    int maxx=0,j,a[10000],x,countm=0,z,ans[10000],i=0;
    for(int i=0;i<10000;i++){
        ans[i]=0;
        a[i]=0;
    }
    i=0;
    while(true){
        scanf("%d",&ans[i]);
        if(ans[i]==0){
            break;
        }
        i++;
    }
    for(int i=0;i<10000;i++){
    if(ans[i]==0){
            break;
    }
    if(ans[i]==ans[i+1]){
        countm++;
    }
    else{
        a[i]=countm;
        countm=0;
        }
    }

    for(int i=0;i<10000;i++){
        if(maxx<a[i]){
            maxx=a[i];
        }
    }

    for(int i=10000;i>=0;i--){
        if(maxx==a[i]){
            z=i;
        }
    }
    printf("%d\n%d",maxx+1,ans[z-maxx]);
}
