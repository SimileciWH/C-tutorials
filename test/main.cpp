#include <iostream>
#include <math.h>
#include <cmath>

#include "/home/simileciwh/simileciwh_Library/linear_equation/linear_equation.h"
#include "/home/simileciwh/simileciwh_Library/closetolinear/closetolinear.h"

using namespace std;

#define RUN
#define INF 9999

int main()
{
#ifdef RUN
//    linear_e equ1,equ2,equ3;
//    equ1.linear_equation_two_point(1,1,2,2);
//    equ1.display();

//    equ2.linear_equation_intercept_xy(-2,2);
//    equ2.display();

//    equ3.linear_equation_point_slpoe(3,3,0);
//    equ3.display();

//    equ3.normal_equation(1,1,INF);
//    equ3.display();
    float seta = 0.0;
    seta = move_close_line(0.2,1.0,-1.0,0.0,2,0.5,0,400);
    cout << "seta = "<< seta << endl;
    cout << "line seta = " << atan(1) << endl;
#endif
    return 0;
}

