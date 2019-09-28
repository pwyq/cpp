/* Given a set of integers, the task is to divide it into two sets S1 and S2 such that the absolute difference between their sums is minimum.
If there is a set S with n elements, then if we assume Subset1 has m elements, Subset2 must have n-m elements and the value of abs(sum(Subset1) – sum(Subset2)) should be minimum.
Input:  arr[] = {1, 6, 11, 5}
Output: 1
Explanation:
Subset1 = {1, 5, 6}, sum of Subset1 = 12
Subset2 = {11}, sum of Subset2 = 11
*/


// RECURSIVE approach
// idea is to generate all possible sums from all the values of array and to check which solution is the most optimal one.
// To generate sums we either include the i’th item in set 1 or don’t include, i.e., include in set 2.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to find the minimum sum
// `i` is the index of elem
int findMinRec(vector<int> a, int i, int sumCalculate, int sumTotal)
{
    // If we have reached last element.  Sum of one
    // subset is sumCalculated, sum of other subset is
    // sumTotal-sumCalculated.  Return absolute difference
    // of two sums.

    // if (i == 0)
    if (i == a.size())
        return std::abs((sumTotal-sumCalculate) - sumCalculate);

    // For every item arr[i], we have two choices
    // (1) We do not include it first set
    // (2) We include it in first set
    // We return minimum of two choices
    cout << "i = " << i << ", set1 = " << sumCalculate << ", set2 = " << (sumTotal-sumCalculate) << endl;

    return std::min(findMinRec(a, i+1, sumCalculate, sumTotal),
                    findMinRec(a, i+1, sumCalculate+a[i+1], sumTotal));
}

// Returns minimum possible difference between sums
// of two subsets
int findMin(vector<int> a)
{
    // Compute total sum of elements
    int sum = 0;
    for (int i = 0; i < a.size(); i++) {
        sum += a[i];
    }

    // Compute result using recursive function
    // need to pass the total amount of element
    //return findMinRec(a, a.size(), 0, sum);
    return findMinRec(a, 0, 0, sum);
}

// Driver program to test above function
int main()
{
    //vector<int> arr = {3, 1, 4, 2, 2, 1};
    vector<int> arr = {1, 2, 3, 4, 5};
    int x = findMin(arr);
    cout << "The minimum difference between two sets is "
         << x
         << endl;
    return 0;
}
