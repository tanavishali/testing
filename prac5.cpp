#include<iostream>
#include<climits>
using namespace std;
int main(){
	int tem_f;
	float tem_cel;
	cout<<"display of a table of equivalant temperatures:\n";
	cout<<"tem_f \t\t tem_cel\n";
	for(int tem_f=50;tem_f<=100;tem_f=tem_f+5){
		tem_cel=(0.555*(tem_f-32));
		cout<<tem_f<<"\t\t"<<tem_cel<<endl;
	}
	
}
