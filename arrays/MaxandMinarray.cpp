#include <iostream>
#include <climits>
using namespace std;


int getMax(int arr[],int size){
    int max=INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];
        }
        //We can also use predifined function max(max,a[i]) and for min also
    }
    return max;
}

int getMin(int arr[],int size){
    int min=INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i]<min)
        {
            min=arr[i];
        }
        
        
    }
    return min;
}

int main(){
 int size;
 cout<<"size?"<<endl;
 cin>>size;

int num[100];
for (int i = 0; i < size; i++)
{
    cin>>num[i];
}

cout<<"The max num is :"<<getMax(num,size);
cout<<"The min num is :"<<getMin(num,size);


    return 0;
}