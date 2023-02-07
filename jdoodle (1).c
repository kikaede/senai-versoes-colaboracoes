#include <stdio.h>

int main() 
{

  int minhaIdade, paiIdade, maeIdade, irmaoIdade;
    minhaIdade = 23;
    maeIdade = 48;
    paiIdade = 49;
    irmaoIdade = 15;
    
    printf ("Idade Total é = %i.\n", minhaIdade + paiIdade + maeIdade + irmaoIdade );
    printf ("Result = %i.\n", (((minhaIdade * maeIdade)/paiIdade)) + irmaoIdade - 5);
    
  
    return 0;
}
