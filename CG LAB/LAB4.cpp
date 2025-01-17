//2D translation with all factors

#include<iostream>
#include<conio.h>
#include<math.h>
#include<graphics.h>
void main()
{
    int dg = DETECT,gm,ch,tx,ty,theta,sx,sy;
    initgraph(&dg,&gm,"C:\\TURBOC3\\BGI");
    cout<<"Transformation are \n"<<"\t 1.Translations\n"<<"\t 2.Rotation\n" << "\t 3.Scaling\n" <<endl;
    cin>>ch;
    switch(ch)
    {
        case 1:{
            cout<<"its translation"<<endl;
            rectangle(200,200,300,300);
            cout<<"enter translation amount\n";
            cin>>tx>>ty;
            rectangle(200 + tx, 200 + ty, 300 + tx , 300 + ty);
            break;
        }

        case 2:{
            cout<<"its rotation"<<endl;
            rectangle(200,200,300,300);
            cout<<"Enter the angle of rotation"<<endl;
            cin>>theta;
            theta=(theta *)/100;
            rectangle(200,200,(200-300)*cos(theta) - (300-200) * sin(theta),(300-200)*sin(theta)+(300-200)*cos(theta));
            break;
        }

        case 3:{
            cout<<"its scaling"<<endl;
            rectangle(200,200,300,300);
            cout<<"Enter scaling factors" <<endl;
            cin>>sx>>sy;
            rectangle(200,200,(200-300)*sx,(300-200)*sy);
            break;
        }

        default:
        {
            cout<<"Wrong Choice"<<endl;
            break;
        }
    }
getch();
closegraph();

}