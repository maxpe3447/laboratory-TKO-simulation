#include <iostream>
//#include <ctime>
#include <cmath>
#include "Rezistor.h"
#include "Metalls.h"

using namespace System;

#define PI 3.1415

	class Phisics {
	public:

		short Term[14] { 15, 20, 25, 30, 35, 40, 45, 50, 55, 60, 65, 70, 75, 80 };
		double R_arr[14], R_termo[14];

		Phisics(Rezistor rez, Metalls metal, Decimal length, Decimal diametr) {
			this->rez = rez;
			this->metal = metal;
			this->length = Decimal::ToDouble(length);
			this->diametr = Decimal::ToDouble(diametr);
			calc_S();
			calc_R_zero();
			calc_R();
			calc_R_zero_termo();
			calc_R_termo();
		}

		double get_Length() const { return this->length; }
		double get_Diametr() const { return this->diametr; }
		double get_ro() { return metal.get_ro(); }
		double get_close_zone() { return  rez.get_close_zone(); }
		int get_zero_error() const { return this->R_zero_termo; }

	private:
		double length{}, diametr{}, S{};
		double R_zero{};
		double rand_error{};
		int R_zero_termo{};
		Rezistor rez;
		Metalls metal;

		void calc_S() { 
			diametr *= 0.001;
			S = (PI * (diametr * diametr)) / 4;
		}

		void calc_R_zero() {
			
			R_zero = (metal.get_ro() * length) / S;
		}

		void calc_R() {

			srand(time(NULL));
			
			for (int i = 0; i < 14; i++)
			{
				rand_error = (rand() % 9 + 1) * 0.01;
				R_arr[i] = R_zero * ((1 + (double)metal.get_alpha() * Term[i]) / (1 + (double)metal.get_alpha() * 20)) * 1000;
				R_arr[i] += rand_error;
			}
		}

		void calc_R_zero_termo() { R_zero_termo = rand() % 30000 + 20000; }

		void calc_R_termo() {
			short Kelvin = 273;
			double Eg = rez.get_close_zone();

			for (int  i = 0; i < 14; i++)
			{
				R_termo[i] = R_zero_termo * exp(5797.0*Eg/(Term[i]+Kelvin)) * 0.000001;
			}
		}
	};

	

