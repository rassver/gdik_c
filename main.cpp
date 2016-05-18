#include "beta.h"


int main()
{
    int m;
    cout<<"Enter number of objects: ";
    cin>>m;
    beta *obj1=new beta[m];
    cout<<"Enter number of objects: ";
    int n;
    cin>>n;
    beta *obj2=new beta[n];
    delete [] obj1;
    delete [] obj3;
    return 0;
}
