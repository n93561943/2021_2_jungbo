#include<iostream>
#include<stdio.h>
int main(){
	/*
	int num=20;
	
	std::cout<<"Hello World!"<<std::endl;
	std::cout<<num<<std::endl;
	std::cout<<num<<' '<<'A';
	std::cout<<' '<<3.14<<std::endl;
	
	printf("Hello World!\n");
	printf("%d\n",num);
	printf("%d %c ",num,'A');
	printf("%.2f",3.14);*/
	
	int val1,val2,result;
	std::cout<<"첫 번째 숫자입력 : ";
	std::cin>>val1;
	 
	std::cout<<"두 번째 숫자입력 : ";
	std::cin>>val2;
	 
	result = val1+val2;
	std::cout<<"덧셈결과 : " <<result<<std::endl;
	
	printf("첫 번째 숫자입력 : ");
	scanf("%d",&val1);
	printf("두 번째 숫자입력 : ");
	scanf("%d",&val2);
	result = val1+val2;
	printf("덧셈결과 : %d",result);
	return 0; 
}
