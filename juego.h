#ifndef JUEGO_H_INCLUDED
#define JUEGO_H_INCLUDED

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

#include "configuracion.h"
#include "texto.h"

class Juego
{
private:
    sf::RenderWindow VentanaPrincipal;
    sf::Font Fuente;

    sf::Texture TextureJuego;
    sf::Sprite Fondo;

    sf::Music MusicaJuego;

    sf::Event EventoJuego;

    int Estado = Espera;
    enum EstadosJuego {Espera, Menu, Jugando};

    sf::Text Titulo;
    sf::Text Press;
    sf::Text Lista;
    //Texto TituloMenu;
    //Texto Presione;

public:
    Juego();
    void EmpezarJuego();
};
#endif // JUEGO_H_INCLUDED
