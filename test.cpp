#include <iostream>
#include<vector>
#include <numeric>  
#include <algorithm>
using namespace std;

int main() {
  

    
    vector<double> userInput(5);
    
    //user input
    for (vector<double>::size_type i = 0; i < 5; i++)
    {
        cout << "Enter weight " << i + 1 << ":" << flush << "\n";
        cin >> userInput[i];
       ;
        }
    cout << "You Entered: " ; 
    
    for (vector<double>::size_type i = 0; i < 5; i++)
    {
        cout << userInput[i] << " " ;
       
    }
    cout << "\n";
    // sum
    double sum = accumulate(userInput.begin(), userInput.end(), 0.0);
    cout << "Total weight: " << sum  << "\n";
    cout << "Average weight: " << sum / 5 << "\n";
    cout << "Max weight: " << *max_element(userInput.begin(), userInput.end()) << "\n";
        return 0;

}


