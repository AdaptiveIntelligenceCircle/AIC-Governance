#pragma once 
using namespace std; 

#include <iostream>
#include <string> 

namespace aic :: interface 
{
    class HMNAdapter 
    {
        public:
        void recordMeaning(const string &narrative); 
    }; 
}