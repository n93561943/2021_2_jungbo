#include<stdio.h>
#include<string.h>
#include<stack>
using namespace std;

int check(char str[]){  
	stack<char> s; //���� ���� 
	for(int i=0;i<strlen(str);i++) 
		if(str[i]=='(') s.push('('); // ���� ��ȣ�� ��� ���ÿ� �־�� 
		else if(!s.empty()) s.pop(); // �ݴ� ��ȣ�̰� ���ÿ� ���� ��ȣ�� �ִٸ� ������ pop ���Ѷ� 
		else return 0; //�ݴ� ��ȣ�ε� ���ÿ� ���� ��ȣ�� ���ٸ� 0�� �����϶� 
	return s.empty(); //��� ���� �� ������ empty��� 1�� ����, �ƴϸ� 0�� ���� 
}
int main(){
	int n;
	scanf("%d",&n);
	char str[100]; //���ڿ��� �Է¹���  
	for(int i=0;i<n;i++){
		scanf("%s",str); 
		if(check(str)) printf("YES\n"); //���ڿ� üũ ����� 1�̶�� yes ��� 
		else printf("NO\n"); //���ڿ� üũ ����� 0�̶�� no ���  
	}
}
