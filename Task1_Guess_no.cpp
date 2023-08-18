                                         //                    #Task 1
                                        /*    Create a program that generates a random number and asks the
                                            user to guess it. Provide feedback on whether the guess is too
                                            high or too low until the user guesses the correct number.        */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cout<<"\t\t   *****************GUESS THE NUMBER*****************\n\n";
    cout<<"\tWe have a Selected a Random number between 1-10. See if you can guess it.\n";

    //For generating the random value start seeding the random number
     srand(time(0));
    //intializing a random number
    int random = rand()%10+1;
    //cout<<random;
    do
    {
        cout<<"\tEnter Your Guess : ";
        cin>>num;
        if(num>random)
        {
            cout<<"\tOOPSS!! SORRY TRY A SMALLER NUMBER \n";
        }
        if(num<random){

            cout<<"\tOOPSS!! SORRY TRY A LARGER NUMBER \n";
        }
    }while(num!=random);

    if(num==random)
    {
        cout<<"\n\tCORRECT!!  YOU GUESS THE RIGHT NUMBER";
    }
    return 0;
}
