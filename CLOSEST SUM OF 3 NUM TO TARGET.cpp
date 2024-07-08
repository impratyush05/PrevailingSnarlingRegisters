/*Given an integer array nums of length n and an integer target, find three integers in nums such that the sum is closest to target*/

#include <iostream>
using namespace std;

int closestsum(int arr[],int n,int target){
  int arr1[100];
  int arr2[100];
  int size=0;
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      for(int k=j+1;k<n;k++){
        int sum=arr[i]+arr[j]+arr[k];
        int diff=target-sum;
        if(diff<0){
          diff=diff*(-1);
        }
        arr1[size]=sum;
        arr2[size]=diff;
        size++;
      }
    }
  }
  int min=arr2[0];
  int y=0;
  for(int i=0;i<size;i++){
    if(arr2[i]<min){
      min=arr2[i];
    }
  }
  for(int i=0;i<size;i++){
    if(arr2[i]==min){
      y=i;
    }
  }
  return arr1[y];
}

/*int main(){
  int arr[100];
  int n;
  cout<<"ENTER THE SIZE OF ARRAY"<<endl;
  cin>>n;
  int t;
  cout<<"ENTER THE TARGET"<<endl;
  cin>>t;
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  cout<<"THE CLOSEST SUM IS: "<<closestsum(arr,n,t);
}*/