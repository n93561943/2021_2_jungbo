#include<stdio.h>
#include<deque>
using namespace std;

deque<int> dq;

int main(){
	int n,k;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		dq.push_back(i);
	while(dq.size()-1){
		dq.pop_front();
		k = dq.front();
		dq.pop_front();
		dq.push_back(k);
	}
	printf("%d",dq.front());
}
