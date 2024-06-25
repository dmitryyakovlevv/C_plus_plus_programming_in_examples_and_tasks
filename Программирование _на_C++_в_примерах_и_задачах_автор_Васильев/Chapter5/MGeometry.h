class MGeometry: public Geometry{
public:
    int m;

    void show(int x, int y, int z, int i){
        cout<<"Ширина: "<<x<<endl;
        cout<<"Высота: "<<y<<endl;
        cout<<"Глубина: "<<z<<endl;
        cout<<"Масса: "<<i<<endl;
    }

    void p(int x, int y, int z, int i){
        cout<<"p="<<i/(x*y*z)<<endl;
    }

    MGeometry(int x, int y, int z, int i): Geometry(x, y, z){
        cout<<"Дочерний объект создан"<<endl;
        m = i;
    }
};
