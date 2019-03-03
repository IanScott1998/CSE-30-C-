#ifndef BinSearch_h
#define BinSearch_h
//binSearch(numbers, size, size-1)
long binSearch(long* list, long n, long val){
    // Provide your code here
    long s = 0;
    long mid = n/2;
    while(s <= n){
      if(list[mid] == val){
        return mid;
      }
      else if(list[mid] < val){
        s=mid+1;
      }
      else{
        n=mid-1;
      }
      mid = (s+n)/2;
    }
    return -1;
}

#endif
