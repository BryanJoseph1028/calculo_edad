#include<iostream>
using namespace std;
main(){
	int edad,*p_edad;
	cout<<"ingrese edad";
	cin>>edad;
	p_edad = &edad;
	if(*p_edad>=18){
cout<<"es mayor de edad"<<endl;
	}else{
		cout<<"Es menor de edad"<<endl;
	}
}
