Algoritmo "salario"
Var
nome: caractere
salarioBruto, salarioLiquido, horario, valor, inss: real
Inicio
escreval("Digite seu nome")
leia(nome)
escreval("Informe o valor da hora:")
leia(valor)
escreval("Informe as horas trabalhadas no mês:")
leia(horario)

salarioBruto <- horario * valor
inss <- salarioBruto * 0,09
salarioLiquido <- salarioBruto - inss

escreval("Relatório:")
escreval("Funcionário:", nome)
escreval("Salario Bruto:", salarioBruto:8:2)
escreval("Desconto INSS:", inss:8:2)
escreval("Salario Liquido:", salarioLiquido:8:2)

Fimalgoritmo