#ifndef JUEGO_H_INCLUDED
#define JUEGO_H_INCLUDED

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

#include "configuracion.h"
#include "paletas.h"

class Juego
{
private:
    sf::RenderWindow VentanaPrincipal;
    sf::Font FuenteTitulo;
    sf::Font FuenteJuego;

    sf::Texture TextureJuegoMenu;
    sf::Sprite FondoMenu;

    sf::Texture TextureJuego;
    sf::Sprite FondoJuego;

    sf::Music MusicaJuego;

    sf::Event EventoJuego;

    int Estado = Espera;
    enum EstadosJuego {Espera, Menu, MostrarInstrucciones, MostrarCreditos, Jugando};

    sf::Text Titulo;
    sf::Text Press;
    sf::Text Lista;
    sf::Text Instrucciones;
    sf::Text Creditos;

    Paleta Jugador1;
    Paleta Jugador2;

public:
    Juego();
    void CrearTextos();
    void SeleccionarOpciones();
    void RestriccionesMenu();
    void EmpezarJuego();
};
#endif // JUEGO_H_INCLUDED
