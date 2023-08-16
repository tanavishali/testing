#include<iostream>
using namespace std;
int main(){
	int n,sum=0;
	cout<<"find the sum of square of integers where n is positive number\n";
	cin>>n;
	for(int i=1;i<=n;i++){
		sum=( sum+(i*i));
	}
	cout<<"sum is "<<sum;
}
