#include<iostream>
using namespace std;
int main()
{
    int i,beg=0,end=4,key,mid;
    bool f=false;
    cout<<"enter your array:"<<endl;
    int arr[5];
    for(int i=0; i<5; i=i+1)
    {
        cin>>arr[i];
    }
    cout<<"enter item  to find:"<<endl;
    cin>>key;

    while(beg<=end)
    {
        mid=(beg+end)/2;
        if(arr[mid]==key)
        {
            f=true;
            break;
        }
        else if(key<arr[mid])
        {
            end=mid-1;
        }
        else if(key>arr[mid])
        {
            beg=mid+1;
        }

    }
    if(f==true)
    {
        cout<<"item found at:"<<mid<<endl;
    }
    else
    {
        cout<<"not found"<<endl;
    }


}