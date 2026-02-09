#pragma once 
#include "decision_context.h"

#include "ethical_veto.h"
using namespace std; 

namespace aic
{
    class GovernanceEngine 
    {
        public:
        DecisionType evaluate(const DecisionContext &ctx); 

        private: 
        EthicalVeto veto; 
    }; 
}