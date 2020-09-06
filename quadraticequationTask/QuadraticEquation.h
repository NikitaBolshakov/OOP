//
// Created by NikitaBolshakov on 05.09.2020.
//

#include "ISolveable.h"
#include "IValidable.h"
#include "LinearEquation.h"

#include <math.h>
#include <sstream>
#include <iostream>

class QuadraticEquation : virtual public ISolveable<double*> , virtual public IValidable {
    double a;
    double b;
    double c;

    int solutionsCount = -1;
public:
    QuadraticEquation(double a , double b , double c){
        this -> a = a;
        this -> b = b;
        this -> c = c;

        validate();
    }

    void validate() override {
        if(a == 0 && b == 0 && c == 0)
            throw "All coefficients cannot be zero.";
        if(a == 0 && b == 0 && c != 0)
            throw "Wrong expression";
    }

    void printStringInterpretation() override{
        std::stringstream stringEquation;
        stringEquation << "(" << a << "x^2" << ")" << " + "<< "(" << b << "x) "<< "+" << "(" << c << ")" << " = " << "0";
        std::cout << stringEquation.str().c_str()  << std::endl;
    }

    double* solve() override{
        if(a == 0)
        {
            LinearEquation* linear = new LinearEquation(b , c);
            double* solution = calculateLinear(linear);
            return solution;
        }

        int d = getDiscriminant();
        double* solutions = getSolutions(d);
        return solutions;
    }

    int getSolutionsCount(){
        if(solutionsCount == -1)
            throw "The expression has not been evaluated yet.";
        return solutionsCount;
    }

private:
    double* calculateLinear(LinearEquation* linear){
        solutionsCount = 1;
        double solution = linear -> solve();
        double *solPtr = new double [1];
        solPtr[0] = solution;
        return solPtr;
    }
    int getDiscriminant(){
        double d = b*b - 4 * a * c;
        return d;
    }
    double* getSolutions(int discriminant){
        solutionsCount = calculateSolutionsCount(discriminant);
        return calculateSolutions(discriminant);
    }
    int calculateSolutionsCount(int discriminant){
        if(discriminant > 0)
            return 2;
        else if(discriminant == 0)
            return 1;
        return 0;
    }
    double * calculateSolutions(int discriminant){
        double *solutions = new double [solutionsCount];
        switch (solutionsCount) {
            case 1:
                solutions[0] = -b / (2*a);
                break;
            case 2:
                solutions[0] = (-b + sqrt(discriminant)) / (2*a);
                solutions[1] = (-b - sqrt(discriminant)) / (2*a);
                break;
            default:
                break;
        }
        return solutions;
    }
};
