#include<stdio.h>
#include<vector>

std::vector<int> vec;

int main(){
	int sum=0;
	while(true){ //0�� �Է��ϸ� ���� ���� 
		int tmp;
		scanf("%d",&tmp); 
		if(!tmp) break;
		vec.push_back(tmp);
		sum+=tmp;
	}
	for(int i=0;i<vec.siz��e();i++)
		printf("%d ",vec.at(i));
	printf("\n");
	printf("��� = %d\n",sum/vec.size());
}
