#ifndef DataGen_h
#define DataGen_h

#include "RandomSupport.h"

void insertion_sort(long list[], long size){
    long n = size;
    for (long i = 1; i < n; i++) {
        long j = i;
        while (j > 0 && list[j-1] > list[j]){
            long temp = list[j];
            list[j] = list[j-1];
            list[j-1] = temp;
            j = j - 1;
        }
    }
}

void qsort(long* arr, long left, long right) {
    long i = left, j = right;
    long tmp;
    long pivot = arr[(left + right) / 2];

    while (i <= j) {
        while (arr[i] < pivot)
            i++;
        while (arr[j] > pivot)
            j--;
        if (i <= j) {
            tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
            i++;
            j--;
        }
    }
    if (left < j)
        qsort(arr, left, j);
    if (i < right)
        qsort(arr, i, right);
}

void efficientRandomSortedList(long temp[], long s){
    // Get a new random device
    randomizer device = new_randomizer();
    // Get a uniform distribution from 1 to 1000
    uniform_distribution range = new_distribution(1, 1);

    for (long i = 0; i < s; i++) {
        // At every cell of the array, insert a randomly selected number
        // from distribution defined above
        temp[i] = sample(range, device);
        //insertion_sort(temp, i);

    }

    // Now sort the array using insertion_sort
  insertion_sort(temp, s); /*<-------*/
    //qsort(temp, 0, s);
}


#endif /* DataGen_h */
