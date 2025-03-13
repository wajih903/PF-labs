/*#include<iostream>
using namespace std;
int main(){
	int b=30;
	int *ptr;
	ptr=&b;
	cout<<*ptr<<endl;
}*/
/*#include<iostream>
using namespace std;
int main(){
	int b=30;
	int *ptr;
	ptr=&b;
	*ptr=40;
	cout<<b<<endl;
}*/
#include<iostream>
using namespace std;
int main(){
	int v[5]={40,50,60,46,67};
	int *ptr=v;
	for(int i=0 ;i<5;i++){
		cout<<"value of ptr=" <<*ptr<<endl;
		//cout<<"value at *ptr"=<<*ptr<<"\n";
		ptr++;
		
	}
	
}
