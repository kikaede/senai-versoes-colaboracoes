#include <stdio.h>

int main() 
{

  int minhaIdade, paiIdade, maeIdade, irmaoIdade;
    minhaIdade = 23;
    maeIdade = 48;
    paiIdade = 49;
    irmaoIdade = 15;
   int IdadeTotal;
   int Result;
  
  IdadeTotal =  (minhaIdade + paiIdade + maeIdade + irmaoIdade);
  Result = minhaIdade * maeIdade/paiIdade + irmaoIdade - 5;
    printf ("%i\n", IdadeTotal);
    printf ("%i\n", Result);
    printf ("Minha idade é = %i\nIdade do Pai é = %i\nIdade do Mae é = %i.\n", minhaIdade, paiIdade, maeIdade);
   
}