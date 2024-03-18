// #include<iostream>
// using namespace std;
// vector<double> convertTemprature(double celsius){
//     double k=celsius+273.15;
//     double f=celsius*1.80+32.00;

//     vector<double>v;
//     v.push_back(k);
//     v.push_back(f);
//     return v;
// }
// int main(){
//     double celsius;
//     cin>>celsius;
//     double ans=convertTemprature(double celsius){
//     cout<<ans<<endl;
//     }
// }
#include <iostream>
using namespace std;
  // Leetcode Convert The Temprature-2469; 
int main() {
    float fahren, celsius;
  
    cout << "Enter the temperature in fahrenheit\n";
    cin >> fahren;
     
    celsius = 5 * (fahren - 32) / 9;
    cout << fahren <<" Fahrenheit is equal to "
        << celsius <<" Centigrade";
      
    return 0;
}