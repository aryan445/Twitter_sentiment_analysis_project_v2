//program o find the second largest no and smallest no in array
#include<iostream>
using namespace std;

int main(){
  
 int arr[10]={1,2,3,4,5,6,7,8,9,11};

 for(int i=0;i<10;i++){
    
    if(arr[i]>arr[i+1]){
        int temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
 }

}