#ifndef EXCEPCION_H
#define EXCEPCION_H

#include <iostream>
#include <string>

using std::string;

class Excepcion:public std::exception {
    private:
        string txt;
    public:
        Excepcion();
        Excepcion(string s);
        void display();
};

#endif