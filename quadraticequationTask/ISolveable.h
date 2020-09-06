//
// Created by NikitaBolshakov on 05.09.2020.
//
#ifndef OOP_ISOLVEABLE_H
#define OOP_ISOLVEABLE_H

template<typename T>
class ISolveable
{
public:
    virtual T solve();
    virtual void printStringInterpretation();
};
#endif //OOP_ISOLVEABLE_H

