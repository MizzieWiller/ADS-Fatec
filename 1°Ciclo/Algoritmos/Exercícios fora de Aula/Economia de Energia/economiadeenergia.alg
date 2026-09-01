Algoritmo EconomiaDeEnergia
Var
   jan, fev, mar : real
   totalAtual, mediaAtual : real
   totalComEconomia, mediaComEconomia : real

Inicio
   Escreva("Digite o consumo de Janeiro (kWh): ")
   Leia(jan)
   Escreva("Digite o consumo de Fevereiro (kWh): ")
   Leia(fev)
   Escreva("Digite o consumo de Março (kWh): ")
   Leia(mar)

   totalAtual <- jan + fev + mar
   mediaAtual <- totalAtual / 3
   totalComEconomia <- (totalAtual * 20/100)
   mediaComEconomia <- (mediaAtual * 20/100)

   Escreval("--- CONSUMO ATUAL ---")
   Escreval("Consumo Total: ", totalAtual, " kWh")
   Escreval("Consumo Médio: ", mediaAtual, " kWh")

   Escreval("--- CONSUMO COM 20% DE ECONOMIA ---")
   Escreval("Novo Consumo Total: ", totalComEconomia, " kWh")
   Escreval("Novo Consumo Médio: ", mediaComEconomia, " kWh")
Fimalgoritmo
