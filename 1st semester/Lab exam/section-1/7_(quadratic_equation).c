#include <stdio.h>
#include <math.h>
int main(){
    float a,b,c,d,root1,root2,real,imagine;
    printf("Enter coefficients a,b and c: ");
    scanf("%f %f %f",&a,&b,&c);
    d=pow(b,2)-(4*a*c);
    if (d>0){
        root1=(-b+sqrt(d))/(2*a);
        root2=(-b-sqrt(d))/(2*a);
        printf("The equation has two real roots: %.2f and %.2f\n",root1,root2);
    } else if(d==0){
        root1=root2=-b/(2*a);
        printf("The equation has one real root: %.2f\n",root1);
    }else{
        real=-b/(2*a);
        imagine=sqrt(-d)/(2*a);
        printf("The equation has two complex roots: %.2f + %.2fi and %.2f - %.2fi\n",real,imagine,real,imagine);
    }
    return 0;
}
