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
	std::cout<<"ù ��° �����Է� : ";
	std::cin>>val1;
	 
	std::cout<<"�� ��° �����Է� : ";
	std::cin>>val2;
	 
	result = val1+val2;
	std::cout<<"������� : " <<result<<std::endl;
	
	printf("ù ��° �����Է� : ");
	scanf("%d",&val1);
	printf("�� ��° �����Է� : ");
	scanf("%d",&val2);
	result = val1+val2;
	printf("������� : %d",result);
	return 0; 
}
