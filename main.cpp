// This program demonstrates the use of a nested structure.
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct CostInfo
{
    double  food,           // Food costs
            medical,        // Medical costs
            license,        // License fee
            misc;           // Miscellaneious costs
};