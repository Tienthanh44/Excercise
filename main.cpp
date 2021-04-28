#include <iostream>

using namespace std;

int main()
{
    cout<<"Nhap n: ";
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++){
        cout<<"Nhap phan tu thu"<<" "<<i+1<<" : ";
        cin>>a[i];
    }
    cout<<"Day so vua nhap la :";
    for (int i=0;i<n;i++){
        cout<<" "<<a[i];
    }
    int x=a[0];
    for (int i=0;i<n;i++){
        if (x>=a[i]){
            x=a[i];
        }
    }
    cout<<"\n So nho nhat la :"<<x;
    int y=a[0];
    for(int i=0;i<n;i++){
        if(y<=a[i]){
            y=a[i];
        }
    }
    cout<<"\n So lon nhat la :"<<y;
    int flag;
    for (int i=0;i<n-1;i++){
        for (int j=i+1;j<n;j++){
            if (a[i]<a[j]){
                flag=a[i];
                a[i]=a[j];
                a[j]=flag;
            }
        }
    }
    cout<<"\n Day sap xep la :";
    for (int i=0;i<n;i++){
        cout<<" "<<a[i];
    }
}
