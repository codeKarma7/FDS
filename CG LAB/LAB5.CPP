#include<iostream>
#include<graphics.h>
#include<conio.h>
#include<stdio.h>

//function to draw a 3D cube

void drawCube(int x, int y, int z,int size)
{
    int offset = size/2;
    
    //front face
    rectangle(x-offset, y-offset, x+offset, y+offset);

    //back face 
    rectangle(x-offset+z, y-offset+z, x+offset+z, y+offset+z)

    //connecting line
    line()
}
