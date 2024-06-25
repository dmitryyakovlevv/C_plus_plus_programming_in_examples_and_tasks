#include <iostream>
using namespace std;

int main(){
    setlocale(LC_ALL,"rus");
    int n=1,k=0,s;
    cout<<"Введите число"<<endl;
    cin>>s;
    while ( k<s ) {
        if (n%4 == 3){
            cout<<n<<" ";
            k++;
        }
        n++;
    }
    return 0;
}