#include "juego.h"

void Juego::CrearTextos()
{
    Titulo.setString("PONG!");
    Titulo.setPosition(170,70);
    Titulo.setCharacterSize(200);
    Titulo.setColor(sf::Color(154,205,50));
    Titulo.setFont(FuenteTitulo);

    Press.setString("Presione cualquier Tecla.");
    Press.setPosition(208,400);
    Press.setCharacterSize(30);
    Press.setColor(sf::Color::White);
    Press.setFont(FuenteJuego);

    Lista.setString("1. Jugar.\t\t2. Instrucciones.\n\n3. Creditos.\t 4. Salir.");
    Lista.setPosition(155,350);
    Lista.setCharacterSize(30);
    Lista.setColor(sf::Color::White);
    Lista.setFont(FuenteJuego);

    MenuJugadores.setString("A. Un jugador.\n\nZ. Dos jugadores.");
    MenuJugadores.setPosition(155,350);
    MenuJugadores.setCharacterSize(30);
    MenuJugadores.setColor(sf::Color::White);
    MenuJugadores.setFont(FuenteJuego);

    Instrucciones.setString("Bienvenido a PONG!, seleccione el Modo de Juego.\nUse las teclas 'Arriba' y 'Abajo' para mover al Jugador 1.\nUse las teclas 'W' y 'S' para mover al Jugador 2.\n\nPara regresar al Menu Principal presione 'B'.");
    Instrucciones.setPosition(120,300);
    Instrucciones.setCharacterSize(20);
    Instrucciones.setColor(sf::Color::White);
    Instrucciones.setFont(FuenteJuego);

    Creditos.setString("Juego creado por:\n\tGiancarlo Andre Anco Valdivia.\n\tgiancarlo.anco@ucsp.edu.pe\n\nPresione 'B' para regresar al Menu Principal.");
    Creditos.setPosition(120,300);
    Creditos.setCharacterSize(25);
    Creditos.setColor(sf::Color::White);
    Creditos.setFont(FuenteJuego);
}
