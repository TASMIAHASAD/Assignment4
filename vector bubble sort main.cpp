#include <iostream>
#include <vector>

using namespace std;

void bubbleSort(vector<int> a);

void printVector(vector<int> a);

int main(int argc, char const *argv[])
{

    vector<int> a{14,33,27,10,35,19,48,44};
    printVector(a);

    bubbleSort(a);
    printVector(a);
}

void bubbleSort(vector<int> a)
{
    bool swapp = true;
    while(swapp)
    {
        swapp = false;
        for (int i = 0; i < a.size()-1; i++)
        {
            if (a[i]>a[i+1] )
            {
                a[i] += a[i+1];
                a[i+1] = a[i] - a[i+1];
                a[i] -=a[i+1];
                swapp = true;
            }
        }
    }
}
void printVector(vector<int> a)
{
    for (int i=0;  i <a.size();  i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
