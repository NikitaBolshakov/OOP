//
// Created by NikitaBolshakov on 05.09.2020.
//
template<typename T>
class ISolveable
{
public:
    virtual T solve();
    virtual void printStringInterpretation();
};
