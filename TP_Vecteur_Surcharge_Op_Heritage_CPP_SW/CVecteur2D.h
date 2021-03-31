#pragma once



class CVect2D {
private:
	//Données membres

	float flt_x;
	float flt_y;
public:
	//Constructeurs
	CVect2D(float flt_x = 0.0, float flt_y = 0.0);

	//Cosntructeur de copie
	CVect2D(const CVect2D& Vect);

	//Destructeur
	~CVect2D();

	//Fonctions membres
	//Opérations usuelles
	//Surcharge des opérateurs +, -, * et =
	CVect2D operator +(const CVect2D &Vect)const;
	
	CVect2D operator -(const CVect2D &Vect)const;
	
	CVect2D operator *(const CVect2D &Vect)const;
	
	CVect2D &operator =(const CVect2D &Vect);


	//Fonction amie de CVect2D
	friend bool coincide2D(const CVect2D& Vect1, const CVect2D& Vect2);

	//Fonction d'affichage du vecteur
	void afficheVecteur2D()const;

	//Accesseurs
	float getX()const;
	float getY()const;

	//Mutateurs
	void setX(float flt_x);
	void setY(float flt_y);
};