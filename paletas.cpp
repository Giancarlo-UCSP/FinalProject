#include "paletas.h"
#include "configuracion.h"

Paleta::Paleta()
{
    this->setSize(sf::Vector2f(Borde,90));
    this->setOutlineThickness(3);
    this->VelocidadMovimiento = 100;
    this->speed = 300.f;
}

void Paleta::MovimientoJugador()
{
    this->setOrigin(-3,-300);
    this->setFillColor(sf::Color(99,184,255));
    this->setOutlineColor(sf::Color(25,25,112));

    float Top = this->getGlobalBounds().top;
    float Bottom = this->getGlobalBounds().top + this->getGlobalBounds().height;

    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Up) && Top > 0)
    {
        this->move(0,-VelocidadMovimiento/10.0);
    }


    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down) && Bottom < Alto)
    {
        this->move(0,VelocidadMovimiento/10.0);
    }
}

void Paleta::MovimientoJugador2()
{
    this->setOrigin(-787,-300);
    this->setFillColor(sf::Color(227,168,105));
    this->setOutlineColor(sf::Color(139,69,19));

    float Top = this->getGlobalBounds().top;
    float Bottom = this->getGlobalBounds().top + this->getGlobalBounds().height;

    if(sf::Keyboard::isKeyPressed(sf::Keyboard::W) && Top > 0)
    {
        this->move(0,-VelocidadMovimiento/10.0);
    }

    if(sf::Keyboard::isKeyPressed(sf::Keyboard::S) && Bottom < Alto)
    {
        this->move(0,VelocidadMovimiento/10.0);
    }
}

void Paleta::MovimientoPC(Bola& Ball)
{
    this->setOrigin(-787,-20);
    this->setFillColor(sf::Color(227,168,105));
    this->setOutlineColor(sf::Color(139,69,19));

    float Top = this->getGlobalBounds().top;
    float Bottom = this->getGlobalBounds().top + this->getGlobalBounds().height;

    if ((Ball.getPosition().y < this->getPosition().y) && Top > 0)
		this->move(0, -VelocidadMovimiento/15.0);

    else if(((Ball.getPosition().y + 20) > (this->getPosition().y+this->getSize().y)) && Bottom < Alto)
		this->move(0, VelocidadMovimiento/15.0);
}



