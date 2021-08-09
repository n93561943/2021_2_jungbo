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
	printf("<");
	while(v.size()-1){
		pos=(pos+k-1) % v.size();
		printf("%d, ",v[pos]);
		v.erase(v.begin()+pos);
	}
	printf("%d>",v.front());	
} 
