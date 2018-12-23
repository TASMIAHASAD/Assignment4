#include "BubbleSort.h"
#include "SelectionSort.h"
#include "InsertionSort.h"
#include "MergeSort.h"
#include <iostream>
using namespace std;

int main()
{

    int arr[]={10,33,27,14,35,19,48,44};
    int length= sizeof(arr)/sizeof(arr[0]);
    BubbleSort  B;
    B.BubbleSorter(arr,length);
    cout<<endl<<endl;

    SelectionSort S;
    S.SelectionSorter(arr,length);
   cout<<endl<<endl;

    InsertionSort I;
    I.InsertionSorter(arr,length);
    cout<<endl<<endl;

    MergeSort M;
    M.MergeSorter(arr,length);
    cout<<endl<<endl;

}
