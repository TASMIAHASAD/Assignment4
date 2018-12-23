#include <iostream>
#include <cmath>
#include <vector>

using namespace std;


//template <class T>
vector<int> insertSort(vector<int> array){
    unsigned int i, j;
    vector<int> sortedArray;
    int max;

    for(i = 0; i<array.size();i++){
        max = array[i];

        for(j = i; j<array.size();j++){
           max = array[j] > max ? array[j]:max;

        }

        sortedArray[i] = max;
    }

    return sortedArray;
}


int main() {

   srand(time(NULL));
   int element;
   unsigned int i;
   vector<int> nums;

   for(i = 0; i < 10; i++){

       element = rand()%10 + 1;
       nums.push_back(element);
   }



   cout<<"The array before sorting: ";

   for(i = 0; i<nums.size(); i++){
       cout << nums[i] << " ";
   }


   vector<int> sortedNums = insertSort(nums);

   cout<<"The array after sorting: ";

   for(i = 0; i<sortedNums.size(); i++){
       cout <<  sortedNums[i];
   }

   return 0;
}
