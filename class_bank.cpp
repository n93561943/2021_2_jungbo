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
			cout<<"���� : "<<accName<<endl;
			cout<<"���¹�ȣ : "<<accId<<endl;
			cout<<"�ܾ� : "<<accBal<<endl;
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
		cout<<"���� : "; 
		cin>>choice;
		switch(choice){
			case 1: Create(); break;
			case 2: Deposit(); break;
			case 3: Withdraw(); break;
			case 4: Show(); break;
			case 5: return 0;
			default : printf("�߸��� �Է��Դϴ�.");
		}
		
	}
}

void ShowMenu(){
	cout<<"------------------------"<<endl;
	cout<<"1. ���� ����" <<endl;
	cout<<"2. �Ա� "<<endl;
	cout<<"3. ��� "<<endl;
	cout<<"4. �ܾ� Ȯ�� "<<endl;
	cout<<"5. ���� "<<endl;
	cout<<"------------------------"<<endl; 
}

void Create(){
	char name[NAME_LEN];
	int id;
	int balance;
	
	cout<<"�̸� : ";
	cin>>name;
	cout<<"���¹�ȣ : "; 
	cin>>id;
	cout<<"�Աݾ� : ";
	cin>>balance;
	accArr[accNum++].SetAccount(name,id,balance); 
} 

void Deposit(){
	int id,bal;
	cout<<"���¹�ȣ :";
	cin>>id;
	cout<<"�Աݾ� :";
	cin>>bal;
	for(int i=0;i<accNum;i++){
		if(accArr[i].GetId()==id)
			accArr[i].SetDeposit(bal);
	} 
}


void Withdraw(){
	int id,bal;
	cout<<"���¹�ȣ :";
	cin>>id;
	cout<<"��ݾ� :";
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
