#pragma once
class Metalls
{
public:
	Metalls(){};
	Metalls(double ro, double alpha) : ro{ ro }, alpha{ alpha } {}

	double get_ro() const  { return ro; }

	double get_alpha() const  { return alpha; }

private:
	double ro;
	double alpha;
};