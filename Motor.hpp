#ifndef MOTOR_HPP
#define MOTOR_HPP

#include <iostream>
#include <string>


using namespace std;


	class Motor
	{
		protected:
			int NumCilindro;
			int Potencia;
		public:
			Motor();
			Motor(int C, int P);
			void get();
			void print();
			
	};


#endif
