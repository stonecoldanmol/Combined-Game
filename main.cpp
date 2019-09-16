#include <iostream>
#include "game1_H.h"

//#include "game3.h"
using namespace std;

int main()
{
    int n;

    system("color 6");
    cout<<"\n\n\t\t\t \t************************************************************************************************************************"<<endl;
    cout<<"      \t\t\t \t************************************************************************************************************************"<<endl;


    cout<<"\n\n\n \t\t \t\t\t    |       |    |------  |        |-----       ------        | +   + |    |------"<<endl;
    cout<<"       \t\t \t\t\t    |   +   |    |------  |        |           |      |       |   +   |    |------"<<endl;
    cout<<"       \t\t \t\t\t    | +   + |    |______  |____    |_____      |______|       |       |    |______"<<endl;

    cout<<"\n\n \t\t\t \t************************************************************************************************************************"<<endl;
    cout<<"     \t\t\t \t************************************************************************************************************************"<<endl;

    cout<<"\n\n\n\n\n\n \t\t\t \t\t\t \t\t\t \t\t |============ AAPKA SWAGAT HAI!! ============|";
 cout<<"\n\tEnter 1 to play SNAKE\n\t2 to play PING PONG\n\t3 to play TIC TAC TOE\n ";
    cin>>n;

switch(n)
{
case 1:
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
    cout<<"\tSNAKE GAME FORMAT 1\t"<<endl;
    cout<<"\t1)LEVEL 1"<<endl;
    cout<<"\t2)LEVEL 2"<<endl;
    cout<<"\t3)LEVEL 3"<<endl;
    cout<<"\n\tEnter the Level you want to play: "<<endl;
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
    }

    break;
  case 2:
      {
     cGameManger c(40, 20);
    c.Run();
      }

  break;

  case 3:
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
    cout<<"Invalid Input\n";
}
return 0;
}
