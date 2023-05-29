#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

class Ave{
    private:
        string nombre;
    public:
        virtual void volar(){
            cout << "Soy un ave y puedo volar";
        };
        virtual void nadar(){
            cout << "Soy un ave y puedo nadar";
        }
};

class Aguila: public Ave{

};

class Pinguino: public Ave{
    public: 
        void volar(){
            cout << "Soy un pinguino y no puedo volar";
        }
        void nadar(){
            cout << "Soy un pinguino y puedo nadar";
        }
};