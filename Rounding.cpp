#include<bits/stdc++.h>
using namespace std;
main(){
	double a,diff1,diff2;
	scanf("%lf",&a);
	int z=(int)a;
	printf("floor(%.3lf) = %d.000\n",a,z);
	printf("floor(%.3lf) = %d.000\n",a,z+1);
	diff1=a-z;
	diff2=z+1-a;
	if(diff1<diff2){
		printf("round(%.3lf) = %d.000\n",a,z);
	}else{
		printf("floor(%.3lf) = %d.000\n",a,z+1);
	}
}
