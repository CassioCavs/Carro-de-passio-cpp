#ifndef CARROPASSEIO_HPP
#define CARROPASSEIO_HPP
#include "Motor.hpp"
#include "Veiculo.hpp"
#include <iostream>
#include <string>
using namespace std;
class CarroPasseio : public Motor, public Veiculo
{
	private:
		string Cor;
		string Modelo;
	public: 
 		CarroPasseio();
 		CarroPasseio(string Cr, string Mod, int ncilindro, int npotencia, int npeso, int velocmax, float npreco);
 		void get3();
 		void print3();
};

#endif
