#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
main(){
	int n,count=-1;
	scanf("%d",&n);
	int a[n][n];
	struct{
		int hight;
		int x;
		int y;
	}ans[n*n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	
	for(int i=1;i<n-1;i++){
		for(int j=1;j<n-1;j++){
			if(a[i][j]>a[i-1][j] && a[i][j]>a[i-1][j-1] && a[i][j]>a[i-1][j+1] && a[i][j]>a[i][j-1] && a[i][j]>a[i][j+1] && a[i][j]>a[i+1][j] && a[i][j]>a[i+1][j-1] && a[i][j]>a[i+1][j+1]){
				count++;
				ans[count].hight=a[i][j];
				ans[count].x=j;
				ans[count].y=i;
			}
		}
	}
	
	printf("%d\n",count+1);
	for(int i=0;i<=count;i++){
		printf("%d %d %d\n",ans[i].hight,ans[i].y,ans[i].x);
	}
}
