#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    setlocale(LC_ALL,"rus");
    srand(time(0));

    int size1, size2, s=0;
    cin>>size1>>size2;
    int **mass = new int *[size1];
    for(int i =0; i<size1; i++) {
        mass[i] = new int [size2];
        for(int j=0; j<size2; j++){
            mass[i][j] = rand()%10;
            cout<<mass[i][j]<<" ";
            s+= mass[i][j]*mass[i][j];
        }
        cout<<endl;
    }
    cout<<"Sum^2="<<s;
    return 0;
}