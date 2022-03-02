//
//  main.cpp
//  Try it Out: Stacks and Queues 7.2
//
//  Created by Coleton Watt on 3/1/22.
//

#include <iostream>
#include "Person.h"
#include "LinkedList.h"

using namespace std;
int main() {
  //List 1
  LinkedList<int> one;
  one.insert(1);
 
  //List 2
  LinkedList<int> two = one;
  two.insert(42);
 
  //Operator Equals Test
  two = one;
  two.insert(60);
 
  //Display both Lists
  cout << one << endl;
  cout << two << endl;
 
}
/*

int main() {
     Person bt("Bart", 10);
     Person hm("Homer", 42);
     Person mg("Marge", 42);

     //Comparing using >
     if (hm > bt) {
       cout << "Older: " << hm << endl;
       cout << "Younger: " << bt << endl;
     }
     //Comparing using ==
     if(hm == mg){
       cout << "Same Age: " << endl;
       cout << hm << endl;
       cout << mg << endl;
     }
    if(bt <= mg){
      cout << "Age: " << endl;
      cout << bt << endl;
      cout << mg << endl;
    }
    if(hm >= mg){
      cout << "Age: " << endl;
      cout << hm << endl;
      cout << mg << endl;
    }
    if(bt < mg){
      cout << "Age: " << endl;
      cout << bt << endl;
      cout << mg << endl;
    }
    if(bt != mg){
        cout << "Age: " << endl;
        cout << bt << endl;
        cout << mg << endl;
    }
    if (bt < 21) {
        cout << bt << " too young for Moes" << endl;
    }
    if (bt <= 21) {
        cout << bt << " still too young for Moes" << endl;
    }
    if (bt == 10) {
        cout << bt << " he is 10" << endl;
    }
    if (bt != 21) {
        cout << bt << " he is not 21" << endl;
    }
    if (bt >= 10) {
        cout << bt << " older then or eqaul to 10" << endl;
    }
    if (bt > 8) {
        cout << bt << " older then 8" << endl;
    }



    
}
*/
