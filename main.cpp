#include <iostream>
using namespace std;
int main() {
    string name = "Sean Francis";
   cout << name ;
    
    
    
   int arr [4] = {1, 8, 8, 9};
    
    for (int i = 3; i >= 0; i--){
      cout << arr [i]<< " ";
    }
    
    int score;
    
   cout << "ENTER YOUR SCORE: ";
     cin >> score;
    if (score >= 95){
        cout << "EXCELLENT";
   else if (score >= 85){
        cout << "GOOD";}
  else if (score >= 60){
        cout << "Kapyot pa lods";}
    else {
        cout << " bawi next life lods";}
    
int day = 1;

switch (day){
   case 1: 
  cout << "\nMonday";
    case 2: 
    cout << "\nTuesday";
    case 3: 
   cout << "\nWednesday";
    case 4:
    cout << "\nThursday";
    case 5:
    cout << "\nFriday";
    case 6:
    cout << "\nSaturday";
    case 7:
    cout << "\nSunday";}
    
    
    
    
   char sample []= "Sean Francis";
    char *ptr = sample;
    cout << ptr;
    
    int a = 10;
    int *ptr = &a;
    cout << "value of a: "<< a<< endl;
    cout << "address of a: "<<ptr << endl;
    cout << "Value using Pointer: " <<*ptr<< endl;
    
    } 


    return 0;
}