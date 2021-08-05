#include<stdio.h>
#include<stack>
#include<string.h>
using namespace std;
stack<int> s;
int main(){
	int size,n;
	char op[10];
	scanf("%d",&size);
	
	for(int i=0;i<size;i++){
		scanf("%s",op);
		if(!strcmp(op,"push")){ //strcmp(str1,str2) str1<str2 음수 반환, str1>str2 양수 반환, str1 ==str2 0반환 
			scanf("%d",&n);
			s.push(n);
		}
		if(!strcmp(op,"pop")){
			if(!s.empty()){
				printf("%d\n",s.top());
				s.pop();
			}
			else printf("%d\n",-1);
		}

		if(!strcmp(op,"top")) {
			if(!s.empty()) printf("%d\n",s.top());
			else printf("%d\n",-1);
		}
		if(!strcmp(op,"size")) printf("%d\n",s.size());
		if(!strcmp(op,"empty")) printf("%d\n",s.empty());
	}
}
