#include <iostream>
#include <string>
using namespace std;
//by leinad-17
//naruto17hh@gmail.com

int main(){
    string week_days[8] = {
    "Fake",
    "Monday",
    "Tuesday",
    "Wednesday",
    "Thursday",
    "Friday", 
    "Saturday", 
    "Sunday"};
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    if(n>=0 && n<=7)
        cout<<"The days is "<<week_days[n];
    else
        cout<<"Invalide input";
    
    return 0;
}
