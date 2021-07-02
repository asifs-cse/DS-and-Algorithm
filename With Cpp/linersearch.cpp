#include<iostream>
using namespace std;

int linerSearch(int s_list[], int n, int key){
    for (int i = 0; i < n; i++)
    {
        if (s_list[i]==key)
        {
            return i;
        }
        
    }
    
    return -1;
}

int main(){
    int n;
    cout<<"Enter student Number: ";
    cin>>n;
    int s_list[n];

    for (int i = 0; i < n; i++)
    {
        cin>>s_list[i];
    }
    
    int key;
    cin>>key;

    cout<<linerSearch(s_list, n, key)<<endl;

    return 0;
}
