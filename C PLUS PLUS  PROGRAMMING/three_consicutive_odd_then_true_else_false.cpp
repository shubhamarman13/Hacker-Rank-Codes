#include<iostream>
using namespace std;
int count =0;
int main()
{
    int arr[7];
    cout<<"Enter all the elements"<<endl;
    for (int i = 0; i < 7; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < 7; i++)
    {
        if (arr[i]%2!=0  )
        {
            count++;
        }
        else
        {
            count=0;
        }
          if (count== 3)
        {
            cout<<"True"<<endl;
            break;
        }
        if (i==6 && count!=3)

        {
            cout<<"false "<<endl;
        }
        
        
        
    }
  
    
}