#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the array Size: ";
    cin>>n;

    int s_list[n];
    for (int  i = 0; i < n; i++)
    {
        cin>>s_list[i];
    }
    
    int counter=1;
    while (counter<n  )
    {
        for (int i = 0; i < counter-1; i++)
        {
            if (s_list[i]>s_list[i+1])
            {
                int temp = s_list[i];
                s_list[i] = s_list[i+1];
                s_list[i+1] = temp;
            }
            
        }
        counter++;
    }

    for (int i = 0; i < n; i++)
    {
        cout<<s_list[i]<<" ";
    }
    
    
    return 0;
}