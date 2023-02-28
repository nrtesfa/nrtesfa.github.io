/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <math.h>



namespace geometry {
    
    // 7 functions in this file
    float VolSphere(float Radius)
    {
        return 4.0/3.0*3.14*Radius*Radius*Radius;
    }
    
    float AreaSphere(float Radius)
    {
        return 4.0*3.14*Radius*Radius;
    }
    
    float VolCone(float Radius, float Height)
    {
        return 3.14*Radius*Radius*Height/3.0;
    }
    
    float AreaCone(float Radius, float Height)
    {
        return 3.14*Radius*(Radius+sqrt(Height * Height + Radius * Radius));
    }
    
    float VolCylinder(float Radius, float Height)
    {
        return 3.14*Radius*Radius*Height;
    }
    
    float AreaCylinder(float Radius, float Height)
    {
        return 2.0*3.14*Radius*Height+2.0*3.14*Radius*Radius;
    }
    
    float VolDonut(float R, float r)
    {
        return 2 * 3.14 * 3.14 * R * r * r;
    }

};

