#ifndef PANTALLAS_H_INCLUDED
#define PANTALLAS_H_INCLUDED

#include <SFML/Graphics.hpp>

class Pantallas
{
protected:
    sf::Text Titulo;
    sf::Text Contenido;
    sf::Font FuenteTitulo;
    sf::Font FuenteContenido;
public:
    virtual void MostrarPantalla(sf::RenderWindow& Ventana, sf::Sprite& Fondo)=0;
};

class PantallaInicial : public Pantallas
{
public:
    void MostrarPantalla(sf::RenderWindow& Ventana, sf::Sprite& Fondo);
};

class PantallaMenu : public Pantallas
{
public:
    void MostrarPantalla(sf::RenderWindow& Ventana, sf::Sprite& Fondo);
};

class PantallaJugadores : public Pantallas
{
public:
    void MostrarPantalla(sf::RenderWindow& Ventana, sf::Sprite& Fondo);
};

class PantallaInstrucciones : public Pantallas
{
public:
    void MostrarPantalla(sf::RenderWindow& Ventana, sf::Sprite& Fondo);
};

class PantallaCreditos : public Pantallas
{
public:
    void MostrarPantalla(sf::RenderWindow& Ventana, sf::Sprite& Fondo);
};




#endif // PANTALLAS_H_INCLUDED
