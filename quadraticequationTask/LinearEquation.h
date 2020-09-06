//
// Created by NikitaBolshakov on 05.09.2020.
//
#ifndef OOP_LINEAREQUATION_H
#define OOP_LINEAREQUATION_H


#include "ISolveable.h"
#include "IValidable.h"

#include <math.h>
#include <sstream>
#include <iostream>

class LinearEquation : virtual public ISolvable<double> , virtual public IValidable {
    double a;
    double b;

public:
    LinearEquation(double a , double b){
        this -> a = a;
        this -> b = b;

        validate();
    }

    void validate() override {
        if(a == 0 && b == 0)
            throw "All coefficients cannot be zero.";
        if(a == 0 && b != 0)
            throw "Wrong expression";
    }

    void printStringInterpretation() override{
        std::stringstream stringEquation;
        stringEquation << "(" << a << "x" << ")" << " + "<< "(" << b << ")"  << " = " << "0";
        std::cout << stringEquation.str().c_str()  << std::endl;
    }

    double solve() override{
        return -b/a;
    }
};

#endif //OOP_LINEAREQUATION_H


