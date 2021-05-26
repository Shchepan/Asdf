#include <iostream>

std::string a= "#####";//12345
std::string b= "#   #";//12345
std::string c= "# * #";//12345
std::string d= "#   #";//12345
std::string move;
int x=3;
int y=3;
void gameover()
{
    std::cout<<"You went out of the scope\n\tGame Over\n";
    system("pause");
        exit (EXIT_FAILURE);
}
void update()
{
    std::cout<<a<<std::endl<<b<<std::endl<<c<<std::endl<<d<<std::endl<<a<<std::endl;
}

void left()
{
    switch(y)
    {
        case 4:
        b[x-1]=' ';
        b[x-2]='*';
        break;
        case 3:
        c[x-1]=' ';
        c[x-2]='*';
        break;
        case 2:
        d[x-1]=' ';
        d[x-2]='*';
        break;
    }
    x=x-1;
    if(x==1)
    {
        gameover();
    }
}
void right()
{
    switch(y)
    {
        case 4:
        b[x-1]=' ';
        b[x]='*';
        break;
        case 3:
        c[x-1]=' ';
        c[x]='*';
        break;
        case 2:
        d[x-1]=' ';
        d[x]='*';
        break;
    }
    x=x+1;
    if(x==5)
    {
        gameover();
    }
}

void down()
{
    switch(y)
    {
        case 4:
        b[x-1]=' ';
        c[x-1]='*';
        break;
        case 3:
        c[x-1]=' ';
        d[x-1]='*';
        break;
        case 2:
        gameover();
        break;
    }
    y=y-1;
}
void up()
{
        switch(y)
    {
        case 4:
        gameover();
        break;
        case 3:
        c[x-1]=' ';
        b[x-1]='*';
        break;
        case 2:
        d[x-1]=' ';
        c[x-1]='*';
        break;
    }
    y=y+1;
}
int main()
{
std::cout<<"u=up\td=down\nl=left\tr=right\n";

    while(true)
    {
        char dir;
        update();
        std::cout<<"Direction:\t";
        std::cin>>dir;
            switch(dir)
            {
                case 'u':
                    up();
                break;
                case 'd':
                    down();
                break;
                case 'l':
                    left();
                break;
                case 'r':
                right();
                break;
                default:
                std::cout<<"Wrong input\n";
            }
    
    }


    return 0;
}