#include<stdio.h>
#include<stack>
std::stack<int> s;
int main(){
	int n;
	scanf("%d",&n);
	
	while(n){
		s.push(n%2);
		n/=2;
	}
	while(!s.empty()){
		printf("%d",s.top());
		s.pop();
	}
}
