#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    setlocale(LC_ALL,"rus");
    const int size = 3;
    int a[size], b[size], s=0;
    srand(time(0));
    for(int i =0; i<size; i++) {
        a[i] = rand()%10;
        b[i] = rand()%10;
        s += a[i]*b[i];
        cout<<a[i]<<'*'<<b[i]<<' ';
    }
    cout<<endl<<s;

    return 0;
}