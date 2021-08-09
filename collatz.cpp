#include<stdio.h>
#include<vector>
int main(){
	long long n,cnt=0;
	
	scanf("%d",&n);
	
	while(n!=1){
		if(cnt>=500)
			break;
		if(n%2==0)
			n/=2;
		else n=n*3+1;
		cnt++;
	}
	printf("%d",cnt>=500?-1:cnt);
} 
