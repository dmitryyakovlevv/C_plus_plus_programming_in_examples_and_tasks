#include <iostream>
using namespace std;

int main(){
    setlocale(LC_ALL,"rus");
    int mass[10];
    int n=1,k=0;
    while ( k<10 ) {
        if (n%2 == 0){
            mass[k] = n;
            k++;
        }
        n++;
    }
    int s=0;
    while (s<10){
        cout<<mass[s]<<" ";
        s++;
    }
    return 0;
}