Algoritmo "Votos para Representantes"
Var
   candidato1, candidato2 : caractere
   votos1, votos2, diferenca : inteiro
Inicio
   escreval("Escreva o nome do primeiro candidato:")
   leia(candidato1)
   escreval("Escreva o nome do segundo candidato:")
   leia(candidato2)
   escreval("Escreva a quantidade de votos do primeiro candidato:")
   leia(votos1)
   escreval("Escreva a quantidade de votos do segundo candidato:")
   leia(votos2)

   se (votos1 > votos2) entao
      diferenca <- votos1 - votos2
      escreval("O candidato que ganhou foi: ", candidato1)
   senao
      diferenca <- votos2 - votos1
      escreval("O candidato que ganhou foi: ", candidato2)

fimse
Fimalgoritmo

//   se (votos1 > votos2) entao
//      escreval("O candidato que ganhou foi: ", candidato1)
//   senao
//      escreval("O candidato que ganhou foi: ", candidato2)
