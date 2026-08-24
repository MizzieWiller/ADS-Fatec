# 🖥 Resumo de Aula: Estrutura e Arquitetura de Sistemas Operacionais

**Instituição:** Fatec - Faculdade de Tecnologia
**Disciplina:** Sistemas Operacionais
**Professor:** Prof. Me. Deivison S. Takatu. 

---

## 💻 Importância do Sistema Operacional (SO)

O Sistema Operacional atua como uma **camada de abstração** entre as aplicações do usuário e o hardware do sistema. 

Sem um SO, cada aplicação precisaria:
* Controlar a memória e o processador diretamente;
* Gerenciar arquivos e dispositivos de entrada/saída;
* Implementar mecanismos de segurança próprios;
* Conhecer os detalhes específicos e a arquitetura de cada hardware.

---

## ⚙ Componentes Principais do SO

1. **Kernel (Núcleo):** O núcleo do sistema, responsável por gerenciar os recursos mais críticos do hardware.
2. **Gerenciamento de Processos:** Responsável pelo controle e execução de programas.
3. **Gerenciamento de Memória:** Realiza a alocação, organização e proteção da memória física e virtual.
4. **Sistema de Arquivos:** Organiza os dados em estruturas hierárquicas de diretórios e pastas.
5. **Entrada e Saída (E/S):** Gerencia a comunicação com dispositivos periféricos (teclado, mouse, impressora, etc.).
6. **Drivers de Dispositivos:** Módulos de software que atuam como interface para comunicar com hardwares específicos.

---

## 🕹 Modos de Execução

Para garantir a estabilidade e a segurança do sistema, o processamento é dividido em dois modos principais:

* **Modo Usuário:** As aplicações rodam com acesso restrito/limitado ao hardware.
* **System Call (Chamadas de Sistema):** Mecanismo onde a aplicação solicita um serviço ao kernel.
* **Modo Kernel:** Executa funções críticas com acesso completo a todos os recursos e ao hardware do sistema.

---

## 🔩 Conceitos de Processos e Threads

* **Programa:** Arquivo estático armazenado no disco.
* **Processo:** Programa carregado em memória e em execução, possuindo seu próprio espaço de endereçamento, código, pilha (*stack*), registramenos e arquivos abertos.
* **Thread:** Fluxo de execução individual dentro de um processo.

> **Exemplo Prático:** No navegador Google Chrome:
> * A aplicação é o Google Chrome.
> * O arquivo executável executado é um processo (`chrome.exe`).
> * As abas e tarefas internas utilizam diferentes *threads*.

---

## 🗂 Sistema de Arquivos e Entrada/Saída

* **Sistema de Arquivos:** Organiza dados em uma estrutura hierárquica (diretório raiz -> pastas -> arquivos).
* **Drivers de Dispositivo:** Abstraem a complexidade do hardware (ex.: teclado, mouse, disco, placas de rede, impressoras), permitindo uma comunicação padronizada com o SO.

---

## 🔧 Reaproveitamento da Estrutura de SOs

A maioria dos dispositivos modernos reutiliza e adapta sistemas operacionais existentes em vez de desenvolvê-los do zero.

* **Vantagens:** Redução de custos de desenvolvimento, maior estabilidade, reaproveitamento de tecnologias já testadas e suporte contínuo.
* **Exemplos Práticos:**
  * **Raspberry Pi:** Utiliza o *Raspberry Pi OS* (baseado na distribuição Linux Debian).
  * **PlayStation 4:** Utiliza o *Orbis OS* (baseado no FreeBSD).

---

## 📌 Atividades Práticas

### 📌 Atividade 01
* **Objetivo:** Descrever o processo de formatação e instalação de um SO com base no roteiro da disciplina.
* **Formato:** Arquivo em Markdown.
* **Requisitos:** Detalhar cada etapa, identificando quais componentes do SO estão envolvidos e por que são importantes naquele momento. Salvar no repositório da disciplina.

### 📌 Atividade 02
* **Objetivo:** Pesquisar 5 Sistemas Operacionais desenvolvidos a partir de outro sistema base (kernel/arquitetura).
* **Formato:** Arquivo em Markdown contendo uma tabela comparativa detalhando as diferenças entre o SO derivado e seu sistema base. Salvar no repositório.

---

## 📌 - Atividade 1 

# 📃 Relatório de Formatação e Instalação de Sistema Operacional

## 1. Preparação da Mídia de Instalação e Configuração da BIOS/UEFI

* **O que acontece:** O computador é inicializado e o controle é assumido pela BIOS/UEFI (firmware do hardware). O usuário altera a ordem de inicialização (*Boot Order*) para carregar o instalador contido em uma mídia externa (ex.: pendrive bootável).
* **Componentes do SO envolvidos:** 
  * **Drivers de Dispositivos (E/S):** Inicialização básica dos barramentos USB e armazenamento para reconhecer o pendrive.
* **Importância:** O hardware precisa localizar um setor de *boot* válido para carregar as rotinas iniciais do instalador, permitindo a transição do firmware para o sistema operacional temporário de instalação.

---

## 2. Carregamento do Kernel de Instalação em Memória

* **O que acontece:** A imagem do instalador transfere o núcleo do SO e utilitários básicos da mídia externa para a memória RAM.
* **Componentes do SO envolvidos:** 
  * **Kernel (Núcleo):** É carregado para assumir o controle total da CPU e dos dispositivos de hardware.
  * **Gerenciamento de Memória:** O kernel reserva blocos de memória RAM física para mapear as instruções de instalação e espaço de trabalho.
  * **Modos de Execução:** Transição da CPU para o **Modo Kernel**, permitindo às rotinas do instalador privilégios totais de leitura e escrita.
* **Importância:** Garante que o ambiente de instalação execute com estabilidade em privilégio de sistema, estabelecendo a camada de abstração entre o instalador e o hardware.

---

## 3. Particionamento e Formatação do Disco (Criação do Sistema de Arquivos)

* **O que acontece:** A tabela de partições existente é limpa ou redefinida (ex.: GPT/MBR). As partições são criadas e formatadas com um sistema de arquivos específico (ex.: ext4, NTFS).
* **Componentes do SO envolvidos:** 
  * **Sistema de Arquivos:** Criação de estruturas de diretórios, tabelas de alocação, *inodes* e metadados de armazenamento.
  * **Driver do Disco:** Gerencia os comandos físicos de leitura, escrita e exclusão nos setores do disco.
* **Importância:** A formatação prepara o espaço bruto do disco rígido ou SSD para que os dados possam ser organizados, localizados e gerenciados de forma confiável pelo SO.

---

## 4. Cópia dos Arquivos do Sistema e Configuração da Estrutura

* **O que acontece:** Os arquivos binários do SO, diretórios do sistema (raiz, bibliotecas, utilitários), suporte a múltiplos usuários e configurações base são gravados na partição criada.
* **Componentes do SO envolvidos:** 
  * **Gerenciamento de Processos:** O instalador executa múltiplos processos e *threads* concorrentes para descompactar e validar a integridade dos pacotes.
  * **Sistema de Arquivos:** Escrita e organização dos diretórios hierárquicos e atribuição de permissões de arquivo.
* **Importância:** Estrutura o diretório raiz e transfere os componentes permanentes necessários para a execução do SO sem dependência do pendrive.

---

## 5. Instalação e Configuração dos Drivers de Dispositivo

* **O que acontece:** O instalador detecta a arquitetura de hardware presente (placa de vídeo, placa de rede, controladores de áudio e chipsets) e carrega os módulos de drivers correspondentes.
* **Componentes do SO envolvidos:** 
  * **Drivers de Dispositivo:** Atuam como intermediários/tradutores entre a lógica do Kernel e as especificidades técnicas do hardware.
  * **Entrada/Saída (E/S):** Estabelece portas e canais de comunicação com periféricos.
* **Importância:** Abstrai a complexidade do hardware específico, garantindo que o SO e as futuras aplicações do usuário consigam se comunicar com os periféricos corretamente.

---

## 6. Criação do Bootloader e Configuração do Espaço de Usuário

* **O que acontece:** Gravação do gerenciador de inicialização (ex.: GRUB ou Windows Boot Manager) no setor de boot da partição, seguido da criação dos usuários do sistema e finalização da instalação.
* **Componentes do SO envolvidos:** 
  * **Gerenciamento de Processos e Threads:** Inicialização das rotinas de primeiro uso (*first-boot services*).
  * **Modos de Execução:** Alternância para o **Modo Usuário** assim que a interface gráfica ou *shell* é entregue ao utilizador final, restringindo permissões de acesso direto ao hardware por segurança.
* **Importância:** O bootloader permite que a BIOS/UEFI localize o Kernel no disco nos próximos arranques, enquanto a transição para o Modo Usuário garante a proteção e segurança do sistema.

---

## 📌 - Atividade 2

# 📖 Pesquisa e Tabela Comparativa: Sistemas Operacionais Solicitados

## 1. Visão Geral
Muitos sistemas operacionais e firmwares utilizam estruturas, kernels ou arquiteturas pré-existentes para garantir compatibilidade, estabilidade ou reutilização de recursos de hardware.

---

## 2. Tabela Comparativa

| SO Derivado | SO / Kernel / Base Originária | Foco do SO Derivado | Principais Diferenças e Adaptações em Relação à Base |
| :--- | :--- | :--- | :--- |
| **Raspberry Pi OS** | **Debian (Linux)** | Placas para educação, projetos de eletrônica e prototipagem. | Recompilado e otimizado para processadores com arquitetura ARM. Substitui o ambiente de trabalho padrão por uma interface leve (PIXEL) e inclui softwares educacionais pré-instalados. |
| **Unix** | **MULTICS** | Computação multiusuário e multitarefa em computadores centrais (Mainframes). | O Unix simplificou os conceitos complexos e pesados do MULTICS, adotando uma arquitetura minimalista ("faça apenas uma coisa e faça bem"), sistemas de arquivos em árvore simples e linguagem C. |
| **Linux** | **MINIX** | Núcleo de sistema operacional de código aberto para uso geral. | O MINIX era um sistema educacional de microkernel com código limitado. Linus Torvalds criou o Linux usando um kernel monolítico para alto desempenho e livre de restrições acadêmicas de licença. |
| **Lakka** | **LibreELEC (Linux)** | Emulação de consoles de videogame antigos (Retrogaming). | Removeu o centro de mídias Kodi (foco do LibreELEC) e o substituiu pelo frontend RetroArch. Roda de forma ultraleve e direta a partir da memória RAM em dispositivos como PCs e placas ARM. |
| **Game Boy Boot ROM** | **Arquitetura Sharp LR35902 (Z80)** | Inicialização de hardware e verificação do cartucho no Nintendo Game Boy. | Trata-se do micro-SO de inicialização (256 bytes). Executa a rolagem do logotipo "Nintendo", verifica o checksum do cartucho no hardware e desativa a si próprio para entregar o controle total ao jogo. |

# 📃 Mini Resumo dos Sistemas Operacionais Escolhidos:

**Raspberry Pi OS**
É uma distribuição Linux oficial criada para os mini-computadores Raspberry Pi. Utiliza o **Debian** como base, mas foi recompilada e adaptada para rodar em processadores de arquitetura ARM de baixo consumo de energia. Traz a interface leve PIXEL (baseada em LXDE) e vem com ferramentas educacionais e de programação pré-instaladas.

---

**Unix**
Criado no início dos anos 1970 nos laboratórios Bell, o Unix teve o **MULTICS** como sua principal inspiração conceitual. Seus criadores pegaram as ideias de multitarefa e multiusuário do MULTICS e as simplificaram drasticamente, adotando o princípio de ferramentas pequenas e modulares ("faça uma coisa e faça bem"), um sistema de arquivos hierárquico em árvore e o uso da linguagem C para garantir portabilidade entre diferentes hardwares.

---

**Linux**
Lançado por Linus Torvalds em 1991, o Linux é um núcleo de sistema operacional de código aberto. Ele foi desenvolvido tendo o **MINIX** (um pequeno sistema operacional acadêmico do tipo Unix) como ambiente inicial de estudo e testes. Linus usou o MINIX para entender o funcionamento do processador e das chamadas de sistema, criando um kernel monolítico focado em alto desempenho e livre de restrições de licenças acadêmicas.

---

**Lakka**
É um sistema operacional voltado para *retrogaming* que transforma pequenos computadores e placas ARM em consoles de jogos antigos. Ele usa o **LibreELEC** (uma distribuição Linux ultra-minimalista) como base. Em vez de carregar um ambiente de trabalho ou o media center Kodi, o Lakka inicializa diretamente na interface *RetroArch*, consumindo o mínimo de memória RAM e recursos da CPU para focar o desempenho na emulação dos jogos.

---

**Game Boy Boot ROM**
Trata-se do micro-sistema de inicialização (firmware de apenas 256 bytes) gravado de fábrica no circuito do Nintendo Game Boy clássico. Ele funciona sobre a arquitetura do processador **Sharp LR35902** (derivado do Zilog Z80). Sua função exclusiva é inicializar o hardware do console, tocar o som característico de *boot*, exibir o logotipo da Nintendo deslizando pela tela e validar o *checksum* do cartucho inserido. Após essa verificação, ele se autodesativa da memória para dar controle total do hardware ao jogo.

---

## 3. Análise Técnica dos Componentes Envolvidos

* **Drivers e Hardware:** Sistemas como o **Raspberry Pi OS** e **Lakka** utilizam os drivers do Kernel Linux para abstrair componentes de entrada e saída (controles, monitores e porta USB).
* **Execução Direta em Hardware:** A **Game Boy Boot ROM** opera em nível mínimo de abstração, comunicando-se diretamente com os registradores do processador e enviando comandos puros aos chips de som e de vídeo do console.
* **Kernel e Evolução:** A transição **MINIX -> Linux** e **MULTICS -> Unix** demonstra como a simplificação das chamadas de sistema e da gestão de memória permitiu o surgimento de sistemas mais eficientes e populares.


---

## 📚 Referências Bibliográficas

1. **TANENBAUM, Andrew S.; BOS, Herbert.** *Sistemas Operacionais Modernos*. 4. ed. Pearson, 2016.
2. **SILBERSCHATZ, Abraham; GALVIN, Peter B.; GAGNE, Greg.** *Fundamentos de Sistemas Operacionais*. 9. ed. LTC, 2015.
3. **STALLINGS, William.** *Sistemas Operacionais: Conceitos e Projetos*. 8. ed. Pearson, 2015.
4. **DENARDIN, G. W.; BARRIQUELLO, C. H.** *Sistemas Operacionais de Tempo Real e sua Aplicação em Sistemas Embarcados*. Editora da UFRGS, 2014.
5. **AWASTHI, A.; RAWAT, V.** *Ramificação e Tarefas do Sistema Operacional*. Edições Nosso Conhecimento, 2023.
6. **DOWNEY, Allen B.** *Think OS: A Brief Introduction to Operating Systems*. Green Tea Press, 2015.
