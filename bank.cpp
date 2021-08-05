#include<stdio.h>
#include<string.h>
typedef struct {
   int id;
   int balance;
   char name[20];
} account;

account accArr[100]; 
int accNum=0; // 계좌를 생성하기 위한 변수, accArr[accNum]으로 계좌배열에 접근  

void showmenu(){
	printf("1. 계좌개설\n");
	printf("2. 입금\n");
	printf("3. 출금\n");
	printf("4. 계좌출력\n");
	printf("5. 종료\n");
}
void make(){
	int id,balance;
	char name[20];
	
	printf("계좌번호 : "); 	scanf("%d",&id);
	printf("이름 : "); 	scanf("%s",&name);
	printf("입금액 : "); 	scanf("%d",&balance);

	accArr[accNum].id = id;
	accArr[accNum].balance = balance;
	strcpy(accArr[accNum].name,name);
	accNum++; //계좌 증설 
}
void deposit(){
	int money;
	int id;
	
	printf("[입금]\n");
	printf("계좌번호 : ");
	scanf("%d",&id);
	printf("입금액: ");
	scanf("%d",&money);
	
	for(int i=0;i<accNum;i++)
		if(accArr[accNum].id==id)
			accArr[accNum].balance+=money;
	printf("입금완료");
}

void withdraw(){
	int money;
	int id;
	
	printf("[출금]\n");
	printf("계좌번호 : ");
	scanf("%d",&id);
	printf("출금액: ");
	scanf("%d",&money);
	
	for(int i=0;i<accNum;i++)
		if(accArr[accNum].id==id)
			accArr[accNum].balance-=money;
	printf("출금완료");
	
}

void show(){
	for(int i=0;i<accNum;i++){
		printf("계좌번호 : %d\n",accArr[i].id);
		printf("이    름 : %s\n",accArr[i].name);
		printf("잔    액 : %d\n",accArr[i].balance);
	}
}
int main(){
   int choice;
   while(1){
       showmenu();
       printf("선택 : ");
       scanf("%d",&choice);
       switch(choice){
          case 1: make(); break;
          case 2: deposit(); break;
          case 3: withdraw(); break;
          case 4: show(); break;
          case 5: return 0; 
          default : printf("잘못된 입력입니다.\n");
    	}
    }
}
