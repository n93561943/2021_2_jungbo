#include<stdio.h>
#include<vector>

std::vector<int> vec;

int main(){
	int sum=0;
	while(true){ //0을 입력하면 삽입 종료 
		int tmp;
		scanf("%d",&tmp); 
		if(!tmp) break;
		vec.push_back(tmp);
		sum+=tmp;
	}
	for(int i=0;i<vec.siz료e();i++)
		printf("%d ",vec.at(i));
	printf("\n");
	printf("평균 = %d\n",sum/vec.size());
}
