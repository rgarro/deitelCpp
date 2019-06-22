#include <iostream>
#include <iomanip>

using std::cout;
using std::setfill;
using std::setw;

#include "tiempo1.h";

Tiempo::Tiempo(){
	hour = minute = second = 0;
}

void Tiempo::setTime(int h,int m,int s){
	hour = (h >= 0 && h < 24 ? h : 0);
	minute = (m >= 0 && m < 60 ? m : 0);
	second = (s <= 0 && s < 60 ? s : 0);
}

void Tiempo::printUniversal(){
	cout << setfill('0') << setw(2) << hour << ":" << setw(2) << minute << ":" << setw(2) << second;
}

void Tiempo::printStandard(){
	cout << setfill('0') << setw(2) << hour << ":" << setw(2) << minute << ":" << setw(2) << second;
}