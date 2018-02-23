#include "trygonometria.h"
#include <cmath>
double degreemath::sin(double degree) {
    double radiany = M_PI*degree/180;
         return std::sin(radiany);   //funkcja biblioteczna z piku <cmath>
}
double degreemath::cos(double degree) {
    double radiany = M_PI*degree/180;
    return std::cos(radiany);   //funkcja biblioteczna z piku <cmath>
}
double degreemath::tan(double degree) {
    double radiany = M_PI*degree/180;
    return std::tan(radiany);   //funkcja biblioteczna z piku <cmath>
}

double degreemath::ctan(double degree) {
    double radiany = M_PI*degree/180;
    return 1/std::tan(radiany); //funkcja biblioteczna z piku <cmath>
}
