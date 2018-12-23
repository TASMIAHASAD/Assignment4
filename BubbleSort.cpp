//BubbleSort.cpp
#include<iostream>
#include "BubbleSort.h"
using namespace std;

BubbleSort::BubbleSort()
{

}

BubbleSort::~BubbleSort()
{

}

void BubbleSort:: BubbleSorter(int *array, int n) {
  bool swapped = true;
  int j = 0;
  int temp;
  while (swapped) {
    swapped = false;
    j++;
    for (int i = 0; i < n - j; ++i) {
      if (array[i] > array[i + 1]) {
        temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
        swapped = true;
      }
    }
    for(int k=0;k<n;k++) cout<<array[k]<<" ";
    cout<<endl;
  }

}
