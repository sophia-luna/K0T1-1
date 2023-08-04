#include <iostream>
using namespace std;
 
int main(){

	int atual=1;
	int anterior=0;
	int aux;
	int sum=0;

	while(atual<=4000000)
	{
        	if(atual%2==0) sum+=atual;
		aux=atual;
		atual+=anterior;
		anterior=aux;
	}
	cout<<sum<<endl;
}
