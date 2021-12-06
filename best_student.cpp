#include<bits/stdc++.h>
using namespace std;
main(){
	int n;
	cin >> n;
	struct{
		char numm[9];//8
		char fname[31];//30
		char lname[51];//50
		double score;
	}a[n],gg;
	
	for(int i=0;i<n;i++){
		scanf("%s",a[i].numm);
		scanf("%s",a[i].fname);
		scanf("%s",a[i].lname);
		scanf("%lf",&a[i].score);
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i].score<a[j].score){
				gg=a[i];
				a[i]=a[j];
				a[j]=gg;
			}
		}
	}
	printf("%s %s %s %.2lf",a[0].numm,a[0].fname,a[0].lname,a[0].score);
}
