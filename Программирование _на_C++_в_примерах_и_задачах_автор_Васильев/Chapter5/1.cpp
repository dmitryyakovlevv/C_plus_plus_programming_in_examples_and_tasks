#include <iostream>
#include "Geometry.h"
#include "MGeometry.h"
using namespace std;




int main(){
    setlocale(LC_ALL,"rus");

    Geometry obj1(1, 2,3);
    obj1.show(1,2,3);
    obj1.V(1, 2, 3);

    MGeometry obj2(1, 2,3, 6);
    obj2.show(1,2,3, 6);
    obj2.p(1, 2, 3, 6);
    return 0;
}