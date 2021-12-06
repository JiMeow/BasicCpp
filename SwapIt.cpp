#include<bits/stdc++.h>
using namespace std;
main(){
	int a[8][8],n,x,y,z,H,V;
	for(int i=0;i<8;i++){
		for(int j=0;j<8;j++){
			cin >> a[i][j];
		}
	}
	cin >> n;
	for(int i=0;i<n;i++){
		H=1;
		V=1;
		cin >> x >> y >> z;
		if(z==1 && y!=1){
			int l=a[y-1][x-1];
			a[y-1][x-1]=a[y-2][x-1];
			a[y-2][x-1]=l;
		}
		else if(z==2 && x!=8){
			int l=a[y-1][x-1];
			a[y-1][x-1]=a[y-1][x];
			a[y-1][x]=l;
		}
		else if(z==3 && y!=8){
			int l=a[y-1][x-1];
			a[y-1][x-1]=a[y][x-1];
			a[y][x-1]=l;
		}
		else if(z==0 && x!=1){
			int l=a[y-1][x-1];
			a[y-1][x-1]=a[y-1][x-2];
			a[y-1][x-2]=l;
		}
	/*	for(int i=0;i<8;i++){
		for(int j=0;j<8;j++){
			cout << a[i][j];
		}
		cout << endl;
	}*/
	int m=1;
	while(x+m-1<=7){
		if(a[y-1][x-1]==a[y-1][x+m-1]){
			H++;
		}else{
			break;
		}
		m++;
	}
	m=1;
	while(x-m-1>=0){
		if(a[y-1][x-1]==a[y-1][x-m-1]){
			H++;
		}else{
			break;
		}
		m++;
	}
	
	m=1;
	while(y+m-1<=7){
		if(a[y-1][x-1]==a[y+m-1][x-1]){
			V++;
		}
		else{
			break;
		}
		m++;
	}
	m=1;
	while(y-m-1>=0){
		if(a[y-m-1][x-1]==a[y-1][x-1]){
			V++;
		}else{
			break;
		}
		m++;
	}
	
	printf("H %d V %d\n",H,V);
	}
}
