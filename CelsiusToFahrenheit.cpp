#include <iostream>
using namespace std;

int main(){

    float celsius;
    float fahrenheit;
    cout<<"Enter the Celsius temperature"<<endl;
    cin>>celsius;
    fahrenheit = (celsius + 32) * 5 / 9;
    cout<<"celsius to fahrenheit is: "<<fahrenheit<<endl;


    return 0;
}