#include <iostream>
#include <ctime>
using namespace std;
#include <math.h>
// declaracion de las constantes de la masa inmovil y grande 

//declaracion de variable 
double G; 
double M;
double x; 
double x_0 = 0.0;
double v_0 = 0.0;
// declaracion de las funciones 
double calc_derVel(double x0 ,double v0, double t0);
double frog(double x0, double v0, double t0); 

// definimos las funciones declaradas

double calc_derVel(double x ,double v, double t0){
	return (-G*M)/pow(x,2); 
}

//definimos la funcion leap-frog para actualizar la vel y la posicion de la particula de masa pequeña. 
double frog(double x0, double v0, double t0){

double V_adelante;
double X_adelante; 
double t_adelante;
	
	

while (x>0.01*x0){
	
	V_adelante = (calc_derVel(x0,v0,t0) * 2*t0) + v0;
	X_adelante = (v0*2*t0) + x0;
 	x0 = X_adelante; 
	v0 = V_adelante; 
	t0 = t_adelante; 	

	cout << X_adelante << " " << V_adelante << t_adelante << endl; 
	


}
	


}


int main(){
int G = 10; 
int M= 1000; 

frog(0.0,0.0,0.0);





return 0; 

}
