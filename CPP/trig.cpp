#include <graphics.h>
#include <dos.h>
#include <iostream>
#include <cmath>
using namespace std;

#define float pi 3.1415;

class graph{
    public:
        void headline();
        int draw(int n);
        void axis();
};

int main() {
    graph fn;
    //this will create a window
    initwindow(800, 600, "Trigonometry Equations", 400, 100);

    fn.headline();
    fn.axis();

    cout << "********** All in One **********\n";
    cout << "  1. Sine\n";
    cout << "  2. Cosine\n";
    cout << "  3. Tangent\n";
    cout << "  4. Cosecant\n";
    cout << "  5. Secant\n";
    cout << "  6. Cotangent\n";
    cout << "  7. Clear\n";
    cout << "  8. Exit\n";
    cout << "********************************\n\n";

    int choice;
    while(choice != 8) {
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                fn.draw(choice);  break;
            case 2:
                fn.draw(choice);  break;
            case 3:
                fn.draw(choice);  break;
            case 4:
                fn.draw(choice);  break;
            case 5:
                fn.draw(choice);  break;
            case 6:
                fn.draw(choice);  break;
            case 7:
                cleardevice();
                fn.axis();        break;
            case 8:
                cout << "\nYou are logged out Successfully!!\n";    break;
            default:
                cout << "\nError!!";
        }
    }
    return 0;
}

void graph::headline() {
    cout << "\t\t\t\t\t********************************\n";
    cout << "\t\t\t\t\tGraphs of Trigonometric equations\n";
    cout << "\t\t\t\t\t********************************\n";
}

int graph::draw(int n) {
    //Code for printing the graph of Trigonometric Functions
    int x, y, h, k;
    float pi=3.1415;
    for (int i=-360; i<=360; i++) {
            x = (int) 400+i;
            if(n==1) {
                    setcolor(GREEN);
                    y = (int) 300-sin(i*pi/100)*35; //sin
                    h = (int) 400+(i+1); k = (int) 300-sin((i+1)*pi/100)*35;
                    line(x, y, h, k); }
            else if(n==2) {
                    setcolor(RED);
                    y = (int) 300-cos(i*pi/100)*35; //cos
                    h = (int) 400+(i+1); k = (int) 300-cos((i+1)*pi/100)*35;
                    line(x, y, h, k); }
            else if(n==3) {
                    setcolor(0);
                    y = (int) 300-tan(i*pi/100)*35; //tan
                    line(x, y, x-1, y+4); }
            else if(n==4) {
                    setcolor(GREEN);
                    y = (int) 300-(1/(sin(i*pi/100)*1/35)); // cosec
                    line(x, y, x-1, y+4); }
            else if(n==5) {
                    setcolor(RED);
                    y = (int) 300-(1/(cos(i*pi/100)*1/35)); //sec
                    line(x, y, x-1, y+4); }
            else if(n==6) {
                    setcolor(0);
                    y = (int) 300-(1/(tan(i*pi/100)*1/35)); //cot
                    line(x, y, x-1, y+4); }
            delay(10);
    }
    return 0;
}

void graph::axis() {

    for(int i=0;i<600;i++){
        setcolor(15);
        setlinestyle(1, 5, 5);
        line(0,i,getmaxx(),i);
    }
    for(int j=0;j<getmaxx();j+=20){
        setcolor(0);
        setlinestyle(1,0,1);
        line(0,j,getmaxx(),j);
        line(j,0,j,getmaxx());
    }

    //code for generating x and y axis
    setcolor(BLUE);
    setlinestyle(0,0,2);
    line(60, 300, getmaxx()-72, 300); //x-axis
    line(400, 32, 400, getmaxy()-32); //y-axis
    setcolor(BLACK);
    setbkcolor(WHITE);
    outtextxy((getmaxx()/2)-2, 30, "Y");
    outtextxy(getmaxx()-58, (getmaxy()/2)-5, "X");
    outtextxy(396, getmaxy()-38, "Y");
    outtextxy(37, (getmaxy()/2)-5, "X");

}
