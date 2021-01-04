#pragma once

class Rezistor {
public:
	Rezistor() {}
	Rezistor(double value) : close_zone{ value } {}
	double get_close_zone() const { return close_zone; }
private:
	double close_zone;
};