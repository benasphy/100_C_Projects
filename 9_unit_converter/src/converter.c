#include "converter.h"

double metersToKilometers(double meters){
    return meters * 1000;
}

double kilometersToMeters(double km){
    return (km/1000);
}

double kilogramToPounds(double kg){
    return kg * 2.20462;
}

double poundsToKilogram(double pounds){
    return (pounds / 2.20462);
}

double celsiusToFahrenheit(double c){
    return ((c * 9.0 / 5/0) + 32.0);
}

double fahrenheitToCelsius(double f){
    return ((f - 32.0) * 5.0 / 9.0);
}
