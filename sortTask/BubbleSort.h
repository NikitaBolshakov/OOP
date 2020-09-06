//
// Created by NikitaBolshakov on 05.09.2020.
//
#ifndef OOP_BUBBLESORT_H
#define OOP_BUBBLESORT_H

#include "ISortable.h"

#include <math.h>
#include <sstream>

template<typename T  , typename U>
class BubbleSort : virtual public ISortable<T , U>  {
public:
    using ISortable<T , U>::ISortable;

     void handle(T* data , int length , U comparator) override{
        for(int i = 0 ; i < length ; i++)
            for(int j = 0 ; j < length - i - 1 ; j++)
            {
                comparator.execute(&data[j] , &data[j+1]);
            }

    }
};

#endif //OOP_BUBBLESORT_H