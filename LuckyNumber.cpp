#include<bits/stdc++.h>
using namespace std;
int a[10],countt,all;
main(){
    int n;
    double q;
    cout << "All=?";
    cin >> q;
    while(true){
    cout << "Want ?";
    cin >> n ;
    if(n==0){
        break;
    }
    //switch(n){
if(n==1){
    int c[13]={1234,2345,3210,3456,4321,4567,5432,5678,6543,6789,7654,8765,9876};
    for(int i=0;i<13;i++){
        if(c[i]/1000+c[i]%10==q/2){
            cout << c[i] << endl;
        }
    }
}
    //break;
if(n==3){
    int b[9]={1111,2222,3333,4444,5555,6666,7777,8888,9999};
    for(int i=0;i<9;i++){
        if(b[i]%10==q/4){
            cout << b[i] << endl;
        }
    }
}
if(n==2){
    for(int i=1000;i<=9999;i++){
            for(int l=0;l<10;l++){
                a[l]=0;
            }
            int j=i;
            countt=0;
            all=0;
        for(int k=0;k<4;k++){
            a[j%10]++;
            j=j/10;
    }
    for(int k=0;k<10;k++){
            all=all+(a[k]*k);
    }
    for(int m=0;m<10;m++){
        if(a[m]%2==0 && a[m]!=0){
            countt++;
        }
        else{

        }
    }
    if(countt==2 && all==q){
     cout << i << endl;
    }
    }
	}
    }
}

