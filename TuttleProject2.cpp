/* Anastasia Tuttle
atuttle@my.athens.edu
ID 00100351
Project 2 */
#include <iostream>
#include <time.h>
#include <cstdlib>
#include <fstream>
using namespace std;
int main ()
{
    ifstream inputFile;
    float amount, bet, totalMoney;
    char stayHit;
    char choice;
    string history;
    char randomNumber[13] = {2, 3, 4, 5, 6, 7, 8, 9, 'T', 'J', 'Q', 'K', 'A'};
    int cardValue[13] = {11, 2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10, 10};


    int playerCard1, playerCard2, playerCard3, playerTotalHand;
    int dealerCard1, dealerCard2, dealerCard3, dealerTotalHand;


    cout<<"WELCOME TO THE ATSU CASINO "<<endl;
    cout<<"************************** "<<endl<<endl<<endl;
    cout<<"Welcome to the table. "<<endl;
    cout<<"Please enter the amount you would like to exchange for chips: ";
    cin>>amount;
    if (amount < 0)
    {
        cout<<"Invalid input! "<<endl;
        cout<<"Please enter the amount you would like to exchange for chips: ";
        cin>>amount;
    }
    else
        cout<<"****************************** "<<endl<<endl;
        do
        {
            cout<<"1. Play Blackjack "<<endl;
            cout<<"2. Game Play History "<<endl;
            cout<<"3. Quit Playing "<<endl;
            cout<<"Please enter a choice from the menu (1-3): ";
            cin>>choice;

            if (choice < 1 || choice > 3)
            {
                cout<<"Invalid input! "<<endl;
                cout<<"Please enter a choice from the menu (1-3): ";
                cin>>choice;
            }

            switch (choice)
            {
                case '1': //play the game
                break;
                case '2': //game history
                break;
                case '3': //quit game
                break;
                default: false;
            }

            if (choice == '1')
            {
                cout<<"Minimum bets are $10.00 and maximum are $150.00."<<endl;
                cout<<"Please enter your bet: ";
                cin>>bet;

                if (bet < 10.00 || bet > 150.00)
                {
                    cout<<"Invalid input!"<<endl;
                    cout<<"Minimum bets are $10.00 and maximum are $150.00."<<endl;
                    cout<<"Please enter your bet: ";
                    cin>>bet;
                }
                srand(time(NULL));
                playerCard1 = rand()%13+1;
                cout<<"Player 1st card: "<<playerCard1<<endl;
                srand(time(NULL));
                playerCard2 = rand()%13+1;
                cout<<"Player 2nd card: "<<playerCard2<<endl;
                playerTotalHand = playerCard1 + playerCard2;
                cout<<"The player total hand is: "<<playerTotalHand<<endl<<endl;
                srand(time(NULL));
                dealerCard1 = rand()%13+1;
                (time(NULL));
                dealerCard2 = rand()%13+1;
                cout<<"The dealers 2nd card is: "<<dealerCard2<<endl<<endl;
                cout<<"Do you choose to stay or hit. Please enter 's' for stay or 'h' for hit: ";
                cin>>stayHit;

                switch (stayHit)
                {
                case 's':
                break;
                case 'h':
                break;
                default: false;
                }
                if (stayHit == 'h')
                {
                    srand(time(NULL));
                    playerCard3 = rand()%13+1;
                    cout<<"Player 3rd card: "<<playerCard3<<endl;
                    playerTotalHand = playerCard1 + playerCard2 + playerCard3;
                    cout<<"\nThe player total hand is: "<<playerTotalHand<<endl;
                    cout<<"Dealer's 1st card is: "<<dealerCard1<<endl;
                    cout<<"Dealer's 2nd card is: "<<dealerCard2<<endl;
                    srand(time(NULL));
                    dealerCard3 = rand()%13+1;
                    cout<<"Dealer's 3rd card is: "<<dealerCard3<<endl;
                    dealerTotalHand = dealerCard1 + dealerCard2 + dealerCard3;
                    cout<<"Dealer's total hand is: "<<dealerTotalHand<<endl;
                    if (playerTotalHand > 21)
                    {
                        cout<<"Player has a bust!"<<endl;
                    }
                    else if (dealerTotalHand > 21)
                    {
                        cout<<"Dealer has a Bust!"<<endl;
                    }


                    else if (playerTotalHand == 21)
                    {
                        cout<<"\nPlayer has "<<playerTotalHand<<"; dealer shows hand."<<endl;
                        cout<<"Dealer's 1st card: "<<dealerCard1<<endl;
                        cout<<"Dealer's 2nd card: "<<dealerCard2<<endl;
                        dealerTotalHand = dealerCard1 + dealerCard2;
                        cout<<"The dealers total hand is: "<<dealerTotalHand<<endl;
                        cout<<"PLAYER HAS BLACKJACK!!"<<endl;
                        totalMoney = amount + bet;
                    }
                    else if (dealerTotalHand == 21)
                    {
                        cout<<"Dealer has blackjack. "<<endl;
                        cout<<"House win! "<<endl;
                    }
                    else if (playerTotalHand > dealerTotalHand)
                    {
                        cout<<"Player won!"<<endl;
                        totalMoney = amount - bet;
                        cout<<"Total money is: "<<totalMoney<<endl;
                    }
                    else
                    {
                        cout<<"House wins!"<<endl;
                        totalMoney = amount - bet;
                        cout<<"Total money is: "<<totalMoney<<endl;
                    }

                }
                else if (stayHit == 's')
                {
                    cout<<"Players hand: "<<playerTotalHand<<endl;
                    cout<<"Dealer's 1st card is: "<<dealerCard1<<endl;
                    cout<<"Dealer's 2nd card is: "<<dealerCard2<<endl;
                    srand(time(NULL));
                    dealerCard3 = rand()%13+1;
                    cout<<"Dealer's 3rd card is: "<<dealerCard3<<endl;
                    dealerTotalHand = dealerCard1 + dealerCard2 + dealerCard3;
                    if (dealerTotalHand > 21)
                    {
                        cout<<"Dealer has a Bust!"<<endl;
                    }
                    else if (playerTotalHand > 21)
                    {
                        cout<<"Player has a bust!"<<endl;
                    }

                    else if (playerTotalHand == 21)
                    {
                        cout<<"\nPlayer has "<<playerTotalHand<<"; dealer shows hand."<<endl;
                        cout<<"Dealer's 1st card: "<<dealerCard1<<endl;
                        cout<<"Dealer's 2nd card: "<<dealerCard2<<endl;
                        dealerTotalHand = dealerCard1 + dealerCard2;
                        cout<<"The dealers total hand is: "<<dealerTotalHand<<endl;
                        cout<<"PLAYER HAS BLACKJACK!!"<<endl;
                        totalMoney = amount + bet;
                    }
                    else if (dealerTotalHand == 21)
                    {
                        cout<<"Dealer has blackjack. "<<endl;
                        cout<<"House win! "<<endl;
                    }
                    else if (playerTotalHand > dealerTotalHand)
                    {
                        cout<<"Player won!"<<endl;
                        totalMoney = amount - bet;
                        cout<<"Total money is: "<<totalMoney<<endl;
                    }
                    else
                    {
                        cout<<"House wins!"<<endl;
                        totalMoney = amount - bet;
                        cout<<"Total money is: "<<totalMoney<<endl;
                    }
                }
        }
        else if (choice == '2')
        {
            inputFile.open("TuttleHistory.txt");
            inputFile>>history;
            cout<<history;
        }

     }while (choice != '3');

    return 0;
}

