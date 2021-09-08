#include <stepin_Electricity-billingsystem.h>

float southern(float units){
    
    if (units <= 20)

    return units * 3;

    else if (units <= 30)

    return units * 7;

    else if (units <= 50)

   return units * 8.5;

    else if (units <= 150)

   return units * 10;

    else if (units <= 250)

    return units * 11;

    else if (units <= 400)

     units * 12;

    else return units * 13;
}float northern(float units){
    
    if (units <= 20)

    return units * 2;

    else if (units <= 30)

    return units * 4;

    else if (units <= 50)

   return units * 6;

    else if (units <= 150)

   return units * 9;

    else if (units <= 250)

    return units * 15.5;

    else if (units <= 400)

     units * 19;

    else return units * 19.5;
}
float northeast(float units){
    
    if (units <= 20)

    return units * 4;

    else if (units <= 30)

    return units * 5;

    else if (units <= 50)

   return units * 8.5;

    else if (units <= 150)

   return units * 9;

    else if (units <= 250)

    return units * 11.5;

    else if (units <= 400)

     units * 14;

    else return units * 15;
}
float centralgrid(float units){
    
    if (units <= 20)

    return units * 3;

    else if (units <= 30)

    return units * 7;

    else if (units <= 50)

   return units * 8.5;

    else if (units <= 150)

   return units * 10;

    else if (units <= 250)

    return units * 11;

    else if (units <= 400)

     units * 12;

    else return units * 13;
}
float centralgrid(float units){
    
    if (units <= 20)

    return units * 1;

    else if (units <= 30)

    return units * 5;

    else if (units <= 50)

   return units * 5.5;

    else if (units <= 150)

   return units * 10;

    else if (units <= 250)

    return units * 11;

    else if (units <= 400)

     units * 12;

    else return units * 13;
}
