//
// Created by NikitaBolshakov on 05.09.2020.
//
#include "ISortable.h"

#include <math.h>
#include <sstream>
#include "IComparable.h"

class IntegerComparator : virtual public IComparable<int> {
private:
    bool compare(int obj1 , int obj2) override{
        if(obj1 > obj2)
            return true;
        return false;
    }
};