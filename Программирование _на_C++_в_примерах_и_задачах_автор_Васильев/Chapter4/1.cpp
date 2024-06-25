#include <iostream>
#include <cstdlib>
using namespace std;

int factorial(int n){
    if(n==1){
        return n;
    }
    else{
        return n*factorial(n-1);
    }
}

int main(){
    setlocale(LC_ALL,"rus");
    const int x = 5;
    cout<<"Рекурсия: "<<factorial(x)<<endl;
    int f = 1;
    for(int i=1; i<=5; i++){
        f*=i;
    }
    cout<<"Не рекурсия: "<<f<<endl;
    return 0;
}