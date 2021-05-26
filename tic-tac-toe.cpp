#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
int playtogether();
int win(char x[3][3]);
void print(char x[3][3]);
void printe(char x[3][3]);
int playbycomputer();
int winer(char x[3][3]);
int computer(char x[3][3]);
int player1(char x[3][3]);
int player2(char x[3][3]);
int main()
{
    char x[3][3];
    int choose;
    int choice;
    cout << "start----->> 1" << endl;
    cout << "quit------>> 0" << endl;
    cin >> choose;
    if(choose == 1)
    {
        cout << "play to gethere----->> 1" << endl;
        cout << "play by computer---->> 2" << endl;
        cin >> choice;
        if(choice == 1)
        {
            playtogether();
        }
        else if(choice == 2)
        {
           playbycomputer();
        }
    }
    else if(choose == 0)
    {
        return -1;
    }
    return 0;
}
int playtogether()
{
    cout << "player1--->>O\nplayer2--->>X" << endl;
    int i,j;
    char x[3][3];
    print(x);
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            x[i][j] = '\0';
        }
    }
 for(int z = 0; z <= 4 ;z++)
  {
    player1(x);
    while( z == 4)
    {
        win(x);
        return 0;
    }
    player2(x);
  }
}

void print(char x[3][3])
{
    cout << "     1   |   2    |   3    " << endl;
    cout << " --------|--------|--------" << endl;
    cout << "     4   |   5    |   6    " << endl;
    cout << " --------|--------|--------" << endl;
    cout << "     7   |   8    |   9    " << endl;
}
void printe(char x[3][3])
{
    cout << "         |        |        " << endl;
    cout <<"     "<< x[0][0]<<"\t |   "<<x[0][1]<<"\t  |   "<<x[0][2]<< endl;
    cout << " --------|--------|--------" << endl;
    cout << "         |        |        " << endl;
    cout <<"     "<< x[1][0]<<"\t |   "<<x[1][1]<<"\t  |   "<<x[1][2]<< endl;
    cout << " --------|--------|--------" << endl;
    cout << "         |        |        " << endl;
    cout <<"     "<<  x[2][0]<<"\t |   "<<x[2][1]<<"\t  |   "<<x[2][2]<< endl;
}
int win(char x[3][3])
{
    if(x[0][0] == x[0][1] &&  x[0][1] == x[0][2])
    {
        if(x[0][0] == 'X')
        {
            cout << "Player1 Win...";
        }
        else if(x[0][0] == 'O')
        {
            cout << "Player2 Win...";
        }
    }
    else if(x[1][0] == x[1][1]  &&  x[1][1] == x[1][2])
    {
        if(x[1][0] == 'X')
        {
            cout << "Player1 Win...";
        }
        else if(x[1][0] == 'O')
        {
            cout << "Player2 Win...";
        }
    }
    else if(x[2][0] == x[2][1] &&  x[2][1] == x[2][2])
    {
        if(x[2][0] ==  'X')
        {
            cout << "Player1 Win...";
        }
        else if(x[2][0] == 'O')
        {
            cout << "Player2 Win...";
        }
    }
    else if(x[0][0] == x[1][0] &&  x[1][0] == x[2][0])
    {
        if(x[0][0] == 'X')
        {
            cout << "Player1 Win...";
        }
        else if(x[0][0] == 'O')
        {
            cout << "Player2 Win...";
        }
    }
    else if(x[0][1] == x[1][1] &&   x[1][1] == x[2][1])
    {
        if(x[0][1] == 'X')
        {
            cout << "Player1 Win...";
        }
        else if(x[0][1] == 'O')
        {
            cout << "Player2 Win...";
        }
    }
    else if(x[0][2] == x[1][2] &&  x[1][2] == x[2][2])
    {
        if(x[0][2] == 'X')
        {
            cout << "Player1 Win...";
        }
        else if(x[0][2] == 'O')
        {
            cout << "Player2 Win...";
        }
    }
    else if(x[0][0] == x[1][1] &&  x[1][1] == x[2][2])
    {
        if(x[0][0] == 'X')
        {
            cout << "Player1 Win...";
        }
        else if(x[0][0] == 'O')
        {
            cout << "Player2 Win...";
        }
    }
    else if(x[0][2] == x[1][1] &&  x[1][1] == x[2][0])
    {
        if(x[0][2] == 'X')
        {
            cout << "Player1 Win...";
        }
        else if(x[0][2] == 'O')
        {
            cout << "Player2 Win...";
        }
    }
    else
    {
        system("cls");
        cout << "This game has not winner..." << endl;
        playtogether();
    }
}

int playbycomputer()
{
    cout << "player1--->> X\nComputer--->> O"<<endl;
    int i,j;
    int a,b;
    char x[3][3];
    print(x);
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            x[i][j] = '\0';
        }
    }
    for(int z = 0; z <= 4; z++)
    {
        computer(x);
        while(z == 4)
        {
          winer(x);
          return 0;
        }
         player1(x);
    }
}

int winer(char x[3][3])
{
    if(x[0][0] == x[0][1] &&  x[0][1] == x[0][2])
    {
        if(x[0][0] == 'X')
        {
            cout << "Player1 Win...";
        }
        else if(x[0][0] == 'O')
        {
            cout << "Computer Win...";
        }
    }
    else if(x[1][0] == x[1][1]  &&  x[1][1] == x[1][2])
    {
        if(x[1][0] == 'X')
        {
            cout << "Player1 Win...";
        }
        else if(x[1][0] == 'O')
        {
            cout << "Computer Win...";
        }
    }
    else if(x[2][0] == x[2][1] &&  x[2][1] == x[2][2])
    {
        if(x[2][0] ==  'X')
        {
            cout << "Player1 Win...";
        }
        else if(x[2][0] == 'O')
        {
            cout << "Computer Win...";
        }
    }
    else if(x[0][0] == x[1][0] &&  x[1][0] == x[2][0])
    {
        if(x[0][0] == 'X')
        {
            cout << "Player1 Win...";
        }
        else if(x[0][0] == 'O')
        {
            cout << "Computer Win...";
        }
    }
    else if(x[0][1] == x[1][1] &&   x[1][1] == x[2][1])
    {
        if(x[0][1] == 'X')
        {
            cout << "Player1 Win...";
        }
        else if(x[0][1] == 'O')
        {
            cout << "Computer Win...";
        }
    }
    else if(x[0][2] == x[1][2] &&  x[1][2] == x[2][2])
    {
        if(x[0][2] == 'X')
        {
            cout << "Player1 Win...";
        }
        else if(x[0][2] == 'O')
        {
            cout << "Computer Win...";
        }
    }
    else if(x[0][0] == x[1][1] &&  x[1][1] == x[2][2])
    {
        if(x[0][0] == 'X')
        {
            cout << "Player1 Win...";
        }
        else if(x[0][0] == 'O')
        {
            cout << "Computer Win...";
        }
    }
    else if(x[0][2] == x[1][1] &&  x[1][1] == x[2][0])
    {
        if(x[0][2] == 'X')
        {
            cout << "Player1 Win...";
        }
        else if(x[0][2] == 'O')
        {
            cout << "Computer Win...";
        }
    }
    else
    {
        system("cls");
        cout << "This game has not winner..." << endl;
        playtogether();
    }
}

int computer(char x[3][3])
{
    int b;
    int i,j;
    cout << "Please wait Computer select place..." << endl;
        b = rand()%(9) + 1;
        if(b >= 1 && b <= 3)
        {
            i = 0;
            if(b == 1)
             {
                j = 0;
                if(x[i][j] == 'O' || x[i][j] == 'X')
                {
                 computer(x);
                }
                else
                {
                 x[i][j] = 'O';
                }
            }
            else if(b == 2)
            {
                j = 1;
                if( x[i][j] == 'O' || x[i][j] == 'X')
                {
                 computer(x);
                }
               else
                {
                 x[i][j] = 'O';
                }
            }
            else if(b == 3)
            {
                j = 2;
                if(x[i][j] == 'O' || x[i][j] == 'X')
                {
                 computer(x);
                }
                else
                {
                 x[i][j] = 'O';
                }
            }
            print(x);
            printe(x);
        }
        else if(b >= 4 && b <= 6)
        {
            int i = 1;
            if(b == 4)
            {
                j = 0;
                if(x[i][j] == 'O' || x[i][j] == 'X')
                {
                  computer(x);
                }
                else
                {
                  x[i][j] = 'O';
                }
            }
            if(b == 5)
            {
                j = 1;
                if(x[i][j] == 'O' || x[i][j] == 'X')
                {
                  computer(x);
                }
                else
                {
                  x[i][j] = 'O';
                }
            }
            if(b == 6)
            {
                j = 2;
                if(x[i][j] == 'O' || x[i][j] == 'X')
                {
                  computer(x);
                }
                else
                {
                  x[i][j] = 'O';
                }
            }
            print(x);
            printe(x);
        }
        else if(b >= 7 && b <= 9)
        {
            int i = 2;
            if(b == 7)
            {
                j = 0;
                if(x[i][j] == 'O' || x[i][j] == 'X')
                {
                  computer(x);
                }
                else
                {
                  x[i][j] = 'O';
                }
            }
            if(b == 8)
            {
                j = 1;
                if(x[i][j] == 'O' || x[i][j] == 'X')
                {
                  computer(x);
                }
                else
                {
                  x[i][j] = 'O';
                }
            }
            if(b == 9)
            {
                j = 2;
                if(x[i][j] == 'O' || x[i][j] == 'X')
                {
                  computer(x);
                }
                else
                {
                  x[i][j] = 'O';
                }
            }
            print(x);
            printe(x);
        }
}

int player1(char x[3][3])
{
       int i,j;
       //a is the number of home that player1 choose
       int a;
        cout << "player1:";
         cin >> a;
       if(a < 1 || a > 9)
       {
         cout << "Sorry this number is not...please select again:";
         cin >> a;
       }
       else if(a >= 1 && a <= 9)
       {
          if(a >= 1 && a <= 3)
          {
            i = 0;
            if(a == 1)
            {
                j = 0;
                if(x[i][j] == 'O' || x[i][j] == 'X')
                 {
                  cout << "Is FUlL.please select again:";
                  player1(x);
                 }
               else
                 {
                  x[i][j] = 'X';
                 }
            }
            else if(a == 2)
            {
                j = 1;
                if(x[i][j] == 'O' || x[i][j] == 'X')
                {
                 cout << "Is FUlL.please select again:";
                 player1(x);
                }
                else
                {
                 x[i][j] = 'X';
                }
            }
            else if(a == 3)
            {
                j = 2;
                if(x[i][j] == 'O' || x[i][j] == 'X')
                {
                 cout << "Is FUlL.please select again:";
                 player1(x);
                }
                else
                {
                 x[i][j] = 'X';
                }
            }
            print(x);
            printe(x);
          }
          else if(a >= 4 && a <= 6)
          {
             int i = 1;
             if(a == 4)
             {
                j = 0;
                if(x[i][j] == 'O' || x[i][j] == 'X')
                {
                  cout << "Is FUlL.please select again:";
                  player1(x);
                }
                else
                {
                  x[i][j] = 'X';
                }
             }
             if(a == 5)
             {
                j = 1;
                if(x[i][j] == 'O' || x[i][j] == 'X')
                {
                  cout << "Is FUlL.please select again:";
                  player1(x);
                }
                else
                {
                  x[i][j] = 'X';
                }
             }
             if(a == 6)
             {
                j = 2;
                if(x[i][j] == 'O' || x[i][j] == 'X')
                {
                  cout << "Is FUlL.please select again:";
                  player1(x);
                }
                else
                {
                  x[i][j] = 'X';
                }
             }
             print(x);
             printe(x);
          }
          else if(a >= 7 && a <= 9)
          {
            int i = 2;
             if(a == 7)
             {
                j = 0;
                if(x[i][j] == 'O' || x[i][j] == 'X')
                {
                  cout << "Is FUlL.please select again:";
                  player1(x);
                }
                else
                {
                  x[i][j] = 'X';
                }
             }
             if(a == 8)
             {
                j = 1;
                if(x[i][j] == 'O' || x[i][j] == 'X')
                {
                  cout << "Is FUlL.please select again:";
                  player1(x);
                }
                else
                {
                  x[i][j] = 'X';
                }
             }
             if(a == 9)
             {
                j = 2;
                if(x[i][j] == 'O' || x[i][j] == 'X')
                {
                  cout << "Is FUlL.please select again:";
                  player1(x);
                }
                else
                {
                  x[i][j] = 'X';
                }
             }
             print(x);
             printe(x);
          }
    }
}
int player2(char x[3][3])
{
    int i,j;
    //b is the number of place that choose player2
    int b;
    cout << "player2 :";
    cin >> b;
    if(b < 1 || b > 9)
       {
          cout << "Sorry this number is not...please select again:";
          cin >> b;
       }
    else if(b >= 1 && b <= 9)
    {
        if(b >= 1 && b <= 3)
        {
            i = 0;
            if(b == 1)
             {
                j = 0;
                if(x[i][j] == 'O' || x[i][j] == 'X')
                {
                 cout << "Is FUlL.please select again:";
                 player2(x);
                }
                else
                {
                 x[i][j] = 'O';
                }
            }
            else if(b == 2)
            {
                j = 1;
                if( x[i][j] == 'O' || x[i][j] == 'X')
                {
                 cout << "Is FUlL.please select again:";
                 player2(x);
                }
               else
                {
                 x[i][j] = 'O';
                }
            }
            else if(b == 3)
            {
                j = 2;
                if(x[i][j] == 'O' || x[i][j] == 'X')
                {
                 cout << "Is FUlL.please select again:";
                 player2(x);
                }
                else
                {
                 x[i][j] = 'O';
                }
            }
            print(x);
            printe(x);
        }
        else if(b >= 4 && b <= 6)
        {
            int i = 1;
            if(b == 4)
            {
                j = 0;
                if(x[i][j] == 'O' || x[i][j] == 'X')
                {
                  cout << "Is FUlL.please select again:";
                  player2(x);
                }
                else
                {
                  x[i][j] = 'O';
                }
            }
            if(b == 5)
            {
                j = 1;
                if(x[i][j] == 'O' || x[i][j] == 'X')
                {
                  cout << "Is FUlL.please select again:";
                  player2(x);
                }
                else
                {
                  x[i][j] = 'O';
                }
            }
            if(b == 6)
            {
                j = 2;
                if(x[i][j] == 'O' || x[i][j] == 'X')
                {
                  cout << "Is FUlL.please select again:";
                  player2(x);
                }
                else
                {
                  x[i][j] = 'O';
                }
            }
            print(x);
            printe(x);
        }
        else if(b >= 7 && b <= 9)
        {
            int i = 2;
            if(b == 7)
            {
                j = 0;
                if(x[i][j] == 'O' || x[i][j] == 'X')
                {
                  cout << "Is FUlL.please select again:";
                  player2(x);
                }
                else
                {
                  x[i][j] = 'O';
                }
            }
            if(b == 8)
            {
                j = 1;
                if(x[i][j] == 'O' || x[i][j] == 'X')
                {
                  cout << "Is FUlL.please select again:";
                  player2(x);
                }
                else
                {
                  x[i][j] = 'O';
                }
            }
            if(b == 9)
            {
                j = 2;
                if(x[i][j] == 'O' || x[i][j] == 'X')
                {
                  cout << "Is FUlL.please select again:";
                  player2(x);
                }
                else
                {
                  x[i][j] = 'O';
                }
            }
            print(x);
            printe(x);
        }
    }
}
