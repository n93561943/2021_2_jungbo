#include<stdio.h>
#include<string.h>
typedef struct {
   int id;
   int balance;
   char name[20];
} account;

account accArr[100]; 
int accNum=0; // ���¸� �����ϱ� ���� ����, accArr[accNum]���� ���¹迭�� ����  

void showmenu(){
	printf("1. ���°���\n");
	printf("2. �Ա�\n");
	printf("3. ���\n");
	printf("4. �������\n");
	printf("5. ����\n");
}
void make(){
	int id,balance;
	char name[20];
	
	printf("���¹�ȣ : "); 	scanf("%d",&id);
	printf("�̸� : "); 	scanf("%s",&name);
	printf("�Աݾ� : "); 	scanf("%d",&balance);

	accArr[accNum].id = id;
	accArr[accNum].balance = balance;
	strcpy(accArr[accNum].name,name);
	accNum++; //���� ���� 
}
void deposit(){
	int money;
	int id;
	
	printf("[�Ա�]\n");
	printf("���¹�ȣ : ");
	scanf("%d",&id);
	printf("�Աݾ�: ");
	scanf("%d",&money);
	
	for(int i=0;i<accNum;i++)
		if(accArr[accNum].id==id)
			accArr[accNum].balance+=money;
	printf("�ԱݿϷ�");
}

void withdraw(){
	int money;
	int id;
	
	printf("[���]\n");
	printf("���¹�ȣ : ");
	scanf("%d",&id);
	printf("��ݾ�: ");
	scanf("%d",&money);
	
	for(int i=0;i<accNum;i++)
		if(accArr[accNum].id==id)
			accArr[accNum].balance-=money;
	printf("��ݿϷ�");
	
}

void show(){
	for(int i=0;i<accNum;i++){
		printf("���¹�ȣ : %d\n",accArr[i].id);
		printf("��    �� : %s\n",accArr[i].name);
		printf("��    �� : %d\n",accArr[i].balance);
	}
}
int main(){
   int choice;
   while(1){
       showmenu();
       printf("���� : ");
       scanf("%d",&choice);
       switch(choice){
          case 1: make(); break;
          case 2: deposit(); break;
          case 3: withdraw(); break;
          case 4: show(); break;
          case 5: return 0; 
          default : printf("�߸��� �Է��Դϴ�.\n");
    	}
    }
}
