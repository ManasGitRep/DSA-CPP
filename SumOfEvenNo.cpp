#include <iostream>
using namespace std;

int main(){

    int n,i,sum=0;
    cout<<"enter the upper limit"<<endl;
    cin>>n;
    for (int i = 2; i <= n; i=i+2)
    {
        sum = sum +i;
    }
    cout<<"Sum of all even no. till "<<n<<" is "<<sum<<endl;
    

    return 0 ;
}