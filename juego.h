#ifndef JUEGO_H_INCLUDED
#define JUEGO_H_INCLUDED

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

#include "configuracion.h"
#include "pantallas.h"
#include "paletas.h"
#include "bola.h"
#include "score.h"

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
    enum EstadosJuego {Espera, Menu, CantidadJugadores, MostrarInstrucciones, MostrarCreditos, JugandoUnJugador, JugandoDosJugadores, GanoJugador1, GanoJugador2};

    sf::Text Titulo;
    sf::Text Press;
    sf::Text Lista;
    sf::Text MenuJugadores;
    sf::Text Instrucciones;
    sf::Text Creditos;
    sf::Text WinJ1;
    sf::Text WinJ2;

    PantallaInicial PI;
    PantallaMenu PM;
    PantallaJugadores PJ;
    PantallaInstrucciones PIn;
    PantallaCreditos PC;
    PantallaWinJ1 J1;
    PantallaWinJ2 J2;

    Bola BolaJuego;
    Paleta Jugador1;
    Paleta Jugador2;
    Score ScoreJuego;

    void CrearTextos();
    void SeleccionarOpciones();
    void RestriccionesMenu();
    void VerificarGanador();

    //Singleton
    Juego();
    static Juego* Singleton;
public:
    //Singleton
    static Juego* getSingleton();
    void EmpezarJuego();
};
#endif // JUEGO_H_INCLUDED
