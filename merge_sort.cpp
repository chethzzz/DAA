#include <iostream>
#include<conio.h>
#include<ctime>
#include<cmath>

 int arr[100000];
  int count=0;

using namespace std;

class msort{

public : 
int n;

  int getdata();
void merge_sort(int *,int , int);
void merge(int *,int,int,int);

};

void msort :: merge_sort(int * arr, int low, int high) {
    int mid;

    
    if (low < high) {

        mid = (low + high) / 2;

        merge_sort(arr, low, mid);
        merge_sort(arr, mid + 1, high);

        merge(arr, low, mid, high);
    }
      
}

void msort :: merge(int * arr, int low, int mid, int high) {
    int i, j, k;
    int lengthLeft = mid - low + 1;
    int lengthRight = high - mid;


    int arrLeft[lengthLeft], arrRight[lengthRight];


    for (int a = 0; a < lengthLeft; a++) {
        arrLeft[a] = arr[low + a];
    }
    for (int a = 0; a < lengthRight; a++) {
        arrRight[a] = arr[mid + 1 + a];
    }


    i = 0;
    j = 0;
    k = low;
    
       while (i < lengthLeft && j < lengthRight) {

        count++;
        if (arrLeft[i] <= arrRight[j]) {
            arr[k] = arrLeft[i];
            i++;
        } else {
            arr[k] = arrRight[j];
            j++;
        }
         cout<<"the sorted array is "<<endl;
      cout<<"Number of times the basic operation is performed is "<<count<<endl;
        k++;
        
      

    }


    while (i < lengthLeft) {
        arr[k] = arrLeft[i];
        k++;
        i++;
    }


    while (j < lengthRight) {
        arr[k] = arrRight[j];
        k++;
        j++;
    }
}

int msort :: getdata()
{
    cout<<"\nEnter the length of the array:";
  cin>>n;
     cout<<"\nEnter the element  array:";
     srand(time(0));
  for(int i=0;i<n;i++)
   {
     arr[i]=rand()%10000;
   }
   
    return n;
}



int main() {

msort ob;
 int size=ob.getdata();
  ob.merge_sort(arr,0,size-1);
 getch();
   


}