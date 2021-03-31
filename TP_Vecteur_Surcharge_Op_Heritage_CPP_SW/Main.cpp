#include "CVecteur2D.h"
#include "Vecteur3D.h"
#include <iostream>

using namespace std;


int main() {

	//Création de 2 vecteurs 3d
	CVect3D Vecteur3D1(4.0, 8.0, 5.0);
	CVect3D Vecteur3D2(3.0, 3.5, 4.5);

	//Copie d'un vecteur3d
	CVect3D Vecteur3D3(Vecteur3D1);

	Vecteur3D3.affichVecteur3d();

	//Vecteur3D3 = Vecteur3D1 + Vecteur3D2;
	//Vecteur3D3 = Vecteur3D1 * Vecteur3D2;
	Vecteur3D3 = Vecteur3D1 - Vecteur3D2;

	Vecteur3D3.affichVecteur3d();

	cout << coincide3D(Vecteur3D1, Vecteur3D2) << endl;
	cout << coincide3D(Vecteur3D1, Vecteur3D3) << endl;


	return 0;
}