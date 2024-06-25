#include <iostream>
using namespace std;

int main(){
    setlocale(LC_ALL,"rus");
    int s=0;
    for(int i=0; i<10; i++){
        if (i%2!=0){
            s+=i;
            cout<<i<<endl;
        }
    }
    cout<<"S = "<<s;
    return 0;
}