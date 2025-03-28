#include "Serie.hpp"
#include <iostream>
#include <ftxui/dom/elements.hpp>
#include <ftxui/screen/screen.hpp>

using namespace ftxui;

int main(int argc, char const*argv[])
{
    Screen pantalla = Screen::Create{
        Dimension::FUll(),
        Dimension::Full()
    }:

    auto document = hbox({
        vbox()
    });

    ftxui::Render(pantalla,documnet);

    return EXIT_SUCCESS;


//   Serie series [2];
//   series [0].EncenderTodo();
//   series [1].ApagarTodo();
//   series [1].EncenderCantidad(1);
//   series [1].Imprimir();


//   series [1].EncenderCantidad(2);
//   series [1].Imprimir();
//   series [1].RecorrerDerecha();
//   series [1].Imprimir():
//   serdes [1].RecorrerDerecha();
//   series [1].Imprimir():

//   series [0].Imprimir();

//   return EXIT_SUCCESS;}