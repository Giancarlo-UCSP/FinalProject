#include "bola.h"
#include "configuracion.h"

Bola::Bola()
{
    TextureBola.loadFromFile("Imagenes/Bola.png");
    this->setTexture(TextureBola);

    this->Buffer.loadFromFile("Musica/hitball.wav");
    this->SonidoBola.setBuffer(Buffer);

    this->setOrigin(this->getGlobalBounds().width/10.0f, this->getGlobalBounds().height/10.0f);
    this->setPosition(Ancho/2.0f, Alto/2.0f);

    this->VelocidadBola.x = 350.0f;
    this->VelocidadBola.y = 350.0f;
}

void Bola::MovimientoBola(sf::Time& Tiempo, sf::Clock& Reloj, sf::RectangleShape & P1, sf::RectangleShape & P2, Score& Punt)
{
    float IzquierdaBola = this->getPosition().x - this->getOrigin().x;
    float DerechaBola = this->getPosition().x + this->getOrigin().x;
    float ArribaBola = this->getPosition().y - this->getOrigin().y;
    float AbajoBola = this->getPosition().y + this->getOrigin().y;

    if (IzquierdaBola < 0 && VelocidadBola.x < 0)
    {
        this->VelocidadBola.x *= -1;
        this->SonidoBola.play();
        Punt.AnadirPuntoJugador2();
        this->setOrigin(this->getGlobalBounds().width/10.0f, this->getGlobalBounds().height/10.0f);
        this->setPosition(Ancho/2.0f, Alto/2.0f);
    }

    if (DerechaBola > Ancho && VelocidadBola.x > 0)
    {
        this->VelocidadBola.x*= -1;
        this->SonidoBola.play();
        Punt.AnadirPuntoJugador1();
        this->setOrigin(this->getGlobalBounds().width/10.0f, this->getGlobalBounds().height/10.0f);
        this->setPosition(Ancho/2.0f, Alto/2.0f);
    }

    if ((ArribaBola < 0 && VelocidadBola.y < 0) || (AbajoBola > Alto && VelocidadBola.y > 0))
    {
        this->VelocidadBola.y *= -1;
        this->SonidoBola.play();
    }

    sf::FloatRect r1=P1.getGlobalBounds();
	sf::FloatRect r2=P2.getGlobalBounds();

    if (this->getGlobalBounds().intersects(r1) || this->getGlobalBounds().intersects(r2))
    {
        this->VelocidadBola.x *= -1;
        this->SonidoBola.play();
    }

    this->move(Tiempo.asSeconds() * this->VelocidadBola.x, Tiempo.asSeconds() * this->VelocidadBola.y);
}

float Bola::getVelocidadX()
{
    return VelocidadBola.x;
}
