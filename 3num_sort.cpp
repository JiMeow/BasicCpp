#include <bits/stdc++.h> 
using namespace std;
main(){
	double n[3];
	scanf("%lf",&n[0]);
	scanf("%lf",&n[1]);
	scanf("%lf",&n[2]);
	sort(n,n+3);
	printf("%.0lf %.0lf %.0lf",n[0],n[1],n[2]);
}
