#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){
	double loan,percent,money,interest=0,total,payment,balance;
	int i=1;
	cout << "Enter initial loan: ";
	cin>>loan;
	cout << "Enter interest rate per year (%): ";
	cin>>percent;
	cout << "Enter amount you can pay per year: ";
	cin>>money;
	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	balance=loan;
	do{
	loan=balance;
	interest=(percent*balance)/100;
	total=loan+interest;
	payment=money;
	if(payment>total) payment=total;
	balance=total-payment;
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << i; 
	cout << setw(13) << left << loan;
	cout << setw(13) << left << interest;
	cout << setw(13) << left << total;
	cout << setw(13) << left << payment;
	cout << setw(13) << left << balance;
	cout << "\n";
	i++;
	if(balance<=0) break;	
	}while(true);
	return 0;
}
