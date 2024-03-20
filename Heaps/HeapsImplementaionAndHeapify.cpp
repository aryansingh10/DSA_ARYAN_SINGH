#include<iostream>
using namespace std;

class heap{
    public:
    int arr[100];
    int size=0;

    heap(){
        arr[0]=-1;
        size=0;
    }

    void insert(int val){

        //Insertion
        size=size+1;
        int index=size;
        arr[index]=val;
        //Check Conditon is satisfied or not
        while (index>1)
        {
            int parent=index/2;
            if (arr[parent]<arr[index]){   //For MIN-HEap the Condtion will be diffrent
                swap(arr[parent],arr[index]);
                index=parent;
            }else
            {
                return;
            }
            
            
        } 
    }
    void print(){
        for (int i = 1; i <=size ; i++)
        {
            cout<<arr[i]<<" ";
        }cout<<endl;
        
    }

    void deleteFromHeap(){
        if (size==0)
        {
            cout<<"NOthing to delete";
            return;
        }
        arr[1]=arr[size];//Put last element into first index
        size--; //Remove Last Element

        int i=1;

        while (i<size)
        {
            int leftIndex=2*i;
            int rightIndex=2*i+1;
            if (leftIndex<=size&& arr[i]<arr[leftIndex])
            {
                swap(arr[i],arr[leftIndex]);
                i=leftIndex;
            }else if (rightIndex<=size && arr[i]<arr[rightIndex])
            {
                swap(arr[i],arr[rightIndex]);
                i=rightIndex;
            }else
            {
                return;
            }       
        }   
    }
   
};
 void heapify(int arr[],int n,int i){
        int largest=i;
        int left=2*i;
        int right=2*i+1;

        if(left<=n && arr[largest]<arr[left]){
            largest=left;
        }
        
        if(right<=n && arr[largest]<arr[right]){
            largest=right;
        }
        if (largest!=i)
        {
            swap(arr[largest],arr[i]);
            heapify(arr,n,largest);
        }
        
    }

    void heapsort(int arr[],int n){
          int t=n;
          while (t>1)
          {
            swap(arr[t],arr[1]);
            t--;

            heapify(arr,t,1);
          }
          

    }
int main()
{
    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    // h.print();
    // h.deleteFromHeap();
    // h.deleteFromHeap();
    // cout<<"After Deletion"<<endl;
    // h.print();
    int arr[6]={-1,54,53,55,52,50};
    int n=5;
    for (int i = n/2; i>0; i--)
    {
        heapify(arr,n,i);
    }

    for (int i = 1; i <= n; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
    
        heapsort(arr,n);
     for (int i = 1; i <= n; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;


    return 0;
}