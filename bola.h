#ifndef BOLA_H_INCLUDED
#define BOLA_H_INCLUDED

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include "score.h"

class Bola : public sf::Sprite
{
private:
    sf::Texture TextureBola;
    sf::Vector2f VelocidadBola;
    sf::Sound SonidoBola;
    sf::SoundBuffer Buffer;
public:
    Bola();
    void MovimientoBola(sf::Time& Tiempo,sf::Clock& Reloj, sf::RectangleShape & P1, sf::RectangleShape & P2, Score& Punt);
    float getVelocidadX();
};

#endif // BOLA_H_INCLUDED
