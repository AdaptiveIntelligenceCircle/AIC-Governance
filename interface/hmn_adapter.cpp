#include "hmn_adapter.h"
using namespace std; 

#include <iostream>

namespace aic :: interface 
{
    void HMNAdapter :: recordMeaning(const string &narrative)
    {
        cout << "Meaning recorded:" << narrative << endl;
    }
}