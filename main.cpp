#include <iostream>
#include<cmath>;

    int side;
    int donnerCote()
    {
        do{
        
        std::cout<<"Entrer la cote : "<<std::endl;
        std::cin>>side;
        }while(side<=0);
        return side;
    }
    double calculerHauteur(int a)
    {
        double b=a*(sqrt(3))/2;
        
           return b;     
        }
    void afficherDetail(double hauteur_hex, double largeur_hex)
    {
        std::cout<<"Hauteur :" <<hauteur_hex<<std::endl;
        std::cout<<"Largeur :" <<largeur_hex<<std::endl;
        }
    
int main()
{

      int x=donnerCote();  
       double y=calculerHauteur(x); 
       afficherDetail(y,x );
}
