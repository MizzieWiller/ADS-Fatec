# ☁️ Resumo da Aula: Nuvem e Sistemas Operacionais

**Instituição:** Fatec - Faculdade de Tecnologia
**Disciplina:** Sistemas Operacionais
**Professor:** Prof. Me. Deivison S. Takatu.

---

## 1. 📘 Conceitos Fundamentais

> ***Computação em Nuvem:** Mudança de paradigma onde as organizações deixam de investir em hardware físico (CAPEX) para contratar recursos computacionais como serviço sob demanda pela internet (OPEX), utilizando ambientes virtualizados.*

### Características da Nuvem (Modelo NIST)
| Característica | Descrição Prática | 
| :--- | :--- | 
| **Autoatendimento** | O usuário provisiona recursos (VMs, bancos) automaticamente sem intervenção humana. | 
| **Acesso Amplo** | Serviços acessíveis via internet por diversos dispositivos (PCs, tablets, smartphones). | 
| **Pool de Recursos** | Recursos compartilhados (multi-tenant) e alocados dinamicamente entre usuários. | 
| **Elasticidade** | Capacidade do sistema expandir ou contrair recursos rapidamente conforme a demanda. | 
| **Serviço Mensurável** | Uso monitorado para garantir a cobrança exata pelo consumo (*pay-per-use*). | 

---

## 2. ⚙️ Arquitetura e Modelos de Serviço

A virtualização é a base da nuvem, onde um hypervisor gerencia os recursos físicos para múltiplas VMs. A entrega desses recursos é dividida em três grandes camadas de serviço:

1. **🏗️ IaaS (Infraestrutura como Serviço):** O provedor gerencia hardware, rede e virtualização. O cliente gerencia o Sistema Operacional e aplicações (Ex: *AWS EC2, Azure VMs*).
2. **🚀 PaaS (Plataforma como Serviço):** O provedor gerencia toda a infraestrutura e o SO. O desenvolvedor foca apenas na lógica do código e deploy (Ex: *Google App Engine, Render*).
3. **📦 SaaS (Software como Serviço):** Software completo entregue via internet. Toda a gestão é feita pelo provedor (Ex: *Google Workspace, Microsoft 365*).

---

## 3. 🛠️ Tecnologias e Ferramentas Modernas

Para acompanhar a agilidade da nuvem, os sistemas operacionais e aplicações utilizam ferramentas modernas:

* **Containers (Docker):** Empacotam aplicação e dependências em unidades isoladas, mas que compartilham o *kernel* do SO hospedeiro, tornando-os mais leves e rápidos que as VMs.
* **Orquestração (Kubernetes):** Ferramenta para gerenciar, escalar e garantir a alta disponibilidade dos containers.
* **Microsserviços:** Arquitetura que divide sistemas grandes em serviços independentes que se comunicam via APIs (Web Services).

---

## 4. 🚀 Guia Prático: Construindo e Publicando uma API

### Fase 1: Configuração Local (Node.js & Express)
- [x] **1. Inicializar Projeto:** Criar pasta `cloud-so-app` e abrir no VS Code.
- [x] **2. Instalar Dependências:** Rodar `npm install express cors` no terminal.
- [x] **3. Criar Código:** Desenvolver o `index.js` consumindo dados do módulo nativo de SO.
- [x] **4. Testar Local:** Executar `node index.js` e acessar no navegador/insomnia.

### Fase 2: Deploy na Nuvem (Render)
- [x] **1. Controle de Versão:** Fazer o *commit* e *push* do projeto para o GitHub.
- [x] **2. Plataforma:** Criar conta em `dashboard.render.com`.
- [x] **3. Novo Serviço:** Selecionar "New Web Service" e conectar o repositório GitHub.
- [x] **4. Configuração de Build/Start:** Definir *Build* como `npm install` e *Start* como `node index.js`.

> 💡 **Exemplo de PaaS Gratuito: Render**
> * **Foco:** Produtividade e simplicidade, abstraindo completamente o SO.
> * **Vantagens:** Deploy automático a cada *commit*, certificado SSL grátis, ideal para microsserviços.

---

## 📌 Atividades Práticas e Avaliação

**Passo a passo da atividade:**
1. Criar aplicação local usando Express.js para exibir informações do Sistema Operacional (Hostname, arquitetura, CPU, RAM livre/total).
2. Enviar o código para o GitHub e realizar o deploy utilizando o Render.
3. Acessar a aplicação na nuvem e comparar os resultados com a máquina local.
4. **Documentar** todo o processo na forma de um **Manual** e salvar no repositório da disciplina.

---
# 🔌 Manual de Web Service - API Node.js na Plataforma Render
---

**🧠 Objetivo**

Demonstrar a criação de um Web Service (API REST) capaz de extrair informações do Sistema Operacional, e a subsequente implantação (deploy) dessa aplicação em um ambiente de nuvem (PaaS) utilizando a plataforma Render, relacionando a prática com os conceitos de Cloud e Sistemas Operacionais.

---

## 🛠️ Instalação do Ambiente

---

Para a realização da atividade, foram utilizadas as seguintes ferramentas:
**Node.js e Express.js:** Ambiente de execução e framework backend.
**GitHub:** Para versionamento e integração contínua.
**Render:** Provedor de Nuvem (PaaS).
**Sistema operacional hospedeiro (Host local):** Windows 10/11.
O Render foi escolhido por sua interface intuitiva, facilidade de abstração da infraestrutura e gratuidade para projetos educacionais.

---

## 💻 Criação da Aplicação

A API local foi criada seguindo os passos:

1. **Configuração do Backend:**
  * Inicialização via `npm init`.
  * Instalação do Express (rotas) e CORS (controle de acesso entre domínios).

2. **Desenvolvimento (Módulo OS):**
  * Uso da biblioteca nativa `os` do Node.js para coletar: `os.hostname()`, `os.platform()`, `os.cpus()`, `os.totalmem()` e `os.freemem()`.

3. **Disponibilização da Porta:**
  * Configuração do servidor para escutar na porta `3000` (local) ou na porta dinâmica fornecida pelo provedor de nuvem (`process.env.PORT`).

---

## 📀 Deploy e Configuração no Render

**O processo de migração do ambiente local para a nuvem ocorreu da seguinte forma:**
 
  * Hospedagem do código-fonte em um repositório público no GitHub.
  * Criação de conta no Render e autorização de acesso ao GitHub.
  * Criação de um novo "Web Service".
  * Seleção do repositório correspondente.
  * Configuração do ambiente base: `Node` (abstraindo o SO subjacente, provável Linux).
  * Comando de Build: `npm install`
  * Comando de Start: `node index.js`
  * Aguardo da construção do *container* e liberação da URL pública (`https://seu-projeto.onrender.com`).

---

## 🔍 Testes Realizados

- Durante a execução da API na nuvem, foram realizados testes comparativos:
- **Localmente:** O JSON retornou os dados da máquina física (ex: Windows, 16GB de RAM, arquitetura x64).
- **No Render:** O JSON retornou os dados da infraestrutura do provedor (ex: Linux, quantidade restrita de CPUs e RAM configurada pelo plano gratuito).
A aplicação rodou perfeitamente em ambos, evidenciando o quão portáteis são as aplicações modernas baseadas em web services.

---

## ⚙️ Análise Técnica (Conceitos de SO e Nuvem)

🔹 Abstração de Hardware (PaaS)

Ao usar o Render, o desenvolvedor não gerencia o Sistema Operacional. A plataforma provisiona automaticamente um contêiner Linux por trás dos panos, instala as dependências e executa o código.

🔹 Interação com o Kernel

As funções do módulo `os` do Node.js fazem chamadas de sistema (*system calls*) diretamente ao Kernel do Sistema Operacional hospedeiro. Isso explicita a diferença dos retornos quando rodamos localmente (chamadas ao kernel do Windows) versus na nuvem (chamadas ao kernel do Linux).

🔹 Containers e Módulo de Execução

O Render utiliza tecnologias de *containerização* para isolar a nossa aplicação de outros clientes (Multi-tenant). Isso garante segurança e compartilhamento otimizado (Pool de Recursos), essencial para a elasticidade da nuvem.

## 📊 Vantagens do Deploy Automatizado Observadas

Foco total no código, sem necessidade de configurar firewalls, servidores web (como Nginx) ou proxies reversos.
Integração Contínua (CI/CD): Qualquer alteração no GitHub atualiza a API automaticamente.
Fornecimento automático de HTTPS (Certificado SSL).

## ⚠️ Desafios Encontrados

Configuração correta da porta para acesso dinâmico (`process.env.PORT`), caso contrário o Render não consegue rotear o tráfego externo para a aplicação.
Compreensão da política de suspensão (*sleep*) em planos gratuitos quando não há tráfego.

## 🧾 Conclusão

A migração de um serviço local para a nuvem através de um modelo PaaS (como o Render) demonstra na prática as vantagens da Cloud Computing. A atividade evidenciou como a camada de Sistema Operacional é abstraída do desenvolvedor, permitindo deploy ágil. Ao mesmo tempo, consultar os dados do SO expôs as diferenças arquiteturais entre máquinas físicas e recursos virtualizados limitados da nuvem.

---

## 6. 📚 Referências Bibliográficas

* TANENBAUM, Andrew S.; BOS, Herbert. Sistemas Operacionais Modernos. 4. ed. São Paulo: Pearson, 2016 .
* SILBERSCHATZ, Abraham; GALVIN, Peter B.; GAGNE, Greg. Fundamentos de Sistemas Operacionais. 9. ed. Rio de Janeiro: LTC, 2015 .
* STALLINGS, William. Sistemas Operacionais: Conceitos e Projetos. 8. ed. São Paulo: Pearson, 2015 .
* DENARDIN, G. W.; BARRIQUELLO, C. H. Sistemas Operacionais de Tempo Real e sua Aplicação em Sistemas Embarcados. Porto Alegre: Editora da UFRGS, 2014 .
* AWASTHI, A.; RAWAT, V. Ramificação e Tarefas do Sistema Operacional. Edições Nosso Conhecimento, 2023 .
* DOWNEY, Allen B. Think OS: A Brief Introduction to Operating Systems. Green Tea Press, 2015 .
* RED HAT. Red Hat Enterprise Linux – System Administration Guide. Documentação Oficial .
* DOCKER INC. Docker Documentation. Documentação Oficial. Disponível em: https://docs.docker.com .

