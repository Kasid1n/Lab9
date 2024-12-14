#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	double loan, dok, pay, prev, rdok, total, rpay, newb ;
	int year = 1;
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> dok;
	cout << "Enter amount you can pay per year: ";
	cin >> pay;
	prev = loan;
	
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
	cout << fixed << setprecision(2); 
	do{
	rdok = prev*(dok/100);
	total = prev+rdok;
	if(total < pay){
		rpay = total;
	}
	else{
		rpay = pay;
	}
	newb = total-rpay;	
	cout << setw(13) << left << year; 
	cout << setw(13) << left << prev;
	cout << setw(13) << left << rdok;
	cout << setw(13) << left << total;
	cout << setw(13) << left << rpay;
	cout << setw(13) << left << newb;
	year ++;
	prev = newb;
	cout << "\n";	
	}while(newb > 0);
	return 0;
}
