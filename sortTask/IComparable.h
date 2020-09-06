//
// Created by NikitaBolshakov on 05.09.2020.
//
#ifndef OOP_ICOMPARABLE_H
#define OOP_ICOMPARABLE_H

template<typename T>
class IComparable
{
public:
    virtual void compare(T obj1 , T obj2){std::cout<<"NOT_OK"<<std::endl;};
};

#endif //OOP_ICOMPARABLE_H
