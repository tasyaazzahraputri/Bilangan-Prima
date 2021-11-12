#include <iostream>
using namespace std;

int main(){
	int bilangan;
	int x;
	
	cout<<"Masukkan Bilangan: ";
	cin>>bilangan;
	x=2;
	
	do{
		if (bilangan==2 ||bilangan==3 ||bilangan==5 ||bilangan==7){
			cout<<"Bilangan Prima";
			break;
		}else if (bilangan%2==0 ||bilangan%3==0 ||bilangan%5==0 ||bilangan%7==0 ||bilangan==0 ||bilangan==1 ||bilangan<0){
			cout<<"Bukan Bilangan Prima";
			break;
		}else{
			cout<<"Bilangan Prima";
			break;
		}	x++;
	}while(x<bilangan);
}
