#include <iostream>
#include <vector>
using namespace std;

void bubblesort(vector<int>& arr)
{
    bool swapped;
    int n=arr.size();
    for(int i=0;i< n-1;i++)
    {   
        swapped= false;
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
        }
        if(!swapped){
        break;
    }
        
    }
    
}

int main()
{
    vector<int> arr= {5,1,4,2,0};
    bubblesort(arr);
    cout<<"sorted array";
    for(int x:arr)
    {
        cout<<x<<" ";
    }

}
