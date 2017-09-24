/**
 * File              : ece250a1-2.cpp
 * Author            : Yanqing Wu <meet.yanqing.wu@gmail.com>
 * Date              : 21.09.2017
 * Last Modified Date: 24.09.2017
 * Last Modified By  : Yanqing Wu <meet.yanqing.wu@gmail.com>
 */

// Consider the following recursive algorithm that computes min value out of real numbers
// stored in the Array A on positoins from l to r.
//
//  PUZZLE(A: array of real numbers, l: integer, r:integer)
//  if l = r
//      then return A[l]
//
//  temp1 <- PUZZLE(A,l,[(l+r)/2])
//  temp2 <- PUZZLE(A,[(l+r)/2+1],r)
//  if temp1 < temp2
//      then return temp1
//      else return temp2
//
// Write a recurrence describing the cost of running this algorithm on n element array:
// PUZZLE(A,l,n). Solve the recurrence and give the resulting running time of the algorithm.
//

#include <iostream>

int PUZZLE(int * ptr_array, int l, int r){
    static unsigned int call_count = 0;
    call_count++;
    std::cout << "-- function got called. --" << call_count << "times." << std::endl;
    std::cout << "l = " << l << ", array[l] = " << ptr_array[l] << std::endl;
    std::cout << "r = " << r << ", array[r] = " << ptr_array[r] << std::endl;

    if (ptr_array[l] == ptr_array[r]){
         std::cout << "\n -- function call ended -- " << std::endl;
         return ptr_array[l];
    }
    
    int temp1 = PUZZLE(ptr_array, l, ((l+r))/2);
    int temp2 = PUZZLE(ptr_array, ((l+r)/2+1), r);
    std::cout << "temp 1 = " << temp1 << ", temp 2 = " << temp2 << std::endl;

    if (temp1 < temp2){
         std::cout << "\n -- function call ended -- " << std::endl;
         return temp1;
    }
    else{
        std::cout << "\n -- function call ended -- " << std::endl;
        return temp2;
    }

    std::cout << "\n -- function call ended -- " << std::endl;
    return 0;
}

int main(){
    int intArray[20]={8,0,1,9,1,9,8,6,0,6,0,3,2,0,1,7,0,9,2,3};

    int n = PUZZLE(intArray, 4, 17);
    
    std::cout << n << std::endl;

    return 0;
}
