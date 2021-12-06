#include <bits/stdc++.h>
using namespace std;
int main () {
	int a,n,k;
	scanf("%d%d",&n,&k);
	int sex,score1,score2,ans[n],count1=0,count2=0;
	for(int i=0;i<n;i++){
		ans[i]=0;
	}
	for(int i=0;i<n;i++){
		scanf("%d",&sex);
		scanf("%d",&score1);
		scanf("%d",&score2);
		
		if(score1>=9||score2>=9){
			if(score1>=9 && score2>=9){
				if(sex==1 && count1<k){
					ans[i]=1;
					count1++;
				}
				else if(sex==2 && count2<k)
				{
					ans[i]=2;
					count2++;
				}
				else if(sex==1 && count1>=k && count2<k){
					ans[i]=2;
					count2++;
				}
				else if(sex==2 && count2>=k && count1<k){
					ans[i]=1;
					count1++;;
				}
			}
			else if(score1>=9 && count1<k){
				ans[i]=1;
				count1++;
			}
			else if(score2>=9 && count2<k){
				ans[i]=2;
				count2++;
			}
		}
	}
	
for(int i=0;i<n;i++){
	if(ans[i]!=0){
	printf("%d %d\n",i+1,ans[i]);
	}
}
	
}
