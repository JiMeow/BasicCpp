#include<bits/stdc++.h>
using namespace std;
main(){
    long long int a;
    while(true){
    cin >> a;
    if(a==0){
    	break;
	}
	else
    printf("Y %lld\n",a*a - a + 1);
}
}
