#include<iostream>
#include<conio.h>
#include<ctime>
#include<cmath>

using namespace std;

class bsort{

    public : 
    int n,a[100000],i,j,temp;
     void getdata();
     void bubble_sort();

};

void swap(int &a, int &b) {
   int temp;
   temp = a;
   a = b;
   b = temp;
}

 void bsort :: getdata()
{
    cout<<"\nEnter the length of the array:";
  cin>>n;
     cout<<"\nEnter the element  array:";
     srand(time(0));
  for(int i=0;i<n;i++)
   {
     a[i]=rand()%10000;
   }
}

void bsort :: bubble_sort(){
    int count=0;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++)
        {
            count++;
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
     }
       cout<<"the sorted array is "<<endl;
      cout<<"Number of times the basic operation is performed is "<<count<<endl;
      for(i=0;i<n;i++)
      {
          cout<<a[i]<<endl;
      }
    }

int main(){
   bsort ob;
 ob.getdata();
 ob.bubble_sort();
 getch();

}