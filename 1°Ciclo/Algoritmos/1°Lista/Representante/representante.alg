Algoritmo "Representantes"
Var
candidato1, candidato2 : caractere
votos1, votos2, maior, diferenca : inteiro
Inicio
escreval ("escreva o nome do primeiro candidato")
leia(candidato1)
escreval("Escreva o nome do segundo candidato")
leia(candidato2)
escreval("Escreva a quantidade de votos do primeiro candidato")
leia(votos1)
escreval("Escreva a quantidade de votos do segundo candidato")
leia(votos2)

se (votos1 > votos2)
    maior = votos1
    diferenca = votos1 - votos2
senao
    maior = votos2
    diferenca = votos2 - votos1

escreval("O candidato que ganhou foi o candidato:", diferenca)
fimse
Fimalgortimo