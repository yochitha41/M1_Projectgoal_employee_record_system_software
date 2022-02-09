#include<stdio.h>

void position(int x,int y)
{
	COORD coordinates = {0,0};
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}





