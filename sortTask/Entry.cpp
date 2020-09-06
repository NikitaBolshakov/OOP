//
// Created by NikitaBolshakov on 05.09.2020.
//
#include <iostream>
#include "IntegerComparator.h"
#include "BubbleSort.h"

int main(){
    IntegerComparator* comparable = new IntegerComparator();
    BubbleSort<int , IntegerComparator >* sort = new BubbleSort<int , IntegerComparator>();

    int* data =  new int[7];
    data[0] = 1;
    data[1] = 3;
    data[2] = 2;
    data[3] = 9;
    data[4] = 4;
    data[5] = 8;
    data[6] = 6;

    sort -> sort(data , 7 , *comparable);

    for(int i = 0 ; i < 7 ; i++){
        std::cout << *(data+i) << std::endl;
    }
}