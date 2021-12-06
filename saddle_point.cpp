#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
main(){
	int x,y,count=0,countprint=0,min,max;
	scanf("%d%d",&y,&x);
	int a[y][x];
	
	for(int i=0;i<y;i++){
		for(int j=0;j<x;j++){
			scanf("%d",&a[i][j]);
		}
	}
	
	for(int i=0;i<y;i++){
	min=a[i][0];
	max=a[i][0];	
		for(int j=0;j<x;j++){
			if(min>a[i][j]){
				min=a[i][j];
			}
			if(max<a[i][j]){
				max=a[i][j];
			}
		}
		for(int j=0;j<x;j++){
			if(a[i][j]==min){//min
				for(int k=0;k<y;k++){
					if(a[i][j]>=a[k][j]){
						count++;
					}
				}
				if(count==y){
					printf("(%d, %d) = %d\n",i,j,a[i][j]);
					countprint++;
				}
				count=0;
			}
		}
		for(int j=0;j<x;j++){
			if(a[i][j]==max){//min
				for(int k=0;k<y;k++){
					if(a[i][j]<=a[k][j]){
						count++;
					}
				}
				if(count==y){
					printf("(%d, %d) = %d\n",i,j,a[i][j]);
					countprint++;
				}
				count=0;
			}
		}	
	}
	
if(countprint==0){
	printf("None");
}

}

