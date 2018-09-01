/*
Name: Payton Erickson
Student ID: 0545468
Date: June 24, 2018
Assignment #: Assignment8
Assignment Description: coin flip game with money using loops
 */
#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    srand((unsigned int)time(0));
    char play;
    int money = 10;
    
    cout<<"Welcome to the coin flip game. It cost a dollar ($1) to play."<<endl;
    cout<<"If you guess correctly you win two dollars ($2)."<<endl;
    cout<<"Would you like to play? (y/n)"<<endl;
    cin>>play;
    while (play == 'y' || play == 'Y')
    {
        if (money > 0)
        {
            int r = (rand() % 2);

            char correct;
            if (r == 0)
            {
                correct = 'h';
            }
            else
            {
                correct = 't';
            }
            
            cout<<"Your bank is $"<<money<<endl;
            money--;
            cout<<"Guess heads or tails (h/t)"<<endl;
            char guess;
            cin>>guess;

            if (guess != correct)
            {
                if (correct == 'h')
                {
                    cout<<"Sorry you lose, the coin came up heads"<<endl;
                }
                else
                {
                    cout<<"Sorry you lose, the coin came up tails"<<endl;
                }
            }
            else if (guess == correct)
            {
                if (correct == 'h')
                {
                    cout<<"Winner, the coin came up heads"<<endl;
                    money = money +2;
                }
                else
                {
                    cout<<"Winner, the coin came up tails"<<endl;
                    money = money +2;
                }
            }
        }
        else
        {
            cout<<"You don't have enough money"<<endl;
        }
        
        cout<<"Would you like to play again? (y/n)"<<endl;
        cin>>play;
    }
    cout<<"Thanks for playing."<<"Your bank is "<<money<<"$"<<endl;
    cout<<"Please come again!"<<endl;
    return 0;
}

