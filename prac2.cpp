#include<iostream>
using namespace std;
int main(){
	int num,product=1;
	cout<<"product of first 10 odd number";
	for(int i=1;i<=10;i=i+2){
		product=product*i;
	}
	cout<<product;
}
