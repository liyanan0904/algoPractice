/*==============================================================================
*   
* File  :LeetCode167.cpp
* Desc. :
*   
* Author: shuhan
* Date  : 2018.01.23
* Email : *********** 
============================================================================*/


#include <iostream>
#include <vector>
using namespace std;


vector<int> twoSum(vector<int>& numbers, int target) {
    vector<int> result;

    if (numbers.empty()) {
       return result; 
    }
    int i = 0;
    int j = numbers.size() - 1;

    while (i < j) {
        if ((numbers[i] + numbers[j]) > target) {
            j--;
        } else if ((numbers[i] + numbers[j]) < target) {
            i++;
        } else {
            result.push_back(i);
            result.push_back(j);
            break;
        }
    }

    return result;

}


int main() {

    vector<int> numbers;
    numbers.push_back(2);
    numbers.push_back(7);
    numbers.push_back(11);
    numbers.push_back(13);


   vector<int> a =  twoSum(numbers, 9);

   cout<< a.size() << endl;

   cout << a[0] << endl;
   cout << a[1] << endl;


    return 0;

}


