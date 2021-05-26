#include <stdio.h>
int main ()
{
    int angulo, volta;
    printf("\nInsira o angulo:\n");
    scanf("%d", &angulo);
    if(angulo>360 || angulo<-360)
    {
        volta = angulo/360;
        angulo = angulo%360;
    }
    else {
        volta = 0;
    }
    if(angulo==0 || angulo==90 || angulo==180 || angulo==270 || angulo==360 || angulo==-90 || angulo==-180 || angulo==-270 || angulo ==-360)
    {
        printf("\nEsta em cima de algum dos eixos\n");
    }
    if((angulo>0 && angulo<90) || (angulo<-270 && angulo>-360))
    {
        printf("\n Pertence ao 1 quadrante\n");
    }
    if((angulo>90 && angulo<180) || angulo<-180 && angulo>-270)
    {
        printf("\n Pertence ao 2 quadrante\n");
    }
    if((angulo>180 && angulo<270) || (angulo<-90 && angulo>-100))
    {
        printf("\n Pertence ao 3 quadrante\n");
    }
    if((angulo>270 && angulo<360) || (angulo<0 && angulo>-90))
    {
        printf("\n Pertence ao 4 quadrante\n");
    }
    if(angulo<0)
    {
        printf("\nSentido horario\n");
    }
    else{
        printf("\nSentido anti-horario\n");
    }
    return 0;
}