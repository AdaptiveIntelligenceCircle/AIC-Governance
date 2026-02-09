#pragma once 
#include "decision_context.h"
using namespace std ; 

namespace aic  
{
    class EthicalVeto
    {
        public: 
        bool triggered(const DecisionContext &ctx) const; 
    }; 
}