#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter Array Size: ";
    cin>>n;

    int roll_list[n];

    for (int i = 0; i < n; i++)
    {
        cin>>roll_list[i];
    }
    
//    roll_list = 41, 8, 45, 21, 34, 4, 13, 15

    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(roll_list[i] > roll_list[j]){
                int temp = roll_list[j];
                roll_list[j] = roll_list[i];
                roll_list[i] = temp;
            }
        }
        
    }
    
    cout<<"After shorting this array: ";
    for (int i = 0; i < n; i++)
    {
        cout<<roll_list[i]<<" ";
    }
    

    return 0;
}