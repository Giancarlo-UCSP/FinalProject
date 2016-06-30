#ifndef PALETAS_H_INCLUDED
#define PALETAS_H_INCLUDED

#include <SFML/Graphics.hpp>

#include "bola.h"

class Bola;

class Paleta : public sf::RectangleShape
{
private:
    float VelocidadMovimiento;
    float speed;
public:
    Paleta();
    void MovimientoJugador();
    void MovimientoJugador2();
    void MovimientoPC(sf::Time& Tiempo, Bola& Ball);
};

#endif // PALETAS_H_INCLUDED
