#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
using namespace std;
class Bank{
	char name[50],mobile[11];
	char ch1,ch2;
	int  amnt=0;
	int  dep, dep2, dep3;
	 
	
	public:
		void OpenAccount();
		int DepositeMoney();
		int Withdraw();
		void CurrentAmount();
		void ShowDetails();
		void Exit();
		
};
void Bank :: OpenAccount(){
	cout<<"\n Enter Your Full Name : ";
	cin>>name;
	cout<<"\n Enter Your Mobile Number: ";
	cin>>mobile;
	
//	agr mobile no 11 nmbr k brabr ni hai tu nmbr invalid hoga 
	if(strlen(mobile)!=11){
		cout<<"Your Mobile Number Is Invalid Try Agian \n";
	}
	while(strlen(mobile)!=11){
		cout<<"\n Again Enter Your Mobile Number ";
		cin>>mobile;
	}
	cout<<"\n To Open Your Account Deposite Amount (> 500) ";
	cin>>amnt;
	if(amnt<500){
		while(amnt<500){
			cout<<"\n Add "<<500-amnt<<" More Balance ";
			cin>>dep;
			amnt=amnt+dep;
		}
		cout<<"\n Your Balance Is : "<<amnt;
	}
	else{
		cout<<"\n Your Balance Is : "<<amnt;
	}
	cout<<"Your Account Is Successfully Created \n";
}
int Bank :: DepositeMoney(){
//	jb tk ch1 n k brabr ni hota yah loop chale ga 
	while(ch1!='N'){
	
	cout<<"How Much Money You Deposite : \n";
	cin>>dep2;
	amnt+=dep2;
	cout<<"\nYour Current Balance Is : "<<amnt;
	cout<<"\nIf You Want To Deposite More Money Choice Option Y (Yes)  Otherwise N (No) ";
	cin>>ch1;
}
return 0;
}
int Bank :: Withdraw(){
//	jb tk ch1 n k brabr ni hota yah loop chale ga 
while(ch2!='N') {
	cout<<"\nYour Current Balance Is : "<<amnt;
	cout<<"How Much Money You Want To Withdraw ? \n";
	cin>>dep3;
	if(dep3>amnt){
		cout<<"Your Balance Is Insufficient \n";
		break;
	}
	else{
		amnt-=dep3;
		cout<<"\n Your Transaction Is Successfully Now Your Current Balance Is : "<<amnt;
		cout<<"If You Want More Withdraw Money Press Y (Yes) Otherwise Press N (No) \n";
		cin>>ch2;
	}
}
return 0;
}
void Bank :: CurrentAmount(){
	cout<<"Your Current Amount In Your Account Is : "<<amnt;
}
void Bank :: ShowDetails(){
	cout<<"\n Account Holder Name : "<<name;
	cout<<"\n Mobile Number : "<<mobile;
}
void Bank :: Exit(){
	cout<<"\n Thank To Use Our Project ";
	cout<<"\n Best Of Luck";
}
int main(){
	Bank CallObject;
	cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\\t\t\tBank Management System";
	int Option;
           	while(1){
	cout<<"\n1 -> Open Your New Account : ";
	cout<<"\n2 -> Deposite Money In Your Account : ";
	cout<<"\n3 -> Withdraw Money In Your Account : ";
	cout<<"\n4 -> Check Your Total Bank Balance In Your Account : ";
	cout<<"\n5 -> Show All Details : ";
	cout<<"\n6 -> Eixt\n";
	cout<<"\nSelect Any One Option What You Want To Perform : ";
	cin>>Option;
		switch(Option){
			case 1 :
				CallObject.OpenAccount();
				break;
			case 2:
				CallObject.DepositeMoney();
				break;
			case 3 :
				CallObject.Withdraw();
				break;
			case 4:
				CallObject.CurrentAmount();
				break;
			case 5:
				CallObject.ShowDetails();
				break;
			case 6:
				if(Option==6){
					CallObject.Exit();
				}
			defualt:
				cout<<"\n Invalid Option Please Select Correct Option Thanks";
				
					
		}
	}
}
