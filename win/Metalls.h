#pragma once
class Metalls
{
public:
	Metalls() : ro{ 0 }, alpha{ 0 } {};
	Metalls(double ro, double alpha) : ro{ ro }, alpha{ alpha } {}

	double get_ro() { return ro; }

	double get_alpha() { return alpha; }

private:
	double ro;
	double alpha;
};