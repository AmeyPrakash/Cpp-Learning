#include<iostream>
#include<conio.h>
#include<windows.h>
#include<ctime>

enum Direction { STOP = 0, LEFT, RIGHT, UP, DOWN };
Direction dir;
bool gameover;
const int width = 20;
const int height = 20;
int headx, heady, fruitx, fruity, score;
int tailx[100], taily[100];
int tail_len;

void setup();
void draw();
void input();
void logic();

int main(){
    char start;
    std::cout<<"\t--------------------------------"<<std::endl;
    std::cout<<"\t| Welcome to the Snake Game!   |"<<std::endl;
    std::cout<<"\t| Press s to start             |"<<std::endl;
    std::cin>>start;
    if (start == 's')
    {
        srand(time(0));
        setup();
        while (!gameover)
        {
            draw();
            input();
            logic();
            Sleep(100);
            system("cls");
        }
    }
    return 0;
}

void setup(){
    gameover = false;
    dir = STOP;
    headx = width/2;
    heady = height/2;
    fruitx = rand() % width;
    fruity = rand() % height;
    score = 0;
    tail_len = 0;
}

void draw(){
    for (int i = 0; i < width+2; i++)
    {
        std::cout<<"||";
    }
    std::cout<<std::endl;

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            if (j == 0)
            {
                std::cout<<"||";
            }
            if (i == heady && j == headx)
            {
                std::cout<<"O";
            }
            else if (i == fruity && j == fruitx)
            {
                std::cout<<"F";
            }
            else
            {
                bool print = false;
                for (int k = 0; k < tail_len; k++)
                {
                    if (tailx[k] == j && taily[k] == i)
                    {
                        std::cout<<"o";
                        print = true;
                    }
                }
                if (!print)
                {
                    std::cout<<" ";
                }
            }
            if (j == width - 1)
            {
                std::cout<<"\t||";
            }
        }
        std::cout<<std::endl;
    }

    for (int i = 0; i < width+2; i++)
    {
        std::cout<<"||";
    }
    std::cout<<std::endl;
    std::cout<<"Score: "<<score<<std::endl;
}

void input(){
    if (_kbhit())
    {
        switch (_getch())
        {
        case 'a':
            if (dir != RIGHT) dir = LEFT;
            break;
        case 'd':
            if (dir != LEFT) dir = RIGHT;
            break;
        case 'w':
            if (dir != DOWN) dir = UP;
            break;
        case 's':
            if (dir != UP) dir = DOWN;
            break;
        }
    }
}

void logic(){
    int prevx = tailx[0];
    int prevy = taily[0];
    int prev2x, prev2y;
    tailx[0] = headx;
    taily[0] = heady;

    for (int i = 1; i < tail_len; i++)
    {
        prev2x = tailx[i];
        prev2y = taily[i];
        tailx[i] = prevx;
        taily[i] = prevy;
        prevx = prev2x;
        prevy = prev2y;
    }

    switch (dir)
    {    
    case LEFT:
        headx--;
        break;
    case RIGHT:
        headx++;
        break;
    case UP:
        heady--;
        break;
    case DOWN:
        heady++;
        break;
    default:
        break;
    }

    if(headx >= width) headx = 0;
    else if(headx < 0) headx = width - 1;

    if(heady >= height) heady = 0;
    else if(heady < 0) heady = height - 1;

    for (int i = 0; i < tail_len; i++)
    {
        if (tailx[i] == headx && taily[i] == heady)
        {
            gameover = true;
        }
    }

    if (headx == fruitx && heady == fruity)
    {
        score += 10;
        fruitx = rand() % width;
        fruity = rand() % height;
        tail_len++;
    }
}