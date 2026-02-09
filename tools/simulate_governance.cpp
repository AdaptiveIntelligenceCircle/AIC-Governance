#include "../engine/governance_engine.h"
#include <iostream>

using namespace std; 

namespace aic 
{
    int main()
    {
        DecisionContext ctx; 
        ctx.high_risk = true;

        GovernanceEngine engine; 
        auto res = engine.evaluate(ctx); 
        
        cout << "Simulation result:" << (int) res << endl;
    }
}