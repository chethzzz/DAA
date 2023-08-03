#include<iostream>
#include<conio.h>
#include<ctime>
#include<cmath>

int arr[10000];
int count=0;

using namespace std;


class quick{

    public:
	 int i,j,temp,n;
	  int getdata();
	void quick_sort(int [], int,int);
   


int partition(int arr[], int low, int high, int pivot){
	 i = low;
	 j = low;
	while( i <= high){

		count++;
		if(arr[i] > pivot){
			i++;
		}
		else{
			swap(arr,i,j);
			i++;
			j++;
		}
		cout<<"the sorted array is "<<endl;
      cout<<"Number of times the basic operation is performed is "<<count<<endl;
     
	}
	return j-1;
}


void swap(int arr[] , int pos1, int pos2){
	temp = arr[pos1];
	arr[pos1] = arr[pos2];
	arr[pos2] = temp;
}


};

int quick :: getdata()
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


void quick :: quick_sort(int arr[], int low, int high){
	if(low < high){
	int pivot = arr[high];
	int pos = partition(arr, low, high, pivot);
	
	quick_sort(arr, low, pos-1);
	quick_sort(arr, pos+1, high);
	}
	
}


int main()
{
	quick ob;

 int size= ob.getdata();
 ob.quick_sort(arr,0,size-1);
 getch();
	
	
}