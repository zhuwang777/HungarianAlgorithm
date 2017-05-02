#include "hungarianalgorithm.h"

int main()
{
        //Hungarian Algorithm
//    std::vector< std::vector<double> > costMatrix = {
//        {82, 83, 69},
//        {77, 37, 49},
//        {11, 69,  5},
//        { 8,  9, 98},
//        {56, 23, 70},
//        {47, 23, 14}
//    };
std::vector< std::vector<double> > costMatrix = {
    {82.3, 77.5, 11, 8, 56, 47},
    {83, 37, 69, 9, 23, 23},
    {69, 49, 5, 98, 70, 14}
};


HungarianAlgorithm HungAlgo;
std::vector<int> assignment;

double cost = HungAlgo.Solve(costMatrix, assignment);

for (unsigned int x = 0; x < costMatrix.size(); x++)
    std::cout << x << "," << assignment[x] << "\n";

    return 0;
}