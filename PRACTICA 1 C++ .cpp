/******************************************************************************

Programar para repartir pizzas
Indicar el n numero de personas y el n numero de pizzas encargadas
retomar el n numero de trozos por perona y cuantos sobran
ten en cuenta que las pizzas se parten en 8 porciones

*******************************************************************************/
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
  int num_personas;
  int num_pizzas;
  
  cout << "¿Cuántas personas comeran? ";
  cin >> num_personas;
  
  cout << "¿Cuántas pizzas encargaron? ";
  cin >> num_pizzas;
  
  int total_pedazos = num_pizzas * 8;
  int pedazo_persona = total_pedazos / num_personas;
  int pedazo_sobrante = total_pedazos % num_personas;
  
  cout << "A cada persona le toca: " << pedazo_persona << " pedazos de pizza \n" ;
  if (pedazo_sobrante > 0) {
      
      cout << "Los pedazos sobrantes son: " << pedazo_sobrante;
  } else {
      cout << "No sobran pedazos";
  }
  
    return 0;
}