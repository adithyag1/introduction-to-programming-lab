#include<stdio.h>
float sqrt(float n){
    float g=n/2.0;
    do{
        g=(n/g+g)/2.0;
    }while((n/g+g)/2.0-g>0.00001||(n/g+g)/2.0-g<-0.00001);
    return (n/g+g)/2.0;
}
void main(){
    float a,b,c;
    printf("Quadratic equation is of the form ax^2+bx+c=0\nEnter a,b,c values: ");
    scanf("%f %f %f",&a,&b,&c);
    printf("The roots are %f and %f",(-b+sqrt(b*b-4*a*c))/(2*a),(-b-sqrt(b*b-4*a*c))/(2*a));
}
