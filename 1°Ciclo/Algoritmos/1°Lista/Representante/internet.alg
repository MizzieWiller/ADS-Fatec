Algoritmo "Horas de Internet"

Var
nome: caractere
horasAcessadas, horasPermitidas: inteiro
Inicio
escreval("Digite o seu nome:")
leia(nome)
escreval("escreva a quantidade de horas acessadas")
leia(horasAcessadas)
escreval("Digite o numero de horas permitidas:")
leia(horasPermitidas)


se (horasAcessadas > horasPermitidas) entao
        escreval("Você ultrapassou o limite permitido.")
senao
    se(horasAcessadas < horasPermitidas) entao
        escreval("Você está abaixo do limite.")
senao 
        escreval("você está no limite.")            

fimse
fimse
Fimalgoritmo