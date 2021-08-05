#include<stdio.h>
#include<string.h>
#include<stack>
using namespace std;

int check(char str[]){  
	stack<char> s; //스택 선언 
	for(int i=0;i<strlen(str);i++) 
		if(str[i]=='(') s.push('('); // 여는 괄호인 경우 스택에 넣어라 
		else if(!s.empty()) s.pop(); // 닫는 괄호이고 스택에 여는 괄호가 있다면 스택을 pop 시켜라 
		else return 0; //닫는 괄호인데 스택에 여는 괄호가 없다면 0을 리턴하라 
	return s.empty(); //모두 끝난 후 스택이 empty라면 1을 리턴, 아니면 0을 리턴 
}
int main(){
	int n;
	scanf("%d",&n);
	char str[100]; //문자열을 입력받음  
	for(int i=0;i<n;i++){
		scanf("%s",str); 
		if(check(str)) printf("YES\n"); //문자열 체크 결과가 1이라면 yes 출력 
		else printf("NO\n"); //문자열 체크 결과가 0이라면 no 출력  
	}
}
