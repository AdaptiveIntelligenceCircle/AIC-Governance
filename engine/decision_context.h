#pragma once 
#include <iostream> 

#include <vector> 
using namespace std; 

namespace aic :: engine 
{
    enum class DecisionType 
    {
        ALLOW, 
        BLOCK, 
        REQUIRE_HUMAN_REVIEW
    }; 

    struct DecisionContext 
    {
        string decision_id; 
        string domain; 
        vector<string> dao_signals;
        bool high_risk = false; 
    }; 
}