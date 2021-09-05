#include<iostream>
#include<cstring>
using namespace std;
const int NAME_LEN=10;
class Account {
	private :
		char accName[NAME_LEN];
		int accId;
		int accBal;
		
	public :
		void SetAccount(char *name, int id, int balance){
			strcpy(accName,name);			
			accId = id;
			accBal = balance;
		}
		void GetAccount(){
			cout<<"고객명 : "<<accName<<endl;
			cout<<"계좌번호 : "<<accId<<endl;
			cout<<"잔액 : "<<accBal<<endl;
		}
		void SetDeposit(int money){
			accBal+=money;
		} 
		void SetWithdraw(int money){
			accBal-=money;
		} 
		int GetId(){
			return accId;
		}
};

Account accArr[100];
int accNum;

void ShowMenu();
void Create();
void Deposit();
void Withdraw();
void Show();

int main(){
	int choice;
	
	while(1){
		ShowMenu();
		cout<<"선택 : "; 
		cin>>choice;
		switch(choice){
			case 1: Create(); break;
			case 2: Deposit(); break;
			case 3: Withdraw(); break;
			case 4: Show(); break;
			case 5: return 0;
			default : printf("잘못된 입력입니다.");
		}
		
	}
}

void ShowMenu(){
	cout<<"------------------------"<<endl;
	cout<<"1. 계좌 생성" <<endl;
	cout<<"2. 입금 "<<endl;
	cout<<"3. 출금 "<<endl;
	cout<<"4. 잔액 확인 "<<endl;
	cout<<"5. 종료 "<<endl;
	cout<<"------------------------"<<endl; 
}

void Create(){
	char name[NAME_LEN];
	int id;
	int balance;
	
	cout<<"이름 : ";
	cin>>name;
	cout<<"계좌번호 : "; 
	cin>>id;
	cout<<"입금액 : ";
	cin>>balance;
	accArr[accNum++].SetAccount(name,id,balance); 
} 

void Deposit(){
	int id,bal;
	cout<<"계좌번호 :";
	cin>>id;
	cout<<"입금액 :";
	cin>>bal;
	for(int i=0;i<accNum;i++){
		if(accArr[i].GetId()==id)
			accArr[i].SetDeposit(bal);
	} 
}


void Withdraw(){
	int id,bal;
	cout<<"계좌번호 :";
	cin>>id;
	cout<<"출금액 :";
	cin>>bal;
	for(int i=0;i<accNum;i++){
		if(accArr[i].GetId()==id)
			accArr[i].SetDeposit(bal);
	} 
}

void Show(){
	for(int i=0;i<accNum;i++){
		accArr[i].GetAccount();
	} 
}
