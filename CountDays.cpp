#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<string.h>
main(){
	int a,b,c,d;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	int x[12],days=0;
	x[0]=31;
	x[1]=28;
	x[2]=31;
	x[3]=30;
	x[4]=31;
	x[5]=30;
	x[6]=31;
	x[7]=31;
	x[8]=30;
	x[9]=31;
	x[10]=30;
	x[11]=31;
	for(int i=b-1;i<=d-1;i++){
		days=days+x[i];
	}
	int first=a-1;
	int last=x[d-1]-c;
	if(a>x[b-1] || a<1 || c>x[d-1] || c<1 || b>d || (b==d && a>c) || d>12 || b>12 || d<1 ||b<1){
		printf("error");
	}else	printf("%d",days-first-last);
}
