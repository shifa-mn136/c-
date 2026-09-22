#include<iostream>
using namespace std;
int main(){
	int balance=50000;
	string operation;
	int pin=1234;
	int enteredpin;
	int amount;
	cout<<"      ATM MACHINE      "<<endl;
	cout<<"Enter the pin";
	cin>>enteredpin;
	if(enteredpin==pin){
		cout<<"access granted"<<endl;
		cout<<"Open the menu bar"<<endl;
		cout<<"Choose the option"<<endl;
		cout<<"Operations: deposit,withdraw,balance,exit"<<endl;
		cout<<"Enter operations:";
		cin>>operation;
		if(operation=="deposit"){
			cout<<"Enter deposit amount:";
			cin>>amount;
			if(amount>0){
			balance+=amount;
			cout<<"Amount deposited successfully"<<endl;
			cout<<"Total balance after deposit:"<<balance<<endl;
			} else{
				cout<<"Invaild amount"<<endl;
			}
		}
			 else if(operation=="withdraw"){
				cout<<"Enter withdrawal amount:";
				cin>>amount;
				 if(amount>0&&amount<=balance){
					balance-=amount;
					cout<<"Amount withdrawan successfully"<<endl;
					cout<<"Current balance="<<balance<<endl;
				} else{
					cout<<"Invalid amount or insufficient  balance"<<endl;
				} 
			} else if(operation=="balance"){
				cout<<"Current balance="<<balance<<endl;
			} else if(operation=="exit"){
				cout<<"Thanks for using card";
			}
		 else{
			cout<<"Invalid operations";
		}
			
	}else{
		cout<<"incorrect pin access denied";
	}
}
