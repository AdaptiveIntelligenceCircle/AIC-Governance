#include "../engine/governance_engine.h"
#include "../interface/ain_adapter.h"
#include "../interface/hmn_adapter.h"

using namespace std; 

namespace aic
{
    int main()
    {
        GovernanceEngine engine;
        AINAdapter ain; 
        HMNAdapter hmn; 

        DecisionContext ctx;
        ctx.decision_id = "example_decision"; 
        ctx.domain = "trust";
        ctx.dao_signals = {"Trust warning"};
        ctx.high_risk = false; 
        
        auto result = engine.evaluate(ctx); 

        if (result == DecisionType :: BLOCK)
        {
            hmn.recordMeaning("Decision blocked due to ethical risk"); 
        }
        else  
        {
            ain.broadcastDecision(ctx.decision_id);
        }
    }
}