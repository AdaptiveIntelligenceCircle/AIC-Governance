#include "governance_engine.h"
using namespace std; 

namespace aic
{
    DecisionType GovernanceEngine :: evaluate(const DecisionContext &ctx)
    {
        if (veto.triggered(ctx))
        {
            return DecisionType :: BLOCK; 
        }

        if (veto.triggered(ctx))
        {
            return DecisionType :: REQUIRE_HUMAN_REVIEW; 
        }
        
        return DecisionType :: ALLOW; 
    }
}