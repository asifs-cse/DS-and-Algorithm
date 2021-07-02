#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    
    cout<<"Enter size of arrar: ";
    cin>>n;

    int n_array[n];
    for (int i = 0; i < n; i++)
    {
        cin>>n_array[i];
    }
    
    int MaxNo = INT_MIN;
    int MinNo = INT_MAX;

    for (size_t i = 0; i < n; i++)
    {
        // if (n_array[i]>MaxNo)
        // {
        //     MaxNo=n_array[i];
        // }
        // else if(n_array[i]<MinNo){
        //     MinNo=n_array[i];
        // }
        MaxNo = max(MaxNo, n_array[i] );
        MinNo = min(MinNo, n_array[i]);
        
    }
     cout<<MaxNo<<" "<<MinNo;
    

    return 0;
}