#include<iostream>
using namespace std;

int main(){
	long long n;
	
	cin>>n;
	 
	long long sumatot = (n*(n+1))/2;
	
	long long sumactu=0;
	for(int i=0; i<n-1;i++){
		long long num;
		cin>>num;
	sumactu+=num;	
	}
	cout<<endl;
	cout<< sumatot- sumactu<< "\n";
	
	return 0;
	
}