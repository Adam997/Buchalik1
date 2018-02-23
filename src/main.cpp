
#include "LaborkaConfig.h"
#include "iostream"
#ifdef USE_TRIGONOMETRY_DEGREE
#include "trygonometria.h"
#else
#include "cmath"
#define _USE_MATH_DEFINES
#endif





int main(int argc, char** argv){
    double liczba;
    if(argc>1){
         liczba = std::stod(argv[1]);
    }
    
#ifdef USE_TRIGONOMETRY_DEGREE
    double a=degreemath::sin( liczba);
    double b=degreemath::cos( liczba);
    double c=degreemath::tan( liczba);
    std::cout<<a<<std::endl;
#else
    double a=std::sin( liczba);
    double b=std::cos( liczba);
    double c=std::tan( liczba);
#endif
    
    return a;
    
}
