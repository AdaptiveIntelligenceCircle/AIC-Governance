#pragma once 
#include <string>
using namespace std; 

namespace aic :: interface 
{
    class AINAdapter
    {
        public: 
        void broadcastDecision(const string &decision_id); 
    }; 
}