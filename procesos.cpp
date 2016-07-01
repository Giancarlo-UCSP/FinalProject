#include "juego.h"

void Juego::SeleccionarOpciones()
{
    switch (Estado)
        {
        case Espera:
            PI.MostrarPantalla(VentanaPrincipal,FondoMenu);
            VentanaPrincipal.draw(FondoMenu);
            VentanaPrincipal.draw(Titulo);
            VentanaPrincipal.draw(Press);
            break;

        case Menu:
            PM.MostrarPantalla(VentanaPrincipal,FondoMenu);
            VentanaPrincipal.draw(FondoMenu);
            VentanaPrincipal.draw(Titulo);
            VentanaPrincipal.draw(Lista);
            break;

        case CantidadJugadores:
            PJ.MostrarPantalla(VentanaPrincipal,FondoMenu);
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
            Jugador1.MovimientoJugador();
            BolaJuego.MovimientoBola(Tiempo,Reloj,Jugador1,Jugador2,ScoreJuego);
            Jugador2.MovimientoPC(BolaJuego);
            ScoreJuego.MostrarScore(VentanaPrincipal);
            VerificarGanador();
            break;

        case JugandoDosJugadores:
            Tiempo=Reloj.restart();
            VentanaPrincipal.draw(FondoJuego);
            VentanaPrincipal.draw(Jugador1);
            VentanaPrincipal.draw(Jugador2);
            VentanaPrincipal.draw(BolaJuego);
            Jugador1.MovimientoJugador();
            Jugador2.MovimientoJugador2();
            BolaJuego.MovimientoBola(Tiempo,Reloj,Jugador1,Jugador2,ScoreJuego);
            ScoreJuego.MostrarScore(VentanaPrincipal);
            VerificarGanador();
            break;

        case GanoJugador1:
            VentanaPrincipal.draw(FondoMenu);
            VentanaPrincipal.draw(Titulo);
            break;

        case GanoJugador2:
            VentanaPrincipal.draw(FondoMenu);
            VentanaPrincipal.draw(Titulo);
            break;

        case MostrarInstrucciones:
            PIn.MostrarPantalla(VentanaPrincipal,FondoMenu);
            VentanaPrincipal.draw(FondoMenu);
            VentanaPrincipal.draw(Titulo);
            VentanaPrincipal.draw(Instrucciones);
            break;

        case MostrarCreditos:
            PC.MostrarPantalla(VentanaPrincipal,FondoMenu);
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

void Juego::VerificarGanador()
{
    if ((ScoreJuego.getPuntosJugador1()) >= 11 && (ScoreJuego.getPuntosJugador1()) >= ((ScoreJuego.getPuntosJugador2()) + 2))
        Estado = GanoJugador1;

    if ((ScoreJuego.getPuntosJugador2()) >= 11 && (ScoreJuego.getPuntosJugador2()) >= ((ScoreJuego.getPuntosJugador1()) + 2))
        Estado = GanoJugador2;
}
