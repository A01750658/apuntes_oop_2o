#include <iostream>

using std::cout;
using std::endl;

class A{
    public: void path(){
        cout << "path de A" << endl;
    }
};
    
class B : virtual public A{
    public: void imprimir(){
        cout << "Imprimir desde b" << endl;
}
};

class C : virtual public A{
    public: void imprimir(){
            cout << "Imprimir desde c" << endl;
        }
};

class D : public B, public C{};

int main(){
    D obj;
    obj.C::imprimir();
    obj.path();
    return 0;
}