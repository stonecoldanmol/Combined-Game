#ifndef GAME1_H_INCLUDED
#define GAME1_H_INCLUDED

#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

using namespace std;
//global variables of snake and TTT
bool gameover;
const int width=20;
const int height = 20;
int x,y,fruitX,fruitY,score,o,p;
int wallX,wallY;
int tailX[100],tailY[100];
int ntail;
char matrix[3][3] = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };
char player = 'X';
enum eDirection
{
    STOP=0,LEFT,RIGHT,UP,DOWN,
    LEFT1 = 1, UPLEFT = 2, DOWNLEFT = 3, RIGHT1 = 4, UPRIGHT = 5, DOWNRIGHT = 6

};
eDirection dir;

class A
{
    public:
void setup()
{
    gameover=false;
    dir=STOP;
    x=width/2;
    y=height/2;
    fruitX=rand()%width;
    fruitY=rand()%height;
    //wallX=rand()%width;
    //wallY=rand()%height;
    score=0;
}
};
class B
{
    public:
  void draw()
{
    system("CLS");
    for(int i=0;i<width+2;i++)
        cout<<"\xB2";
        cout<<endl;

       for(int i=0;i<height;i++)
       {
           for(int j=0;j<width;j++)
           {
               if(j==0)
                cout<<"\xB2";
                if(i==y && j==x)
                    cout<<"0";
                    else if(i==fruitY && j==fruitX)
                        cout<<"@";
                else
                {
                     bool print =false;
                    for(int k=0;k < ntail ;k++)
                    {

                        if(tailX[k]==j && tailY[k]==i)
                        {
                            cout<<"o";
                            print=true;
                        }

                    }
                      if(!print)
                            cout<<" ";
                }


               if(j==width-1)
                cout<<"\xB2";
           }
           cout<<endl;
       }

    for(int i =0;i<width+2;i++)
        cout<<"\xB2";
        cout<<endl;
        cout<<"Score:"<<score<<endl;

}
};
class C
{
    public:
    void input()
{
    if(_kbhit())
        {
        switch(_getch())
        {
        case 'a':
            dir=LEFT;
            break;
        case 'd':
            dir=RIGHT;
            break;
        case 's':
            dir=DOWN;
            break;
        case 'w':
            dir=UP;
            break;
        case 'x':
            gameover=true;
            break;
        }
    }
}
};
class D
{
    public:
void logic()
{
    int prevX = tailX[0];
    int prevY = tailY[0];
    int prev2X,prev2Y;
    tailX[0]=x;
    tailY[0]=y;
    for(int i=1;i<ntail;i++)
    {
        prev2X = tailX[i];
        prev2Y = tailY[i];
        tailX[i]=prevX;
        tailY[i]=prevY;
        prevX=prev2X;
        prevY=prev2Y;
    }
switch(dir)
    {

        case LEFT:
            x--;
            break;
        case RIGHT:
            x++;
            break;
        case UP:
            y--;
            break;
        case DOWN:
            y++;
            break;
        default:
            break;


    }
    if( x>width || x<0 || y>height || y<0)
        gameover=false;

        //x=rand()%width;

       for(int i=0;i<ntail;i++)
            if(tailX[i]==x && tailY[i]==y)
            gameover=true;


    if(x ==fruitX && y==fruitY)
    {

        score+=10;
         fruitX=rand()%width;
         fruitY=rand()%height;
         ntail++;
    }
}

};


class E
{
    public:
void setup1()
{
    gameover=false;
    dir=STOP;
    x=width/2;
    y=height/2;
    //o=width/3;
    //p=height/3;
    fruitX=rand()%width;
    fruitY=rand()%height;
    //wallX=rand()%width;
    //wallX=rand()%width;
    //wallY=rand()%height;
    score=0;
}
};
class F
{
    public:
  void draw1()
{
    system("CLS");
    for(int i=0;i<width+2;i++)
        cout<<"\xB2";
        cout<<endl;

       for(int i=0;i<height;i++)
       {
           for(int j=0;j<width;j++)
           {
               if(j==0)
                cout<<"\xB2";
                if(i==y && j==x)
                    cout<<"0";
                    else if(i==fruitY && j==fruitX)
                        cout<<"@";
                            /*else if(i==wallY && j==wallX)
                                cout<<"#";*/
                else
                {
                     bool print =false;
                    for(int k=0;k < ntail ;k++)
                    {

                        if(tailX[k]==j && tailY[k]==i)
                        {
                            cout<<"o";
                            print=true;
                        }

                    }
                      if(!print)
                            cout<<" ";
                }




               if(j==width-1)
                cout<<"\xB2";
           }
           cout<<endl;
       }

    for(int i =0;i<width+2;i++)
        cout<<"\xB2";
        cout<<endl;
        cout<<"Score:"<<score<<endl;

}
};
class G
{
    public:
    void input1()
{
    if(_kbhit())
        {
        switch(_getch())
        {
        case 'a':
            dir=LEFT;
            break;
        case 'd':
            dir=RIGHT;
            break;
        case 's':
            dir=DOWN;
            break;
        case 'w':
            dir=UP;
            break;
        case 'x':
            gameover=true;
            break;
        }
    }
}
};
class H
{
    public:
void logic1()
{
    int prevX = tailX[0];
    int prevY = tailY[0];
    int prev2X,prev2Y;
    tailX[0]=x;
    tailY[0]=y;
    for(int i=1;i<ntail;i++)
    {
        prev2X = tailX[i];
        prev2Y = tailY[i];
        tailX[i]=prevX;
        tailY[i]=prevY;
        prevX=prev2X;
        prevY=prev2Y;
    }
switch(dir)
    {

        case LEFT:
            x--;
            break;
        case RIGHT:
            x++;
            break;
        case UP:
            y--;
            break;
        case DOWN:
            y++;
            break;
        default:
            break;


    }
    if( x>width || x<0 || y>height || y<0)
        gameover=true;

        //x=rand()%width;

       for(int i=0;i<ntail;i++)
          {
             if(tailX[i]==x && tailY[i]==y)
            gameover=true;
                /*else if(wallX==x && wallY==y)
                    gameover=true;*/
          }

   


}

};


class I
{
    public:
void setup2()
{
    gameover=false;
    dir=STOP;
    x=width/2;
    y=height/2;
    //o=width/3;
    //p=height/3;
    fruitX=rand()%width;
    fruitY=rand()%height;
    //wallX=rand()%width;
    wallX=rand()%width;
    wallY=rand()%height;
    score=0;
}
};
class J
{
    public:
  void draw2()
{
    system("CLS");
    for(int i=0;i<width+2;i++)
        cout<<"\xB2";
        cout<<endl;

       for(int i=0;i<height;i++)
       {
           for(int j=0;j<width;j++)
           {
               if(j==0)
                cout<<"\xB2";
                if(i==y && j==x)
                    cout<<"0";
                    else if(i==fruitY && j==fruitX)
                        cout<<"@";
                            else if(i==wallY && j==wallX)
                                cout<<"\xB2";
                else
                {
                     bool print =false;
                    for(int k=0;k < ntail ;k++)
                    {

                        if(tailX[k]==j && tailY[k]==i)
                        {
                            cout<<"o";
                            print=true;
                        }

                    }
                      if(!print)
                            cout<<" ";
                }




               if(j==width-1)
                cout<<"\xB2";
           }
           cout<<endl;
       }

    for(int i =0;i<width+2;i++)
        cout<<"\xB2";
        cout<<endl;
        cout<<"Score:"<<score<<endl;

}
};
class K
{
    public:
    void input2()
{
    if(_kbhit())
        {
        switch(_getch())
        {
        case 'a':
            dir=LEFT;
            break;
        case 'd':
            dir=RIGHT;
            break;
        case 's':
            dir=DOWN;
            break;
        case 'w':
            dir=UP;
            break;
        case 'x':
            gameover=true;
            break;
        }
    }
}
};
class L
{
    public:
void logic2()
{
    int prevX = tailX[0];
    int prevY = tailY[0];
    int prev2X,prev2Y;
    tailX[0]=x;
    tailY[0]=y;
    for(int i=1;i<ntail;i++)
    {
        prev2X = tailX[i];
        prev2Y = tailY[i];
        tailX[i]=prevX;
        tailY[i]=prevY;
        prevX=prev2X;
        prevY=prev2Y;
    }
switch(dir)
    {

        case LEFT:
            x--;
            break;
        case RIGHT:
            x++;
            break;
        case UP:
            y--;
            break;
        case DOWN:
            y++;
            break;
        default:
            break;


    }
    if( x>width || x<0 || y>height || y<0)
        gameover=true;

        //x=rand()%width;

       for(int i=0;i<ntail;i++)
          {
             if(tailX[i]==x && tailY[i]==y)
            gameover=true;
                else if(wallX==x && wallY==y)
                    gameover=true;
          }

    if(x ==fruitX && y==fruitY)
    {

        score+=10;
        fruitX=rand()%width;
        fruitY=rand()%height;
        wallX=rand()%width;
        wallY=rand()%height;
        ntail++;
    }


}

};

//enum eDirection { STOP = 0, LEFT1 = 1, UPLEFT2 = 2, DOWNLEFT = 3, RIGHT1 = 4, UPRIGHT = 5, DOWNRIGHT = 6};
class cBall
{
private:
    int x, y;
    int originalX, originalY;
    eDirection direction;
public:
    cBall(int posX, int posY)
    {
        originalX = posX;
        originalY = posY;
        x = posX; y = posY;
        direction = STOP;
    }
    void Reset()
    {
        x = originalX; y = originalY;
        direction = STOP;
    }
    void changeDirection(eDirection d)
    {
        direction = d;
    }
    void randomDirection()
    {
        direction = (eDirection)((rand() % 6) + 1);
    }
    inline int getX() { return x; }
    inline int getY() { return y; }
    inline eDirection getDirection() { return direction; }
    void Move()
    {
        switch (direction)
        {
        case STOP:
            break;
        case LEFT1:
            x--;
            break;
        case RIGHT1:
            x++;
            break;
        case UPLEFT:
            x--; y--;
            break;
        case DOWNLEFT:
            x--; y++;
            break;
        case UPRIGHT:
            x++; y--;
            break;
        case DOWNRIGHT:
            x++; y++;
            break;
        default:
            break;
        }
    }
    friend ostream & operator<<(ostream & o, cBall c)
    {
        o << "Ball [" << c.x << "," << c.y << "][" << c.direction << "]";
        return o;
    }
};
class cPaddle
{
private:
    int x, y;
    int originalX, originalY;
public:
    cPaddle()
    {
        x = y = 0;
    }
    cPaddle(int posX, int posY) : cPaddle()
    {
        originalX = posX;
        originalY = posY;
        x = posX;
        y = posY;
    }
    inline void Reset() { x = originalX; y = originalY; }
    inline int getX() { return x; }
    inline int getY() { return y; }
    inline void moveUp() { y--; }
    inline void moveDown() { y++; }
    friend ostream & operator<<(ostream & o, cPaddle c)
    {
        o << "Paddle [" << c.x << "," << c.y << "]";
        return o;
    }
};
class cGameManger
{
private:
    int width, height;
    int score1, score2;
    char up1, down1, up2, down2;
    bool quit,gameover;
    cBall * ball;
    cPaddle *player1;
    cPaddle *player2;
public:
    cGameManger(int w, int h)
    {
        srand(time(NULL));
        quit = false;
        gameover=false;
        up1 = 'w'; up2 = 'i';
        down1 = 's'; down2 = 'k';
        score1 = score2 = 0;
        width = w; height = h;
        ball = new cBall(w / 2, h / 2);
        player1 = new cPaddle(1, h / 2 - 3);
        player2 = new cPaddle(w - 2, h / 2 - 3);
    }
    ~cGameManger()
    {
        delete ball, player1, player2;
    }
    void ScoreUp(cPaddle * player)
    {
        if (player == player1)
            score1++;
        else if (player == player2)
            score2++;

        ball->Reset();
        player1->Reset();
        player2->Reset();
    }
    void Draw()
    {
        system("CLS");
        for (int i = 0; i < width + 2; i++)
            cout << "\xB2";
        cout << endl;

        for (int i = 0; i < height; i++)
        {
            for (int j = 0; j < width; j++)
            {
                int ballx = ball->getX();
                int bally = ball->getY();
                int player1x = player1->getX();
                int player2x = player2->getX();
                int player1y = player1->getY();
                int player2y = player2->getY();

                if (j == 0)
                    cout << "\xB2";

                if (ballx == j && bally == i)
                    cout << "O"; //ball
                else if (player1x == j && player1y == i)
                    cout << "\xDB"; //player1
                else if (player2x == j && player2y == i)
                    cout << "\xDB"; //player2

                else if (player1x == j && player1y + 1 == i)
                    cout << "\xDB"; //player1
                else if (player1x == j && player1y + 2 == i)
                    cout << "\xDB"; //player1
                else if (player1x == j && player1y + 3 == i)
                    cout << "\xDB"; //player1

                else if (player2x == j && player2y + 1 == i)
                    cout << "\xDB"; //player1
                else if (player2x == j && player2y + 2 == i)
                    cout << "\xDB"; //player1
                else if (player2x == j && player2y + 3 == i)
                    cout << "\xDB"; //player1
                else
                    cout << " ";

                if (j == width - 1)
                    cout << "\xB2";
            }
            cout << endl;
        }

        for (int i = 0; i < width + 2; i++)
            cout << "\xB2";
        cout << endl;

        cout << "Score 1: " << score1 << endl << "Score 2: " << score2 << endl;
    }
    void Input()
    {
        ball->Move();

        int ballx = ball->getX();
        int bally = ball->getY();
        int player1x = player1->getX();
        int player2x = player2->getX();
        int player1y = player1->getY();
        int player2y = player2->getY();

        if (_kbhit())
        {
            char current = _getch();
            if (current == up1)
                if (player1y > 0)
                    player1->moveUp();
            if (current == up2)
                if (player2y > 0)
                    player2->moveUp();
            if (current == down1)
                if (player1y + 4 < height)
                    player1->moveDown();
            if (current == down2)
                if (player2y + 4 < height)
                    player2->moveDown();

            if (ball->getDirection() == STOP)
                ball->randomDirection();

            if (current == 'q')
                quit = true;
                if(current=='x')
                    gameover=true;
        }
    }
    void Logic()
    {
        int ballx = ball->getX();
        int bally = ball->getY();
        int player1x = player1->getX();
        int player2x = player2->getX();
        int player1y = player1->getY();
        int player2y = player2->getY();

        //left paddle
        for (int i = 0; i < 4; i++)
            if (ballx == player1x + 1)
                if (bally == player1y + i)
                    ball->changeDirection((eDirection)((rand() % 3) + 4));

        //right paddle
        for (int i = 0; i < 4; i++)
            if (ballx == player2x - 1)
                if (bally == player2y + i)
                    ball->changeDirection((eDirection)((rand() % 3) + 1));

        //bottom wall
        if (bally == height - 1)
            ball->changeDirection(ball->getDirection() == DOWNRIGHT ? UPRIGHT : UPLEFT);
        //top wall
        if (bally == 0)
            ball->changeDirection(ball->getDirection() == UPRIGHT ? DOWNRIGHT : DOWNLEFT);
        //right wall
        if (ballx == width - 1)
            ScoreUp(player1);
        //left wall
        if (ballx == 0)
            ScoreUp(player2);
    }
    void Run()
    {
        while (!quit)
        {
            Draw();
            Input();
            Logic();
        }
    }
};
class C1
{
    public:
void Draw()
{
    system("CLS");
    cout << "Tic Tac Toe GAME:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
};
class C2
{
    public:
    void Input()
{
    int a;
    cout << "Press the number of the field: ";
    cin >> a;

    if (a == 1)
        matrix[0][0] = player;
    else if (a == 2)
        matrix[0][1] = player;
    else if (a == 3)
        matrix[0][2] = player;
    else if (a == 4)
        matrix[1][0] = player;
    else if (a == 5)
        matrix[1][1] = player;
    else if (a == 6)
        matrix[1][2] = player;
    else if (a == 7)
        matrix[2][0] = player;
    else if (a == 8)
        matrix[2][1] = player;
    else if (a == 9)
        matrix[2][2] = player;
}
};
class C3
{
    public:
 void TogglePlayer()
{
    if (player == 'X')
        player = 'O';
    else
        player = 'X';
}
};
class C4
{
    public:
char Win()
{
    //first player
    if (matrix[0][0] == 'X' && matrix[0][1] == 'X' && matrix[0][2] == 'X')
        return 'X';
    if (matrix[1][0] == 'X' && matrix[1][1] == 'X' && matrix[1][2] == 'X')
        return 'X';
    if (matrix[2][0] == 'X' && matrix[2][1] == 'X' && matrix[2][2] == 'X')
        return 'X';

    if (matrix[0][0] == 'X' && matrix[1][0] == 'X' && matrix[2][0] == 'X')
        return 'X';
    if (matrix[0][1] == 'X' && matrix[1][1] == 'X' && matrix[2][1] == 'X')
        return 'X';
    if (matrix[0][2] == 'X' && matrix[1][2] == 'X' && matrix[2][2] == 'X')
        return 'X';

    if (matrix[0][0] == 'X' && matrix[1][1] == 'X' && matrix[2][2] == 'X')
        return 'X';
    if (matrix[2][0] == 'X' && matrix[1][1] == 'X' && matrix[0][2] == 'X')
        return 'X';

    //second player
    if (matrix[0][0] == 'O' && matrix[0][1] == 'O' && matrix[0][2] == 'O')
        return 'O';
    if (matrix[1][0] == 'O' && matrix[1][1] == 'O' && matrix[1][2] == 'O')
        return 'O';
    if (matrix[2][0] == 'O' && matrix[2][1] == 'O' && matrix[2][2] == 'O')
        return 'O';

    if (matrix[0][0] == 'O' && matrix[1][0] == 'O' && matrix[2][0] == 'O')
        return 'O';
    if (matrix[0][1] == 'O' && matrix[1][1] == 'O' && matrix[2][1] == 'O')
        return 'O';
    if (matrix[0][2] == 'O' && matrix[1][2] == 'O' && matrix[2][2] == 'O')
        return 'O';

    if (matrix[0][0] == 'O' && matrix[1][1] == 'O' && matrix[2][2] == 'O')
        return 'O';
    if (matrix[2][0] == 'O' && matrix[1][1] == 'O' && matrix[0][2] == 'O')
        return 'O';

    return '/';
    }
    };



#endif // GAME1_H_INCLUDED
