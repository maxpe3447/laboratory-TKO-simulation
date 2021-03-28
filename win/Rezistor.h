#pragma once

class Rezistor {
public:
	Rezistor() {}
	Rezistor(double Eg, double y) : close_zone{ Eg }, y{y} {}
	double get_close_zone() const { return close_zone; }
	double get_y() const { return y; }
private:
	double close_zone, y;
};