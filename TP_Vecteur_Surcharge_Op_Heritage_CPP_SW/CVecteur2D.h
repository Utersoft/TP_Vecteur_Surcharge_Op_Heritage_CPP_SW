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
	CVect2D(CVect2D& Vect);

	//Destructeur
	~CVect2D();

	//Fonctions membres
	//Opérations usuelles
	//Addition de deux vecteurs
	CVect2D sommeVecteur2D(CVect2D& Vect)const;

	//Soustraction de deux vecteurs
	CVect2D soustractionVecteur2D(CVect2D& Vect)const;

	//Multiplication de 2 vecteurs
	CVect2D multiplicationVecteur2D(CVect2D& Vect)const;

	//Fonction amie de CVect2D
	friend bool coincide2D(CVect2D& const Vect1, CVect2D& const Vect2);

	//Fonction d'affichage du vecteur
	void afficheVecteur2D();

	//Accesseurs
	float getX();
	float gety();

	//Mutateurs
	void setX(float flt_x);
	void setY(float flt_y);
};