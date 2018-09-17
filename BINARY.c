#include<stdio.h>
int main()
{   int n;
    int item;
    int LOC;
    int i;
     printf("Enter number of element in array ");
     scanf("%d",&n);
     int data[n];
     int m=n-1;
     printf("Enter the elements ");
     for(i=0;i<=m;i++)
     {
         scanf("%d",&data[i]);
     }
     printf("Enter Item to search ");
     scanf("%d",&item);

  int BEG=0;
  int END=m;
  int mid=((BEG+END)/2);
  while(BEG<=END && data[mid] != item)
  {
      if (item<data[mid])
      {
          END=mid-1;
      }
      else {BEG=mid+1;}
     mid=((BEG+END)/2);
  }
  if(data[mid]=item)
  {
      LOC=mid;
      printf("position of the item %d",LOC);
  }
  else{ printf("The data is not found");}



}
