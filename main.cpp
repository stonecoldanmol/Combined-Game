#include <iostream>
#include "game1_H.h"

//#include "game3.h"
using namespace std;

int main()
{
    int n;

    system("color 6");
    cout<<"\n\n\t\t\t \t******************************************************************************************************************"<<endl;
    cout<<"      \t\t\t \t****************************************************************************************************************"<<endl;


    cout<<"\n\n\n \t\t \t\t\t    |       |    |------  |        |-----       ------        | +   + |    |------"<<endl;
    cout<<"       \t\t \t\t\t    |   +   |    |------  |        |           |      |       |   +   |    |------"<<endl;
    cout<<"       \t\t \t\t\t    | +   + |    |______  |____    |_____      |______|       |       |    |______"<<endl;

    cout<<"\n\n \t\t\t \t***************************************************************************************************************"<<endl;
    cout<<"     \t\t\t \t***************************************************************************************************************"<<endl;

    cout<<"\n\n\n\n\n\n \t\t\t \t\t\t \t\t |============ AAPKA SWAGAT HAI!! ============|\n\n";
    while(1)
    {


 cout<<"\n\t\t\t\tEnter:- 1 TO PLAY SNAKE GAME\n\t\t\t\t\t2 TO PLAY PING PONG\n\t\t\t\t\t3 TO PLAY TIC TAC TOE\n ";
    cout<<"\t\t\t\tYour Choice:-";
    cin>>n;

switch(n)
{
case 1:


    cout<<"\n\t\t\t\tInstructions:-\n"<<endl;
    cout<<"\t\t\t\t1.There are 3 levels of snake game.";
    cout<<"\n\t\t\t\t2.You can move the snake by 'w' 'a' 's' 'd' buttons.";
    cout<<"\n\t\t\t\t3.As you increase the level the level of difficulty increases."<<endl;
    cout<<"\n\t\t\t\tENJOY!\n"<<endl;

    //while(1)
    //{

    A obj;
    B obj1;
    C obj2;
    D obj3;
    E obj4;
    F obj5;
    G obj6;
    H obj7;
    I obj8;
    J obj9;
    K obj10;
    L obj11;
    int lev;
    cout<<"\t\t\t\tSNAKE GAME FORMAT 1\t"<<endl;
    cout<<"\t\t\t\t1)LEVEL 1"<<endl;
    cout<<"\t\t\t\t2)LEVEL 2"<<endl;
    cout<<"\t\t\t\t3)LEVEL 3"<<endl;
    cout<<"\n\t\t\t\tEnter the Level you want to play: "<<endl;
    cin>>lev;
    switch(lev)
    {
    case 1:
       obj.setup();
    while(!gameover)
    {
        obj1.draw();
        obj2.input();
        obj3.logic();
        Sleep(10);
    }

    break;

    case 2:
    obj4.setup1();
    while(!gameover)
    {
        obj5.draw1();

        obj6.input1();
        obj7.logic1();
        Sleep(0.1);
    }
    break;
    case 3:
       obj8.setup2();
    while(!gameover)
    {
        obj9.draw2();
        obj10.input2();
        obj11.logic2();
        Sleep(0.1);
    }
    break;
    default:
        cout<<"Invalid choice of LEVEL!";
        break;
        }


    break;

  case 2:
      {
          char z;
          cout<<"\n\t\t\t\tInstructions:-\n"<<endl;
    cout<<"\t\t\t\t1.In this game you have to hit the ball by moving up and down.";
    cout<<"\n\t\t\t\t2.You can move your paddles by 'w''s' for Player1 and 'i''k' for Player2";
    cout<<"\n\t\t\t\t3.The player having highest point will win the game!"<<endl;
    cout<<"\n\t\t\t\tENJOY!\n"<<endl;
     cout<<"\t\t\t\tDo You Want To Play The Game?(y/n)"<<endl;
     cin>>z;
          switch(z)
          {
          case 'y':
              {
            cGameManger c(40, 20);
            c.Run();
              }
        break;
          default:
            cout<<"Look out you Prik!";
            break;
          }
      }
  break;

  case 3:
      {
          char p;
           cout<<"\n\t\t\t\tInstructions:-\n"<<endl;
    cout<<"\t\t\t\t1.In this game you have a 3x3 matrix having numbers 1-9";
    cout<<"\n\t\t\t\t2.You have to make a move by putting 'X' and '0' by putting in the matrix.";
    cout<<"\n\t\t\t\t3.The player who succeeds in placing three of their marks in a horizontal, vertical, or diagonal row wins the game."<<endl;
    cout<<"\n\t\t\t\tENJOY!\n"<<endl;
cout<<"\t\t\t\tDo You Want To Play The Game?(y/n)"<<endl;
     cin>>p;
          switch(p)
          {
          case 'y':
              {
                        C1 ob12;
    C2 ob13;
    C3 ob14;
    C4 ob15;
    ob12.Draw();
    while (1)
    {
        ob13.Input();
        ob12.Draw();
        if (ob15.Win() == 'X')
        {
            cout << "X wins!" << endl;
            break;
        }
        else if (ob15.Win() == 'O')
        {
            cout << "O wins!" << endl;
            break;
        }
        ob14.TogglePlayer();
    }
    system("pause");
              }
        break;
          default:
            cout<<"Look out you Prik!";
            break;
          }
      }
    break;
   default:
    cout<<"Invalid Input\n";
}
cout<<"Do You Want To Play Another Game?(y/n)"<<endl;
char g;
cin>>g;
if(g=='n')
    exit(0);
    }
return 0;
}

