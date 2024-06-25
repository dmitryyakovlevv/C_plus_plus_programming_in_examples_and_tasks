#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    setlocale(LC_ALL,"rus");
    srand(time(0));

    int size, s=0;
    cin>>size;

    int *mass=new int[size];

    for(int i =0; i<size; i++) {
        mass[i] = rand()%10;
        cout<<mass[i]<<' ';
        s+=mass[i]*mass[i];
    }
    cout<<endl<<s;

    return 0;
}