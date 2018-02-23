
#include "LaborkaConfig.h"
#ifdef USE_TRIGONOMETRY_DEGREE
#include "trygonometria.h"
#else
#include "cmath"
#define _USE_MATH_DEFINES
#endif
int main(){
    
    
#ifdef USE_TRIGONOMETRY_DEGREE
    double a=degreemath::sin( 0);
    double b=degreemath::cos( 45);
    double c=degreemath::tan( 90);
    
#else
    double a=std::sin( 0);
    double b=std::cos( 45);
    double c=std::tan( 90);
#endif
    
    return a;
    
}
