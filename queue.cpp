#include<stdio.h>
#include<queue>
std::queue<int> q;
int main(){
	q.push(1);
	q.push(2);
	q.pop();
	q.push(3);
	q.pop();
	for(int i=0;i<4;i++)
		q.push(i);
	q.pop();
	q.pop();
	while(!q.empty()){
		printf("%d ",q.front());
		q.pop();
	}
}
