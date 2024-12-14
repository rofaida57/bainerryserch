#include <iostream>
using namespace std;
int bs(int tar,int low,int hay){
    int mid=low+(low-hay)/2;
    if(low>hay){
        return false;
    }
    else if(mid=tar){

        return mid;
    }
    else if(mid<tar){
    return bs(tar,mid+1,hay);
    }
    else if(mid>tar){
    return bs(tar,low,mid-1);
    }
}
int main(){
    int t,l,h,i,x;
    int a[20];
    cout<<"give me target:";
    cin>>t;
    cout<<"low=";
    cin>>l;
    cout<<"hay =";
    cin>>h;
    for(i=0;i<20;i++){
        a[i]=std::rand()%1000;
    }
    cout<<"x=";
    cin>>x;
    x=bs(t,0,19);
    if (x == -1){
        cout<<"not exsest";
    }
    else{
        cout<<"exsest";
    }
    return 0;
}