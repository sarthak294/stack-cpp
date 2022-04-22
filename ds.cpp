#include<iostream>
using namespace std;
int pos=-1;
class Stack
{
    int arr[5];
    public:
    void Insert()
    {
        int value;
        cout<<"Enter Value:";
        cin>>value;
        if(pos<5)
        {
            pos++;
            arr[pos]=value;
            cout<<"Value Inserted"<<endl;
        }
        else{
            cout<<"Array full";
        }
    }
    void Display()
    {
        if(pos>=0)
        {
            cout<<"Array is:";
            for(int i=0;i<=pos;i++)
            {
                cout<<arr[i]<<" ";
            }
        }
        else
        {
            cout<<"Array is empty"<<endl;
        }
    }
    void Delete()
    {
        if(pos>=0)
        {
            pos--;
        }
        else
        {
            cout<<"NO Element";
        }
    }
    void Search()
    {
        int value,found=0;
        cout<<"Enter number to be searched:";
        cin>>value;
        for(int i=0;i<=pos;i++)
        {
            if(arr[i]==value)
        {
            found=1;
            break;
        }
        }
        if(found==1)
        {
            cout<<"Element found at "<<pos<<endl;
        }
        else{
            cout<<"Element not found"<<endl;
        }
    }
};
int main()
{
    int n;
    for(int i=0;i<7;i++)
    {
    cout<<"\nEnter the follow:"<<endl;
    cout<<" 1.Insert"<<endl;
    cout<<" 2.Display"<<endl;
    cout<<" 3.Delete"<<endl;
    cout<<" 4.Search"<<endl;
    cout<<" 5.Exit"<<endl;
    cout<<"Enter Choice:";
    cin>>n;
    Stack st;
    if(n==1)
    {
        st.Insert();
    }
    else if(n==2)
    {
        st.Display();
    }
    else if(n==3)
    {
        st.Delete();
    }
    else if(n==4)
    {
        st.Search();
    }
    else if(n==5)
    {
        cout<<".....Code Exited.....";
        break;
    }
    else{
        cout<<"Invalid input";
    }
    }
}
