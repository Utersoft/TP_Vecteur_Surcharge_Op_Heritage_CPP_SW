#pragma once
#include "CVecteur2D.h"

class CVect3D : public CVect2D {
private:
	//Donn�es membres
	float flt_z;

public:
	//Constructeurs
	CVect3D(float flt_x = 0.0, float flt_y = 0.0, float flt_z = 0.0);

	//Constructeurs de copie
	CVect3D(const CVect3D& Vect);

	//Surcharge d'op�rateur +, -, * et =
	CVect3D operator +(const CVect3D& Vect)const;
	CVect3D operator -(const CVect3D& Vect)const;
	CVect3D operator *(const CVect3D& Vect)const;
	CVect3D &operator =(const CVect3D& Vect);

	//Fonction amie qui permet de comparer 2 vecteurs et de voir s'ils sont �gaux
	friend bool coincide3D(CVect3D Vect1, CVect3D Vect2);

	//Fonction affiche
	void affichVecteur3d()const;
};
