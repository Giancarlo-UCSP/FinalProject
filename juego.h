#ifndef JUEGO_H_INCLUDED
#define JUEGO_H_INCLUDED

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

#include "configuracion.h"
#include "paletas.h"
#include "bola.h"

class Juego
{
private:
    sf::RenderWindow VentanaPrincipal;
    sf::Font FuenteTitulo;
    sf::Font FuenteJuego;

    sf::Clock Reloj;
    sf::Time Tiempo;

    sf::Texture TextureJuegoMenu;
    sf::Sprite FondoMenu;

    sf::Texture TextureJuego;
    sf::Sprite FondoJuego;

    sf::Music MusicaJuego;

    sf::Event EventoJuego;

    int Estado = Espera;
    enum EstadosJuego {Espera, Menu, CantidadJugadores, MostrarInstrucciones, MostrarCreditos, JugandoUnJugador, JugandoDosJugadores};

    sf::Text Titulo;
    sf::Text Press;
    sf::Text Lista;
    sf::Text MenuJugadores;
    sf::Text Instrucciones;
    sf::Text Creditos;

    sf::RectangleShape BordeIzq;
    sf::RectangleShape BordeDer;
    sf::RectangleShape BordeArr;
    sf::RectangleShape BordeAba;

    Bola BolaJuego;
    Paleta Jugador1;
    Paleta Jugador2;

public:
    Juego();
    void CrearTextos();
    void CrearBordes();
    void SeleccionarOpciones();
    void RestriccionesMenu();
    void EmpezarJuego();
};
#endif // JUEGO_H_INCLUDED
