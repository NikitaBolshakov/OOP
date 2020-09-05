//
// Created by NikitaBolshakov on 05.09.2020.
//
#include <iostream>
#include "QuadraticEquation.h"

int main(){
    QuadraticEquation *equation = new QuadraticEquation(1 , 2 ,1);

    double *result = equation -> solve();
    int solutionsCount = equation -> getSolutionsCount();

    std::cout << "Уравнение: ";
    equation -> printStringInterpretation();

    std::cout << "Решения(" << solutionsCount << "):" << std::endl;
    for( int i  = 0 ; i < solutionsCount;i++){
        std::cout << result[i] << std::endl;
    }
}

