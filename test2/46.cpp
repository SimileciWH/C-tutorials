#include "string.h"
#include "iostream"
#include "time.h"


typedef union
{
    int ui;
    char uc[4];
}typechange;


int main()
{
    //char a[0]={0xb4,0xa2,0xfe,0xff };
    clock_t start_time, end_time;
    start_time = clock();
    int b=0;
    double use_time;
    for(int i=0;i<100;i++){
    typechange change;
    change.uc[0]=0xb4;
    change.uc[1]=0xa2;
    change.uc[2]=0xfe;
    change.uc[3]=0xff;
    b=change.ui;
    std::cout << "b= " << b << std::endl;}
    end_time = clock();
    use_time = (double)(end_time-start_time)/CLOCKS_PER_SEC;
    std::cout << "runtime is : " << use_time << 's' << std::endl;
	return 0;
}
