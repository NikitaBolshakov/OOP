//
// Created by NikitaBolshakov on 05.09.2020.
//
#include "ISortable.h"

#include <math.h>
#include <sstream>
#include "IComparable.h"

class IntegerComparator : virtual public IComparable<int*> {
public:
    void compare(int* obj1 , int* obj2) override{
        if (*obj1 > *obj2)
        {
            int change_val = *obj1;
            *obj1 = *obj2;
            *obj2 = change_val;
        }
    }
};