#include "ain_adapter.h"
using namespace std; 

#include <iostream>

namespace aic 
{
    void AINAdapter::broadcastDecision(const string& decision_id) 
    {
        cout << "[AIN] Broadcasting decision: " << decision_id << endl;
    }
}