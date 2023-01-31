
programa
{
  real nota1, nota2, nota3, media
	funcao inicio()
	{
		escreva("Digite o primeira nota: ")
		leia(nota1)

		escreva("Digite o segunda nota: ")
		leia(nota2)

    escreva("Digite o terceira nota: ")
		leia(nota3)

		media=(nota1 + nota2 + nota3)/3 // Media dos Valores

		escreva("\nA Media dos números é igual a: ",media) 		// Exibe o resultado da Media
		se (media>=7)
     escreva("\nAprovado")
  
     senao 
     escreva("\nReprovado")
     
  
  }
}

