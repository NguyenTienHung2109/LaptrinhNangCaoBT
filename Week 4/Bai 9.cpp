#include<bits/stdc++.h>
using namespace std;
void sortAscending(float a[], int size)
{
    int i, j;
    float last;
    for (i=1; i < size; i++)
    {
        last = a[i];
        j = i;
        while ((j > 0) && (a[j-1] > last))
        {
            a[j] = a[j-1];
            j = j - 1;
        }
        a[j] = last;
    }
}
void reverseArray(float array[], int size)
{
    for(int i = 0;i <size/2;i++)
    {
        swap(array[i],array[size - i -1]);
    }
}
void sort(float array[], int size, bool isAscending)
{
        sortAscending(array, size);
    if(isAscending == false)
    {
        reverseArray(array, size);
    }
}
