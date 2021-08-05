#include<stdio.h>
#include<vector>
using namespace std;
vector<int> v;
 
int main(){
	int n, k;
	int pos=0;
	
	scanf("%d %d",&n,&k);
	
	for(int i=1;i<=n;i++){
		v.push_back(i);
	}

//	for(int i=0;i<n;i++)
//		printf("%d ",v[i]);	
	printf("<");
	while(v.size()){
		pos=(pos+k-1) % v.size();
		printf("%d",v[pos]);
		v.erase(v.begin()+pos);
		if(v.size())
			printf(", ");
		else printf(">");
	}	
} 
