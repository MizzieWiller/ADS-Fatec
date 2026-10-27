# ☁️ Resumo da Aula: Nuvem e Sistemas Operacionais

**Instituição:** Fatec - Faculdade de Tecnologia **Disciplina:** Sistemas Operacionais **Professor:** Prof. Me. Deivison S. Takatu  

---

## 📘 Conceitos Fundamentais e Computação em Nuvem

> **Computação em Nuvem:** Mudança de paradigma onde as organizações deixam de investir em hardware físico (CAPEX) para contratar recursos computacionais como serviço sob demanda pela internet (OPEX), utilizando ambientes virtualizados.

### Características da Nuvem (Modelo NIST)
* **Autoatendimento:** O usuário provisiona recursos automaticamente sem intervenção humana.
* **Acesso Amplo:** Serviços acessíveis via internet por diversos dispositivos.
* **Pool de Recursos:** Recursos compartilhados (*multi-tenant*) e alocados dinamicamente.
* **Elasticidade:** Capacidade de expandir ou contrair recursos rapidamente conforme a demanda.
* **Serviço Mensurável:** Monitoramento para cobrança exata pelo consumo (*pay-per-use*).

---

## ⚙️ Arquitetura e Modelos de Serviço

A virtualização serve de base para a nuvem, gerenciada por um *hypervisor*. Os modelos de entrega dividem-se em três camadas:

1. **🏗️ IaaS (Infraestrutura como Serviço):** O provedor gerencia hardware, rede e virtualização; o cliente gerencia o SO e as aplicações.
2. **🚀 PaaS (Plataforma como Serviço):** O provedor gerencia infraestrutura e SO; o desenvolvedor foca apenas na lógica do código (ex: *Render*)
3. **📦 SaaS (Software como Serviço):** Software completo entregue via internet e gerido inteiramente pelo provedor.

---

## 🚀 Evolução do Projeto Prático: Dashboard de Monitoramento

A proposta prática consiste em evoluir uma API desenvolvida em **Node.js** com **Express** para transformá-la em um **dashboard completo de monitoramento de sistema operacional**

### O que a aplicação exibe:
* **Indicadores de Desempenho:** Percentual de uso de RAM, uso médio da CPU, *uptime* formatado e status geral da máquina.
* **Informações do Sistema:** Hostname, tipo do SO, versão do kernel, arquitetura do processador e versão do Node.js.
* **Ambiente de Execução:** Identifica automaticamente se está rodando localmente ou na nuvem (como no *Render*), exibindo portas e variáveis de ambiente.

---

## 🛠️ Passo a Passo do Desenvolvimento e Deploy

1. **Criação da API Local:**
   * Inicialização do projeto e instalação de dependências (`express` e `cors`).
   * Utilização do módulo nativo `os` do Node.js para coletar dados do sistema.
2. **Versionamento:**
   * Envio do código-fonte para um repositório público no GitHub.
3. **Deploy na Nuvem (Render):**
   * Conexão do repositório GitHub à plataforma PaaS *Render*.
   * Configuração dos comandos de *Build* (`npm install`) e *Start* (`node index.js`).
   * Obtenção da URL pública para acesso remoto ao dashboard.

---

## 📊 Análise Técnica e Comparações

* **Abstração de Hardware:** O uso de PaaS oculta a complexidade de configuração do SO subjacente, provisionando contêineres otimizados automaticamente.
* **Interação com o Kernel:** As chamadas ao módulo `os` demonstram diferenças práticas entre o ambiente local (ex: Windows/kernel próprio) e a nuvem (ex: Linux em contêineres AWS)[cite: 8].
* **Portabilidade:** A facilidade de executar a mesma aplicação em diferentes ambientes evidencia as vantagens das arquiteturas modernas baseadas em microsserviços e nuvem.

---

## 📌 Atividades Práticas e Avaliação

**Passo a passo da atividade do Projeto:**
1. Criar a aplicação local usando Express.js para exibir informações do Sistema Operacional (Hostname, arquitetura, CPU, RAM, etc.).
2. Enviar o código para o GitHub e realizar o deploy utilizando a plataforma Render.
3. Acessar a aplicação na nuvem e comparar os resultados (variáveis de ambiente, porta, infraestrutura remota) com a execução na máquina local.
4. **Desafio Adicional:** Escolher uma outra aplicação de hospedagem em nuvem semelhante ao Render, realizar o deploy da API nela e comparar as diferenças entre os servidores analisados.
5. **Entrega Final:** Elaborar um **relatório comparativo** descrevendo todo o processo e as principais diferenças entre as ferramentas utilizadas, salvando a documentação (Manual) no repositório da disciplina.

---

## 📚 Referências Bibliográficas

* TANENBAUM, Andrew S.; BOS, Herbert. Sistemas Operacionais Modernos. 4. ed. São Paulo: Pearson, 2016.
* SILBERSCHATZ, Abraham; GALVIN, Peter B.; GAGNE, Greg. Fundamentos de Sistemas Operacionais. 9. ed. Rio de Janeiro: LTC, 2015.
* STALLINGS, William. Sistemas Operacionais: Conceitos e Projetos. 8. ed. São Paulo: Pearson, 2015.
* DENARDIN, G. W.; BARRIQUELLO, C. H. Sistemas Operacionais de Tempo Real e sua Aplicação em Sistemas Embarcados. Porto Alegre: Editora da UFRGS, 2014.
* AWASTHI, A.; RAWAT, V. Ramificação e Tarefas do Sistema Operacional. Edições Nosso Conhecimento, 2023.
* DOWNEY, Allen B. Think OS: A Brief Introduction to Operating Systems. Green Tea Press, 2015.
* RED HAT. Red Hat Enterprise Linux – System Administration Guide. Documentação Oficial.
* DOCKER INC. Docker Documentation. Documentação Oficial. Disponível em: https://docs.docker.com.
