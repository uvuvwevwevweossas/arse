#include <iostream>

using namespace std;

int main()
{
    int buf;
    int a[5];
    int br;
    for(int i=0;i<5;i++)
    {

        cin>>a[i];
    }
    cout<<endl;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(a[j]>a[j+1])
                {
                    buf=a[j];
                    a[j]=a[j+1];
                    a[j+1]=buf;
                }
        }
    }
    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<endl;
    }
    cout<<endl;
    for(int i=0; i<5; i++)
    {
        if(a[i]<0)
            {
                cout<<"The negatives are:"<<endl<<a[i]<<endl;
            }

    }
}
