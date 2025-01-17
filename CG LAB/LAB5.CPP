#include<iostream>
#include<graphics.h>
#include<conio.h>
#include<stdio.h>

// function to draw a 3D cube
void drawCube(int x, int y, int z, int size) {
    int offset = size / 2;

    // Front face
    rectangle(x - offset, y - offset, x + offset, y + offset);

    // Back face
    rectangle(x - offset + z, y - offset + z, x + offset + z, y + offset + z);

    // Connecting lines
    line(x - offset, y - offset, x - offset + z, y - offset + z);
    line(x + offset, y - offset, x + offset + z, y - offset + z);
    line(x - offset, y + offset, x - offset + z, y + offset + z);
    line(x + offset, y + offset, x + offset + z, y + offset + z);
}

// Function to translate a cube
void translateCube(int *x, int *y, int *z, int tx, int ty, int tz) {
    *x += tx;
    *y += ty;
    *z += tz;
}

int main() {
    int gd = DETECT, gm;
    int x, y, z, size, tx, ty, tz;

    // Initialize the graphics mode
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    // Input cube details
    printf("Enter the initial position of the cube (x y z): ");
    scanf("%d %d %d", &x, &y, &z);

    printf("Enter the size of the cube: ");
    scanf("%d", &size);

    printf("Enter the translation values (tx ty tz): ");
    scanf("%d %d %d", &tx, &ty, &tz);

    // Draw the original cube
    cleardevice();
    printf("Drawing original cube...\n");
    drawCube(x, y, z, size);
    getch();

    // Translate the cube
    translateCube(&x, &y, &z, tx, ty, tz);

    // Draw the translated cube
    cleardevice();
    printf("Drawing translated cube...\n");
    drawCube(x, y, z, size);
    getch();
    
    //Close graph
    closegraph();
    return 0;
}