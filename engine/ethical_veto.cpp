#include "ethical_veto.h"
using namespace std; 

namespace aic :: engine 
{
    bool EthicalVeto :: triggered (const DecisionContext &ctx) const 
    {
        if (ctx.high_risk) return true; 
        for (const auto &s : ctx.dao_signals)
        {
            if (s == "ETHICAL_VETO") return true; 
        }
        return false; 
    }
}