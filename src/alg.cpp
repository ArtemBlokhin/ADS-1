// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
 int l = 0;
 int r = size - 1;
 int counter = 0;
 while(l<r) {
  int mid = l + (r-l) / 2;
  if (arr[mid] > value){
   r = mid;
  }
  else if (arr[mid] < value){
   l = mid + 1;
  }
 }	
 if (arr[l] == value){
  while (arr[l] == value){
   counter++;
   l++;
  }
 }
 if(counter){
  return counter;
 }
 else{
  return 0;
 }
}
