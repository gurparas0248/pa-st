#include <bits/stdc++.h>
using namespace std;

int main()
{
    // taking the first input , the length of array
    int length;
    cin>>length;
    int arr[length];
    
    
    // taking the second input , the input of array
    for(int i=0;i<length;i++){
        cin>>arr[i];
    }
    
    
    // sorting the array to make finding the non-repeated number less time consuming
    sort(arr,arr+length);
    
    for(int i=length-1;i>=0;i--){
        
        // comparing the elements of array to check that they are not repeating
        if(arr[i-1]!=arr[i] && arr[i]!=arr[i+1]){
            
            // printing the output
            cout<<arr[i]<<" ";
        }
    }

    return 0;
}
