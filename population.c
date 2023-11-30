#include <stdio.h>
#include <cs50.h>

/*
   challenge: determine how long it 
   takes for a population to reach 
   a particular size.
*/

//  population births per year: initialSize / 3
//  population deaths per year: initialSize / 4
//  rate of population growth per year: initialSize + births - deaths


int main(void) {
    
    int startSize;
    int endSize;
    int years;

    // get positive integer from user
    do {
        startSize = get_int("Start Size: ");
        endSize = get_int("End Size: ");
    } 
    while( startSize < 9 || endSize < 9);

    /*
        calculates how many years it will take to reach
        the end size of the population
    */

    for ( years = 0; startSize < endSize; years++)
    {    
        int growth = startSize / 3;
        
        int deaths = startSize / 4;

        startSize = startSize + growth - deaths;
    }

    printf("Years: %i\n", years);

}
