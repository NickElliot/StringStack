#ifndef _STRINGSTACK_
#define _STRINGSTACK_
#include <string>
#include "TrueStack.h"

class StringStack
{
    public: 
    std::string pop();
    void push(std::string);
    bool isEmpty();
}