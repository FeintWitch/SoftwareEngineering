#include <stdio.h>

int main()
{
    int i = 0;

    puts("Start while loop");

    while (i < 6)
        //Orinigally 5 but switched to 6 
    {
        printf("i = %d\n", i);
        i++;        // same as i = i + 1 but more concise;
    }

    printf("Exiting with i=%d\n", i);
}

//Task 2. Setting the breakpoint shows the code is the looping around from 0 to 5, when it exists 
//Task 3. How many times does the loop repeat? : It repeats 5 times 
//Task 4. Final  value of i when the code exists : 5, While (i < 5) sets up that anything before 5 is printed as soon it hits 5 it exits since the line 'printf("Exiting with i=%d\n" , i' 
//Task 5. Change the initial value of the variable i to 6 and step through
    //what do you notice that is different> : Instead of existing the console wen it hits 5, now it does 6. So it counts 1-5 this time
//Task 6. Modify the code to count down from 10 to 0 of 2 

int main()
    {
        int i = -10;

        while (i >= 0)
        {
            printf("i =%d\n", it);
            i -= 2; 

        }

        printf("exiting with i=&d\n", i);
    })