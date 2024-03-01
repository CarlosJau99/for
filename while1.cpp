#include <iostream>
using namespace std;
main(){
	// i++, i+=1
/*	int i = 5;
	while(i<5){
		cout<<i<<endl;
		i++;
	}
	int ii = 5;
	do{
		cout<<"do while:"<<ii<<endl;
		ii++;
	}	while(i<5);
*/	
	char respuesta= 's';
	
	 while(respuesta=='s' || respuesta=='S'){
	 	cout<<"desea ingresar otro valor (s/n)";
	 	cin>>respuesta;
	 	
	 }
	
	
	
	system("pause");
}
