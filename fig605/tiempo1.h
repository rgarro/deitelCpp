#ifndef TIEMPO1_H
#define TIEMPO1_H

class Tiempo {
public:
	Tiempo();
	void setTime(int,int,int);
	void printUniversal();
	void printStandard();
private:
	int hour;
	int minute;
	int second;
}