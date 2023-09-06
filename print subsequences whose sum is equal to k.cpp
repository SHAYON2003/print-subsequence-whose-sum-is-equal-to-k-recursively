#include <iostream>
#include <vector>
using namespace std;

void subsequence(int ind, int arr[],int sum,int s, vector<int> &ds, int n){
    
   if(ind == n){
       if(s ==sum){
         for(auto it: ds) cout<<it<<" ";
         cout<<endl;
       }
   return;
   }
  ds.push_back(arr[ind]);
   s+=arr[ind];
   subsequence(ind+1,arr, sum, s, ds, n);
   s-=arr[ind];
  ds.pop_back();
   subsequence(ind+1,arr,sum,s,ds,n);
   }

int main() {
  int arr[] = {1,2,1};
  int n = 3;
  int sum = 2;
vector<int> ds;
  subsequence(0,arr,sum,0,ds,n);
  return 0;
}