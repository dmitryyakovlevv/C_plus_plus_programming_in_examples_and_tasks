#include <iostream>
using namespace std;

class Geometry{
public:
    int a;
    int b;
    int h;

    void show(int x, int y, int z){
        cout<<"Ширина: "<<x<<endl;
        cout<<"Высота: "<<y<<endl;
        cout<<"Глубина: "<<z<<endl;
    }

    void V(int x, int y, int z){
        cout<<"V="<<x*y*z<<endl;
    }


    Geometry(int x, int y, int z){
        a = x;
        b = y;
        h = z;
        cout<<"Объект создан"<<endl;
    }
};
