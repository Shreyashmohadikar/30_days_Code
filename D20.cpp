#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin>>N;
    int arr[N], i, j;
    for (int i=0; i<N; i++){
        cin>>arr[i];
    }
    //bubble sort
    int numberOfSwaps = 0;
    for(int i=0; i<N; i++){
        for (int j=0; j<N-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                numberOfSwaps++;
            }
        }
        if (numberOfSwaps == 0) {
        break;
        }
    }
    // for(int i=0; i<N; i++){
    //     cout<<arr[i]<<" ";
    // }
    cout<<"Array is sorted in "<<numberOfSwaps<<" swaps."<<endl;
    cout<<"First Element:"<<arr[0]<<endl;
    cout<<"Last Element:"<<arr[N-1]<<endl;
    return 0;
}