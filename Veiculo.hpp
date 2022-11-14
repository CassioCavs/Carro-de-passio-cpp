#ifndef VEICULO_HPP
#define VEICULO_HPP
#include <iostream>
#include <string>
using namespace std;

 class Veiculo
 {
 	protected:
 		int Peso;
 		int VelocMax;
 		float Preco;
 	public:
 		Veiculo();
 		Veiculo(int Pe, int Ve, float Pr);
 		void get2();
 		void print2();
 		
 };
 
 #endif
