#include "pantallas.h"

void PantallaInicial::MostrarPantalla(sf::RenderWindow& Ventana, sf::Sprite& Fondo)
{
    FuenteTitulo.loadFromFile("deadjim.ttf");
    FuenteContenido.loadFromFile("daville.ttf");

    Titulo.setString("PONG!");
    Titulo.setPosition(170,70);
    Titulo.setCharacterSize(200);
    Titulo.setColor(sf::Color(154,205,50));
    Titulo.setFont(FuenteTitulo);

    Contenido.setString("Presione cualquier Tecla.");
    Contenido.setPosition(208,400);
    Contenido.setCharacterSize(30);
    Contenido.setColor(sf::Color::White);
    Contenido.setFont(FuenteContenido);

    Ventana.draw(Fondo);
    Ventana.draw(Titulo);
    Ventana.draw(Contenido);
}

void PantallaMenu::MostrarPantalla(sf::RenderWindow& Ventana, sf::Sprite& Fondo)
{
    FuenteTitulo.loadFromFile("deadjim.ttf");
    FuenteContenido.loadFromFile("daville.ttf");

    Titulo.setString("PONG!");
    Titulo.setPosition(170,70);
    Titulo.setCharacterSize(200);
    Titulo.setColor(sf::Color(154,205,50));
    Titulo.setFont(FuenteTitulo);

    Contenido.setString("1. Jugar.\t\t2. Instrucciones.\n\n3. Creditos.\t 4. Salir.");
    Contenido.setPosition(155,350);
    Contenido.setCharacterSize(30);
    Contenido.setColor(sf::Color::White);
    Contenido.setFont(FuenteContenido);

    Ventana.draw(Fondo);
    Ventana.draw(Titulo);
    Ventana.draw(Contenido);
}

void PantallaJugadores::MostrarPantalla(sf::RenderWindow& Ventana, sf::Sprite& Fondo)
{
    FuenteTitulo.loadFromFile("deadjim.ttf");
    FuenteContenido.loadFromFile("daville.ttf");

    Titulo.setString("PONG!");
    Titulo.setPosition(170,70);
    Titulo.setCharacterSize(200);
    Titulo.setColor(sf::Color(154,205,50));
    Titulo.setFont(FuenteTitulo);

    Contenido.setString("A. Un jugador.\n\nZ. Dos jugadores.");
    Contenido.setPosition(155,350);
    Contenido.setCharacterSize(30);
    Contenido.setColor(sf::Color::White);
    Contenido.setFont(FuenteContenido);

    Ventana.draw(Fondo);
    Ventana.draw(Titulo);
    Ventana.draw(Contenido);
}

void PantallaInstrucciones::MostrarPantalla(sf::RenderWindow& Ventana, sf::Sprite& Fondo)
{
    FuenteTitulo.loadFromFile("deadjim.ttf");
    FuenteContenido.loadFromFile("daville.ttf");

    Titulo.setString("PONG!");
    Titulo.setPosition(170,70);
    Titulo.setCharacterSize(200);
    Titulo.setColor(sf::Color(154,205,50));
    Titulo.setFont(FuenteTitulo);

    Contenido.setString("Bienvenido a PONG!, seleccione el Modo de Juego.\nUse las teclas 'Arriba' y 'Abajo' para mover al Jugador 1.\nUse las teclas 'W' y 'S' para mover al Jugador 2.\n\nPara regresar al Menu Principal presione 'B'.");
    Contenido.setPosition(120,300);
    Contenido.setCharacterSize(20);
    Contenido.setColor(sf::Color::White);
    Contenido.setFont(FuenteContenido);

    Ventana.draw(Fondo);
    Ventana.draw(Titulo);
    Ventana.draw(Contenido);
}

void PantallaCreditos::MostrarPantalla(sf::RenderWindow& Ventana, sf::Sprite& Fondo)
{
    FuenteTitulo.loadFromFile("deadjim.ttf");
    FuenteContenido.loadFromFile("daville.ttf");

    Titulo.setString("PONG!");
    Titulo.setPosition(170,70);
    Titulo.setCharacterSize(200);
    Titulo.setColor(sf::Color(154,205,50));
    Titulo.setFont(FuenteTitulo);

    Contenido.setString("Juego creado por:\n\tGiancarlo Andre Anco Valdivia.\n\tgiancarlo.anco@ucsp.edu.pe\n\nPresione 'B' para regresar al Menu Principal.");
    Contenido.setPosition(120,300);
    Contenido.setCharacterSize(25);
    Contenido.setColor(sf::Color::White);
    Contenido.setFont(FuenteContenido);

    Ventana.draw(Fondo);
    Ventana.draw(Titulo);
    Ventana.draw(Contenido);
}

void PantallaWinJ1::MostrarPantalla(sf::RenderWindow& Ventana, sf::Sprite& Fondo)
{
    FuenteTitulo.loadFromFile("deadjim.ttf");
    FuenteContenido.loadFromFile("daville.ttf");

    Titulo.setString("PONG!");
    Titulo.setPosition(170,70);
    Titulo.setCharacterSize(200);
    Titulo.setColor(sf::Color(154,205,50));
    Titulo.setFont(FuenteTitulo);

    Contenido.setString("El Jugador 1 ganó.");
    Contenido.setPosition(200,300);
    Contenido.setCharacterSize(40);
    Contenido.setColor(sf::Color::White);
    Contenido.setFont(FuenteContenido);

    Ventana.draw(Fondo);
    Ventana.draw(Titulo);
    Ventana.draw(Contenido);
}

void PantallaWinJ2::MostrarPantalla(sf::RenderWindow& Ventana, sf::Sprite& Fondo)
{
    FuenteTitulo.loadFromFile("deadjim.ttf");
    FuenteContenido.loadFromFile("daville.ttf");

    Titulo.setString("PONG!");
    Titulo.setPosition(170,70);
    Titulo.setCharacterSize(200);
    Titulo.setColor(sf::Color(154,205,50));
    Titulo.setFont(FuenteTitulo);

    Contenido.setString("El Jugador 2 ganó.");
    Contenido.setPosition(200,300);
    Contenido.setCharacterSize(40);
    Contenido.setColor(sf::Color::White);
    Contenido.setFont(FuenteContenido);

    Ventana.draw(Fondo);
    Ventana.draw(Titulo);
    Ventana.draw(Contenido);
}
