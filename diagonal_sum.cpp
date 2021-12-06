#include <bits/stdc++.h>
using namespace std;
int main () {
	int n,All=1,sum=1;
	scanf("%d",&n);
	for(int i=2;i<=n;i++){
		int x=(i/2)*2-1;
		All=All+2*(n-x);
		sum=sum+All;
	}
	printf("%d",sum);
}
