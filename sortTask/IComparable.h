//
// Created by NikitaBolshakov on 05.09.2020.
//
#ifndef OOP_ICOMPARABLE_H
#define OOP_ICOMPARABLE_H

template<typename T>
class IComparable
{
public:
    void execute(T* obj1 , T* obj2){
        if(compare(*obj1 , *obj2)){
            T change_val = *obj1;
            *obj1 = *obj2;
            *obj2 = change_val;
        }
    }
private:
    virtual bool compare(T obj1 , T obj2){};
};

#endif //OOP_ICOMPARABLE_H
