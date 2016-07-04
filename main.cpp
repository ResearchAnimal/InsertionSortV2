//
//  main.cpp
//  InsertionSortv2
//
//  Created by Paul Sanderson on 04/07/2016.
//  Copyright © 2016 Paul Sanderson. All rights reserved.
//

#include <iostream> //cout,cin etc
#include <cstdlib> // rand etc
using namespace std; // unsure


int main() { //every programe has a main function
    int m, hold;
    m = 10; // change this value to edit the arry size
    
    int i, list[m], j;//declaring integer and array in memory
    
    for(i=0; i<m; i++) //for loop start at 0 and goes to 9 because of way array is indexed
    {
        list[i] = rand() % m; // assign random value between 1 and 10 % constains rand
        
        cout  << list[i] << " "; //display the numbers on seperate lines.
    }//end for
    
    // This is the start of the Insertion Sort
    
    for (i=0; i<m; i++)
    {
        j = i;
        
        
        
        while (j > 0 && list[j] < list[j-1]) // this is the swap loop
        {
            hold = list[j];
            
            list[j] = list[j-1];
            
            list[j - 1] = hold;
            j--;
            
        } // end while
        
    }//end for and insertion sort
    
    cout << '\n'; // new line
    for (j=0; j<m; j++) {
        cout << list[j] << " "; // displays sorted array
    }
    
    
    return 0;
}