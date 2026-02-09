#include <string> 

using namespace std;

#include <algorithm>
#include <cmath> 

namespace aic 
{
    string escalationLevel(int anomalies)
    {
        if (anomalies > 5) return "HIGH"; 
        if (anomalies > 2) return "MEDIUM"; 
        return "LOW"; 
    }
}