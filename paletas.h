#ifndef PALETAS_H_INCLUDED
#define PALETAS_H_INCLUDED

#include <SFML/Graphics.hpp>

class Paleta : public sf::RectangleShape
{
private:
    float VelocidadMovimiento;
public:
    Paleta();
    void MovimientoJugador();
    void MovimientoJugador2();
    void MovimientoPC();
};

#endif // PALETAS_H_INCLUDED
