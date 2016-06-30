#include "juego.h"

void Juego::SeleccionarOpciones()
{

    switch (Estado)
        {
        case Espera:
            VentanaPrincipal.draw(FondoMenu);
            VentanaPrincipal.draw(Titulo);
            VentanaPrincipal.draw(Press);
            break;

        case Menu:
            VentanaPrincipal.draw(FondoMenu);
            VentanaPrincipal.draw(Titulo);
            VentanaPrincipal.draw(Lista);
            break;

        case CantidadJugadores:
            VentanaPrincipal.draw(FondoMenu);
            VentanaPrincipal.draw(Titulo);
            VentanaPrincipal.draw(MenuJugadores);
            break;

        case JugandoUnJugador:
            Tiempo=Reloj.restart();
            VentanaPrincipal.draw(FondoJuego);
            VentanaPrincipal.draw(Jugador1);
            VentanaPrincipal.draw(Jugador2);
            VentanaPrincipal.draw(BolaJuego);
            VentanaPrincipal.draw(BordeAba);
            VentanaPrincipal.draw(BordeArr);
            VentanaPrincipal.draw(BordeIzq);
            VentanaPrincipal.draw(BordeDer);
            Jugador1.MovimientoJugador();
            BolaJuego.MovimientoBola(Tiempo,Jugador1,Jugador2);
            Jugador2.MovimientoPC(Tiempo,BolaJuego);
            break;

        case JugandoDosJugadores:
            Tiempo=Reloj.restart();
            VentanaPrincipal.draw(FondoJuego);
            VentanaPrincipal.draw(Jugador1);
            VentanaPrincipal.draw(Jugador2);
            VentanaPrincipal.draw(BolaJuego);
            VentanaPrincipal.draw(BordeAba);
            VentanaPrincipal.draw(BordeArr);
            VentanaPrincipal.draw(BordeIzq);
            VentanaPrincipal.draw(BordeDer);
            Jugador1.MovimientoJugador();
            Jugador2.MovimientoJugador2();
            BolaJuego.MovimientoBola(Tiempo,Jugador1,Jugador2);
            break;

        case MostrarInstrucciones:
            VentanaPrincipal.draw(FondoMenu);
            VentanaPrincipal.draw(Titulo);
            VentanaPrincipal.draw(Instrucciones);
            break;

        case MostrarCreditos:
            VentanaPrincipal.draw(FondoMenu);
            VentanaPrincipal.draw(Titulo);
            VentanaPrincipal.draw(Creditos);
            break;
        }
}


void Juego::RestriccionesMenu()
{
    while (VentanaPrincipal.pollEvent(EventoJuego))
        {
            if((EventoJuego.type == sf::Event::Closed) || ((EventoJuego.type == sf::Event::KeyPressed) && (EventoJuego.key.code==sf::Keyboard::Escape)))
            {
                VentanaPrincipal.close();
            }

            if ((EventoJuego.type == sf::Event::KeyPressed) && (Estado == Espera))
            {
                Estado = Menu;
            }

            if ((EventoJuego.type == sf::Event::KeyPressed) && (EventoJuego.key.code==sf::Keyboard::Num1) && (Estado == Menu))
            {
                Estado = CantidadJugadores;
            }

            if ((EventoJuego.type == sf::Event::KeyPressed) && (EventoJuego.key.code==sf::Keyboard::A) && (Estado == CantidadJugadores))
            {
                Estado = JugandoUnJugador;
            }

            if ((EventoJuego.type == sf::Event::KeyPressed) && (EventoJuego.key.code==sf::Keyboard::Z) && (Estado == CantidadJugadores))
            {
                Estado = JugandoDosJugadores;
            }

            if ((EventoJuego.type == sf::Event::KeyPressed) && (EventoJuego.key.code==sf::Keyboard::Num2) && (Estado == Menu))
            {
                Estado = MostrarInstrucciones;
            }

            if ((EventoJuego.type == sf::Event::KeyPressed) && (EventoJuego.key.code==sf::Keyboard::B) && (Estado == MostrarInstrucciones))
            {
                Estado = Menu;
            }

            if ((EventoJuego.type == sf::Event::KeyPressed) && (EventoJuego.key.code==sf::Keyboard::Num3) && (Estado == Menu))
            {
                Estado = MostrarCreditos;
            }

            if ((EventoJuego.type == sf::Event::KeyPressed) && (EventoJuego.key.code==sf::Keyboard::B) && (Estado == MostrarCreditos))
            {
                Estado = Menu;
            }

            if ((EventoJuego.type == sf::Event::KeyPressed) && (EventoJuego.key.code==sf::Keyboard::Num4) && (Estado == Menu))
            {
                VentanaPrincipal.close();
            }
        }
}
