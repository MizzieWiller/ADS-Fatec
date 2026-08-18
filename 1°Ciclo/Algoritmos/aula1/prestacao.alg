algoritmo "Prestação"
var
prestacao, valor, taxa, dias: real
inicio
escreval ("Informe o valor da prestação:")
leia(valor)
escreval ("Informe a taxa:")
leia(taxa)
escreval ("Informe os dias em atraso:")
leia(dias)
prestacao <- valor+(valor*(taxa/100)*dias)
escreval ("O valor da atualizado da prestação é  de:", prestacao)
fimalgoritmo
