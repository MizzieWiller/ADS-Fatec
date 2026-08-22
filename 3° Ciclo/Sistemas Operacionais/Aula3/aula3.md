# 🖥 Resumo da Aula: Conceitos, Funções e Tipos de Sistemas Operacionais

**Instituição:** Fatec - Faculdade de Tecnologia
**Disciplina:** Sistemas Operacionais
**Professor:** Prof. Me. Deivison S. Takatu

---

## 💻 Tipos de Sistemas Operacionais

### 🏢 Sistemas de Grande Porte (Mainframes)
* **Descrição:** Projetados para alta capacidade de E/S (Entrada/Saída) e carga massiva de transações. Operam com processamento em lote (*batch*) e tempo compartilhado (*time-sharing*) para múltiplos usuários simultâneos.
* **Características:** Alta confiabilidade, alta disponibilidade, processamento de lotes e transações (TPS), segurança e integridade de dados.
* **Aplicações:** Bancos, grandes varejistas, servidores web de grande escala, e-commerce e sistemas bancários críticos.
* **Exemplos:** OS/360, OS/390, Linux (em mainframe), variantes UNIX.

### 🖥️ Sistemas Operacionais de Servidor
* **Descrição:** Focados em atender múltiplos usuários e serviços via rede (web, arquivos, bancos de dados e autenticação). Projetados para estabilidade, escalabilidade e compartilhamento de recursos.
* **Exemplos Principais:**
  * **Linux:** Ampla adoção, alta flexibilidade e vasto ecossistema de serviços.
  * **Windows Server:** Integração nativa com Active Directory e serviços empresariais.

### ⚡ Sistemas de Multiprocessadores
* **Descrição:** Suportam múltiplas CPUs ou múltiplos núcleos para processamento paralelo.
* **Desafios e Soluções:**
  * **Escalonamento:** Balanceamento de carga entre núcleos.
  * **Sincronização:** Uso de *locks*, semáforos e algoritmos *lock-free* para evitar condições de corrida.
  * Coerência de cache e comunicação entre núcleos.
* **Aplicações:** Servidores de alto desempenho e computação científica (*scientific computing*).

### 💻 Sistemas de Computadores Pessoais
* **Descrição:** Orientados a um único usuário, com interface gráfica (GUI), suporte a multiprogramação e foco em usabilidade e suporte multimídia.
* **Exemplos:**
  * **Windows:** Ampla compatibilidade com softwares de produtividade e jogos.
  * **macOS:** Forte integração entre hardware e software, focado na experiência do usuário.
  * **Linux:** Opção voltada para *power users*, desenvolvimento e alta personalização.

### 📱 Sistemas Operacionais Portáteis (Mobile)
* **Descrição:** Focados em dispositivos móveis com forte integração de hardware, distribuição via lojas oficiais e alto foco em segurança e *sandboxing*.
* **Aspectos Principais:** Gerenciamento agressivo de energia, APIs para sensores (GPS, acelerômetro, câmera) e segurança baseada em permissões.
* **Exemplos:** Android e iOS.

### 📟 Sistemas Embarcados
* **Descrição:** Executam em dispositivos dedicados com recursos limitados; o software é frequentemente armazenado em ROM/Flash e o usuário normalmente não altera o software.
* **Aplicações:**
  * **Domésticas:** Micro-ondas, Smart TVs (resposta imediata e interface simples).
  * **Automotivo:** Controle de motor, *infotainment* (requisitos críticos de segurança).
  * **Sistemas Embarcados Sofisticados:** Embedded Linux, QNX, VxWorks.

### 🌐 Sistemas de Nós Sensores
* **Descrição:** Dispositivos extremamente pequenos, operados por bateria limitada, comunicando-se sem fio e orientados a eventos. Priorizam baixíssimo consumo de energia e protocolos leves.
* **Aplicações:** Monitoramento ambiental, vigilância militar, agricultura de precisão.
* **Exemplos de SO:** TinyOS, Contiki.

### ⏱️ Sistemas de Tempo Real (RTOS)
* **Hard Real-Time:** Falhas ao perder o prazo de execução (*deadline*) podem causar desastres fatais (ex.: controle de voo, sistemas de segurança).
* **Soft Real-Time:** A perda de prazos causa apenas degradação aceitável do serviço (ex.: *streaming* de mídia, jogos interativos).

### 💳 Sistemas de Cartões Inteligentes (Smart Cards)
* **Características e Desafios:** Recursos extremamente restritos (gerenciamento fino de memória), alta exigência de segurança (criptografia, autenticação e resistência a ataques físicos) e multiprogramação limitada por *applets*.

---

## 🔧 Controle de Versão com Git

### 🔍 O que é Git?
* Criado por **Linus Torvalds**, é um **sistema distribuído de controle de versão de arquivos**, utilizado principalmente via linha de comando ou integrado a IDEs.
* **Funções:** Registra o histórico de alterações de um projeto, permite restaurar versões anteriores e sincroniza o código com repositórios remotos (como o GitHub).

### ⚙️ Comandos de Configuração Inicial
```bash
# Configurar o nome de usuário global
git config --global user.name "<Seu Nome>"

# Configurar o e-mail global
git config --global user.email "<Seu Email>"

# Verificar a instalação do Git
git --version
```

### 🚀 Fluxo Básico de Trabalho no VS Code
1. Criar e abrir uma pasta de projeto no VS Code.
2. Acessar a aba de **Controle de Código-Fonte**.
3. Clique em **Inicializar Repositório**.
4. Escrever uma mensagem explicativa e realizar o **Commit**.
5. Clicar em **Publicar Branch** para sincronizar com a conta do GitHub (Público ou Privado).

---

## ⚙ Boas Práticas de Versionamento

* 🟢 **Commits pequenos e frequentes:** Facilita a identificação de bugs e a reversão pontual de mudanças.
* 📝 **Mensagens de commit claras:** Descreva com precisão *o que* foi alterado e *por que*.
* 🌿 **Uso de branches:** Mantenha a *branch* principal (`main`/`master`) estável. Crie ramificações para desenvolver novas funcionalidades ou correções.
* 🧪 **Testes automatizados:** Valide se o código funciona antes de realizar o *merge* na branch principal.

---

## 📌 Atividades Práticas

1. **Atividade 1 — Configuração e Autenticação:** Realizar a integração entre a IDE (ex: VS Code) e a conta pessoal do GitHub utilizando o Git, garantindo a autenticação correta para operações de `commit`, `push` e `pull`.
2. **Atividade 2 — Fluxo de Restauração:** Criar um repositório local com um arquivo inicial, fazer alterações, commitar e enviar ao GitHub. Em seguida, deletar a pasta local e executar o comando `git clone <url-do-repositorio>` para restaurar o projeto localmente.
3. **Atividade 3 — Pesquisa no GitHub:** Pesquisar 5 projetos públicos de outros usuários no GitHub, cloná-los utilizando `git clone` na máquina local e analisar a estrutura de arquivos contida neles.

---

## 📌 - Atividade 1 

![config source control](https://github.com/user-attachments/assets/d54a467c-158c-488d-b5dd-9e85881692c5)

Configurando a autenticação realizando a integração entre a IDE (ex: VS Code) e a conta pessoal do GitHub utilizando o Git com a autenticação correta para operações de `commit`, `push` e `pull`

* Configurar o nome de usuário global
git config --global user.name "<Seu Nome>"

* Configurar o e-mail global
git config --global user.email "<Seu Email>"

* Verificar a instalação do Git
git --version

---

## 📌 - Atividade 2

Repositório Local Clonado.

![print repositótio clonado](https://github.com/user-attachments/assets/d3c3d0c9-7557-4b2d-a43a-e4fa68c9ab15)

Teste de um mini repositório descrevendo a teoria do Big Bang.

---

## 📌 - Atividade 3 

![repositórios clonados](https://github.com/user-attachments/assets/6de12532-8de9-48d5-a283-abfa3ad79f73)

* 🖥️ 1- photography-portfolio (rampatra): Um modelo excelente e gratuito de site de portfólio. Você pode fazer uma cópia (fork) no GitHub, colocar suas fotos e hospedar sua galeria na internet sem pagar nada.

  # 🖥 Estrutura do Repositório: rampatra/photography

> **Resumo:** Portfólio fotográfico estático construído com **Jekyll** e automatizado com **Gulp/Node.js** para deploy no **GitHub Pages**.

---

## 📂 Diretórios

* **`images/`**
  * `fulls/` — Fotos em alta resolução.
  * `thumbs/` — Miniaturas da galeria.
* **`_layouts/`** — Modelos de página base do Jekyll.
* **`_includes/`** — Componentes reutilizáveis (cabeçalho, rodapé, formulário).
* **`assets/`** — Estilos (**SCSS/CSS**), scripts (**JS** para EXIF/lightbox) e fontes.

---

## 📄 Arquivos Principais

| Arquivo | Descrição |
| :--- | :--- |
| **`_config.yml`** | Configurações globais (autor, título, redes sociais, URL). |
| **`index.html`** | Página inicial da galeria de fotos. |
| **`gulpfile.mjs`** | Automação (redimensionamento de imagens, minificação de CSS/JS). |
| **`package.json`** | Dependências do Node.js (Gulp e pacotes de build). |
| **`Gemfile`** | Dependências em Ruby (Jekyll). |
| **`CNAME`** | Configuração de domínio personalizado no GitHub Pages. |

---

* 🪐 2- awesome-astronomy: O repositório definitivo com uma lista gigante de softwares, bibliotecas em Python (como Astropy) e utilitários para análise e visualização de dados astronômicos.

  # 🪐 Estrutura do Repositório: jonathansick/awesome-astronomy

> **Resumo:** Lista curada (*Awesome List*) de recursos, códigos, conjuntos de dados e comunidades voltados para **astronomia profissional**.

---

## 📂 Diretórios

* **`/` (Raiz)** — Repositório simplificado e sem subpastas, estruturado em documento único.

---

## 📄 Arquivos Principais

| Arquivo | Descrição |
| :--- | :--- |
| **`README.md`** | O guia central contendo links e categorias (softwares Python/IDL, bases de dados como Gaia e SDSS, eventos). |
| **`CONTRIBUTING.md`** | Instruções e regras para a comunidade submeter novos links via Pull Requests. |
| **`LICENSE`** | Licença Creative Commons Zero (CC0 1.0) para domínio público. |

---
  
* ⚙️ 3- awesome-OpenSourcePhotography: Uma lista completa contendo os melhores programas gratuitos para fotógrafos. Inclui reveladores RAW (como Darktable e RawTherapee), editores de metadados e hacks de firmware para câmeras.

  # ⚙ Estrutura do Repositório: ibaaj/awesome-OpenSourcePhotography

> **Resumo:** Catálogo colaborativo (*Awesome List*) de softwares, bibliotecas, firmwares e utilitários de código aberto para **fotografia e vídeo**.

---

## 📂 Diretórios

* **`/` (Raiz)** — Repositório focado puramente em documentação, com todos os arquivos no diretório principal.

---

## 📄 Arquivos Principais

| Arquivo | Descrição |
| :--- | :--- |
| **`README.md`** | Guia central categorizado (editores RAW, hacks de firmware como Magic Lantern, organizadores, editores EXIF e bancos CC0). |
| **`CONTRIBUTING.md`** | Diretrizes para sugestão e envio de novos projetos open source. |

---

* 🌐 4- Vusic (ou similares no GitHub): Repositórios focados em Music Visualizers usando JavaScript e WebGL. Eles capturam a frequência da música em tempo real e geram artes psicodélicas ou fractais em 3D que reagem às batidas.

  # 🌐 Estrutura do Repositório: projectM-visualizer/projectm

> **Resumo:** Biblioteca e motor de **visualização de música** multiplataforma em C/C++, compatível com os presets do **Milkdrop**.

---

## 📂 Diretórios

* **`src/`**
  * `libprojectM/` — Núcleo do motor de renderização gráfica e áudio (PCM/FFT).
* **`presets/`** — Coleção de presets visuais e arquivos de efeitos (.milk).
* **`cmake/`** — Módulos e configurações de compilação do CMake.
* **`.github/`** — Workflows de integração contínua (CI/CD) para testes e builds.

---

## 📄 Arquivos Principais

| Arquivo | Descrição |
| :--- | :--- |
| **`CMakeLists.txt`** | Script mestre do CMake para compilação multiplataforma. |
| **`BUILDING.md`** | Guia passo a passo para compilar o projeto no Linux, Windows e macOS. |
| **`LICENSE.txt`** | Licença de código aberto (LGPL-2.1). |

--- 

* 🔌 5- SMAPI (Stardew Modding API): O projeto de código aberto mais importante para a  comunidade de Stardew Valley. É a API oficial feita em C# que permite a execução de qualquer mod dentro do jogo. Analisar esse código ensina muito sobre como fazer ganchos (hooks) em jogos comerciais.

  # 🔌 Estrutura do Repositório: Pathoschild/SMAPI

> **Resumo:** A API e carregador de mods (*Modding API*) oficial da comunidade para o jogo **Stardew Valley** em .NET/C#.

---

## 📂 Diretórios

* **`src/`**
  * `SMAPI/` — Núcleo do injetor/loader e gerenciador de eventos e logs.
  * `SMAPI.ModBuildConfig/` — Ferramentas e tarefas de build para desenvolvimento de mods.
  * `SMAPI.Installer/` — Instalador executável multiplataforma.
* **`docs/`** — Documentação técnica e guias para desenvolvedores de mods.
* **`build/`** — Scripts PowerShell/Shell para automação de lançamentos e empacotamento.

---

## 📄 Arquivos Principais

| Arquivo | Descrição |
| :--- | :--- |
| **`SMAPI.sln`** | Arquivo de solução do Visual Studio / .NET que agrupa todos os projetos C#. |
| **`README.md`** | Visão geral do projeto, links para download e documentação oficial. |
| **`LICENSE`** | Licença de código aberto (GPL-3.0). |

---

## 📚 Referências

* TANENBAUM, A. S.; BOS, H. **Sistemas Operacionais Modernos**. 4. ed. Pearson, 2016.
* SILBERSCHATZ, A.; GALVIN, P. B.; GAGNE, G. **Fundamentos de Sistemas Operacionais**. 9. ed. LTC, 2015.
* STALLINGS, W. **Sistemas Operacionais: Conceitos e Projetos**. 8. ed. Pearson, 2015.
* DENARDIN, G. W.; BARRIQUELLO, C. H. **Sistemas Operacionais de Tempo Real e sua Aplicação em Sistemas Embarcados**. Editora da UFRGS, 2014.
