#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int>arr={0, 1, 1, 1, 2, 2, 3};
    int i=0;
    for(int j=1; j<arr.size(); j++){
        if(arr[i]<arr[j]){
            int temp = arr[i+1];
            arr[i+1] = arr[j];
            arr[j] = temp;
            i++;
        }
    }
    for(int k=0; k<arr.size(); k++){
        cout<<arr[k]<<" ";
    }
    cout<<endl;
    cout<<(i+1)<<endl;
    return 0;
}
