Algoritmo "Reajuste"
Var
salario, salarioReajustado: real

Inicio
escreval("Escreva o seu salario")
leia(salario)

se(salario < 1500) entao
    salarioReajustado <- salario + (salario * 0.15)
senao 
   se(salario < 3000) entao
    salarioReajustado <- salario + (salario * 0.10)
senao
    salarioReajustado <- salario + (salario * 0.05)
fimse
fimse

escreval("O reajuste foi de : ", salarioReajustado) 


Fimalgoritmo