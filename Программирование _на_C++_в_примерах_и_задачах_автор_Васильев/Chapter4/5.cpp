#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int sum(int n){
    if(n==0){
        return n;
    }
    else{
        return n+sum(n-1);
    }
}
int sum(int n, int k) {
    if(n==0){
        return n;
    }
    else{
        return pow(n,k)+sum(n-1, k);
    }
}
int main(){
    setlocale(LC_ALL,"rus");
    cout<<sum(2)<<endl;
    cout<<sum(2,2)<<endl;
    return 0;
}