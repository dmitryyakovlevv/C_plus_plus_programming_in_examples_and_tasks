#include <iostream>
using namespace std;

int main(){
    setlocale(LC_ALL,"rus");
    int n=1,k=0;
    while ( k<5 ) {
        if (n%2 != 0){
            cout<<n<<" ";
            k++;
        }
        n++;
    }
    return 0;
}