#include<iostream>
using namespace std;

//Write the function printO() here
void printO(int N,int M){
	int i=0,j=0;
	if(M<=0 or N<=0) cout<<"Invalid input";
	while(i<N){
		while(j<M){
		cout<<"O";
		j++;
		}
	cout<<"\n";
	j=0;
	i++;
	}
}

int main(){
	
	printO(2,2);
	cout << "\n";
	
	printO(3,5);
	cout << "\n";	
	
	printO(5,3);
	cout << "\n";	
	
	printO(0,3);
	cout << "\n";	
	
	printO(7,-1);
	cout << "\n";	
	
	return 0;
}
