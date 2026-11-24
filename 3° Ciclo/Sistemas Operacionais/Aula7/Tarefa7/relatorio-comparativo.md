# 📊 Relatório Comparativo: Render (nuvem) × Máquina própria

**Instituição:** Fatec - Faculdade de Tecnologia **Disciplina:** Sistemas Operacionais **Professor:** Prof. Me. Deivison S. Takatu

> **Projeto:** Monitor em tema de Disco, um painel web que mostra informações do sistema operacional (hardware, rede, arquivos e memória) com visual lo-fi e música gerada no navegador.
> 🎵 **Repositório:** https://github.com/MizzieWiller/SO-project (versão da entrega: tag `v1-entrega`)

---

## 🎯 1. Objetivo

Executar o mesmo projeto em dois ambientes diferentes e comparar o que muda em cada um:

| Ambiente | Endereço |
|---|---|
| ☁️ **Nuvem (Render)**, plataforma PaaS | https://so-co8a.onrender.com/ |
| 🖥️ **Minha máquina**, acessada de qualquer lugar | https://mizzie.nyx.dev.br/musica/#hardware |

A ideia da atividade é entender, na prática, como o sistema operacional e a infraestrutura por baixo da aplicação mudam o que ela enxerga e como ela se comporta.

---

## 🛠️ 2. Processo realizado

### 2.1 Aplicação local
1. Criei a API em **Node.js + Express**, usando o módulo nativo `os` para coletar os dados do sistema (hostname, tipo de SO, arquitetura, CPU, RAM e uptime);
2. Montei o painel em tema de disco, que mostra esses dados e atualiza sozinho (a versão do Render atualiza a cada 10 segundos);
3. Testei na minha máquina antes de publicar.

### 2.2 Versionamento
4. Enviei o código para o GitHub e marquei a versão da entrega com a tag `v1-entrega`.

### 2.3 Deploy no Render
5. Conectei o repositório do GitHub ao **Render** (PaaS);
6. Configurei os comandos de *Build* e *Start* do projeto (ex.: `npm install` e `node index.js`; **conferir os comandos reais do seu projeto**);
7. O Render gerou a URL pública `so-co8a.onrender.com`, e cada novo `push` pode disparar um novo deploy.

### 2.4 Execução na minha própria máquina, com acesso remoto
8. Mantive o projeto rodando no meu computador e o publiquei no domínio `mizzie.nyx.dev.br`, para consultar as últimas informações **de fora de casa**;
9. A partir daí, o painel mostra os dados da **minha máquina real**, e não de um servidor de terceiros.

### 2.5 Tentativas em outras plataformas (desafio adicional)

Antes de comparar com a máquina própria, tentei publicar o projeto em outras duas plataformas de nuvem:

| Plataforma | O que aconteceu | O que isso mostra |
|---|---|---|
| **Vercel** | Não rodou com o código como estava: para publicar lá eu precisaria **alterar o código** do projeto | A Vercel executa o back-end como funções sob demanda (*serverless*) e não como um servidor Express ligado o tempo todo. Por isso uma aplicação feita para ficar rodando precisa ser adaptada |
| **Railway** | O link do projeto aparecia como **fora do ar** (*offline*) (mesmo eu não tendo uma conta antes do teste). A causa mais provável, segundo a própria comunidade e o suporte da plataforma, é o fim do período de teste: a Railway oferece um teste de 30 dias com crédito limitado e, quando ele acaba, os serviços são parados e precisam ser reimplantados manualmente. No plano gratuito que vem depois, há só US$ 1 de crédito por mês e o serviço precisa estar em modo de "sleeping" (*App Sleeping*) | A disponibilidade e as condições de uso de plataformas em nuvem mudam com o tempo, e planos gratuitos costumam ter limite de tempo ou de crédito. Um serviço que funcionava pode parar sem nenhuma mudança no código |

**Aprendizado:** nem toda plataforma "de nuvem" aceita o mesmo tipo de aplicação. O Render roda o servidor Express como ele é (um processo que fica ligado), enquanto a Vercel exige outro modelo de execução. Isso reforça a diferença entre plataformas e é um dos motivos de eu ter passado a comparar também com a execução na minha própria máquina.

---

## 🔍 3. Comparação dos resultados

Dados coletados nos dois painéis, no mesmo dia:

| Informação | ☁️ Render | 🖥️ Máquina própria |
|---|---|---|
| Hostname | srv-daoks3lg1s2s738p7p9g-hibernate-64c69f44d8-wlnpr | PC-New |
| Sistema operacional | Linux 7.0.0-1009-aws | Windows_NT 10.0.19045 (Windows 10) |
| Versão do kernel | 7.0.0-1009-aws | 10.0.19045 (build do Windows NT) |
| Arquitetura | x64 | x64 |
| CPU (modelo e núcleos) | AMD EPYC 7R13 Processor, 8 vCPUs | Intel Core i5-10400 @ 2.90GHz, 12 vCPUs |
| RAM total | 30,65 GB (12,18 GB livres) | 15,83 GB (3,78 GB livres) |
| Disco total | 387G | 476G |
| Disco usado | 320G (83%) | 391G (82%) |
| Disco livre | 67G | 85G |
| Uptime | 0d 0h 22m 5s | 0d 0h 6m 13s |
| Porta | 10000 (definida pelo Render) | 3000 |
| Versão do Node.js | v26.13.1 | v26.13.0 |
---

## ⚖️ 4. Principais diferenças entre as ferramentas

| Critério | ☁️ Render (PaaS) | 🖥️ Máquina própria |
|---|---|---|
| **Infraestrutura** | Gerenciada pelo provedor; o app roda em um ambiente virtualizado (contêiner) que eu não controlo | Hardware e sistema operacional reais, escolhidos e mantidos por mim |
| **O que o app enxerga** | Dados do ambiente virtual do provedor, que podem não refletir hardware físico | Dados reais do meu computador |
| **Configuração do SO** | Abstraída: o Render prepara o ambiente sozinho | Manual: instalo e configuro runtime, dependências e rede |
| **Deploy** | Automático a partir do GitHub, com build e start configurados no painel | Manual: atualizo o código e reinicio o processo |
| **Porta** | Definida pelo Render por variável de ambiente (`PORT`) | Escolhida por mim |
| **Endereço e HTTPS** | URL pronta (`onrender.com`) com HTTPS incluso | Preciso ter domínio, certificado e rota de acesso externa |
| **Disponibilidade** | Não depende do meu computador estar ligado; em planos gratuitos o serviço pode "dormir" após um tempo sem acessos e demorar para responder na primeira visita | Só funciona com a máquina ligada, conectada à internet e com o serviço rodando |
| **Custo** | Há plano gratuito, com limites | Sem mensalidade de hospedagem, mas uso energia e internet próprias |
| **Segurança** | O provedor cuida da base da infraestrutura | Eu cuido de tudo: atualizações, firewall e o que fica exposto à internet |
| **Manutenção** | Baixa | Alta (e cai se algo falhar em casa) |
| **Portabilidade** | Mesmo código roda em outro provedor com pequenos ajustes | Depende do meu ambiente local |

---

## 🧠 5. Análise

- **Abstração de hardware:** no Render, o sistema operacional "some" da minha vista. Eu escrevo o código e a plataforma decide onde ele roda. Por isso os dados do módulo `os` mostram o ambiente do provedor e não um computador que eu conheça.
- **Interação com o kernel:** as mesmas chamadas ao módulo `os` devolvem valores diferentes em cada ambiente, o que mostra que o programa depende do sistema onde está rodando, mesmo sendo o mesmo código.
- **Controle × conveniência:** a nuvem entrega praticidade (deploy automático, URL pública, HTTPS) em troca de controle. A máquina própria entrega controle total e dados reais, mas exige configurar rede, domínio e segurança, e depende do computador ficar ligado.
- **Segurança:** expor uma máquina pessoal à internet traz responsabilidade extra. Só o necessário deve ficar acessível, e o painel não deve mostrar dados sensíveis (senhas, tokens, caminhos privados).
- **Quando usar cada um:** o Render serve bem para publicar rápido e deixar no ar sem manutenção. A máquina própria faz sentido quando eu preciso ver **o hardware real**, como no caso deste monitor, em que o objetivo é acompanhar o meu próprio computador de fora de casa.

---

## ✅ 6. Conclusão

O mesmo projeto rodou nos dois ambientes com resultados diferentes, o que mostra como a infraestrutura influencia o que a aplicação enxerga. Para um monitor de sistema, rodar na própria máquina é o que entrega o dado que interessa, e a nuvem foi útil para aprender o fluxo de deploy e comparar o que muda quando o sistema operacional fica escondido atrás de uma plataforma.
---

## 📚 Referências

- DOCKER INC. *Docker Documentation*. Disponível em: https://docs.docker.com
- Documentação oficial do Render: https://render.com/docs
- Documentação do módulo `os` do Node.js: https://nodejs.org/api/os.html
- TANENBAUM, Andrew S.; BOS, Herbert. *Sistemas Operacionais Modernos*. 4. ed. São Paulo: Pearson, 2016.
