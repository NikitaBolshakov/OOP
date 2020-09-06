//
// Created by NikitaBolshakov on 05.09.2020.
//

#ifndef OOP_ISORTABLE_H
#define OOP_ISORTABLE_H

#include "IComparable.h"
#include <iostream>

template<typename T , typename U>
class ISortable
{
public:
    void sort(T data , int length , U comparator ){
        checkComparator();

        validateSortData(data , length);
        handle(data , length , comparator);
    }
    virtual void handle(T data , int length , U comparator){};

    void checkComparator(){
        static_assert(std::is_base_of<IComparable<T>, U>::value, "template instantiation of Class are not extends IComparable<T>");
    }

private:
    void validateSortData(T data , int length){
        if(!data)
            throw("Data pointer can't be null.");
        if(length <= 0)
            throw("Length can be positive only.");
    }
};

#endif //OOP_ISORTABLE_H