#ifndef CONVERTER_H
#define CONVERTER_H

void show_menu(void);
void handle_conversion(int choice);

double celsius_to_fahrenheit(double c);
double fahrenheit_to_celsius(double f);
double celsius_to_kelvin(double c);
double kelvin_to_celsius(double k);

#endif
