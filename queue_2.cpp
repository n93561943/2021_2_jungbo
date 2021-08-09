#include<stdio.h>
#include<queue>
#include<string.h>

std::queue<int> q;
int main(){
	int n,data;
	char op[6]={};
	scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		scanf("%s",op);
		if(!strcmp(op,"push")){
			scanf("%d\n",&data);
			q.push(data);
		}
		else if(!strcmp(op,"pop")){
			if(!q.empty()){
				printf("%d\n",q.front());
				q.pop();	
			}
			else printf("%d\n",-1);
		}
		else if(!strcmp(op,"size")) printf("%d\n",q.size());
		else if(!strcmp(op,"empty")) printf("%d\n",q.empty());
		else if(!strcmp(op,"front")){
			if(!q.empty()){
				printf("%d\n",q.front());
			}
			else printf("%d\n",-1);
		}
		else {
			if(!q.empty()){
				printf("%d\n",q.back());
			}
			else printf("%d\n",-1);
		}
		
	}
}


