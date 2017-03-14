#include<iostream>
#include<cmath>
using namespace std;
void cubicFormula(float a, float b, float c, float d, float *results)

{cin>>a>>b>>c>>d;
    float a2 = a*a;
    float b2 = b*b;
    float b3 = b2*b;

    float q = (3*c- b2)/9;
    float q2 = q*q;
    float q3 = q2*q;
    float r = -27*d + b*(9*c-2*b2);
    float r2 = r*r;

    float discriminant = q3 + r2;

    float s = r + sqrtf(discriminant);
    float t = r - sqrtf(discriminant);

    float term1 = powf((-t + s)/2, 1/3.);

    float r13= 2 * sqrtf(q);

    results[0] = (- term1 + r13 * cosf(q3/3));
    results[1] = (- term1 + r13 * cosf(q3 + (2*M_PI)/3));
    results[2] = (- term1 + r13 * cosf(q3 + (4*M_PI)/3));
}
int main(){

cubicformula;


}
