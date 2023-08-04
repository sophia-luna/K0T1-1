#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int n=600851475143;
    long long int lpf;
    long long int divisor=2;

    while(n>1) //ainda n foi fatorado por completo
    {
        while(n%divisor==0) //fatorando a exaustao garantindo q restem apenas primos
        {
            lpf=divisor; //d=maior divisor ate o momento
            n=n/divisor;
        }
        divisor+=1;
    }
    cout<<lpf<<endl;

}