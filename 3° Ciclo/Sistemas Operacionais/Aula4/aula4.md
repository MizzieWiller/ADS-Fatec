# 🖥 Resumo de Aula: Estrutura e Arquitetura de Sistemas Operacionais

**Instituição:** Fatec - Faculdade de Tecnologia
**Disciplina:** Sistemas Operacionais
**Professor:** Prof. Me. Deivison S. Takatu. 

---

## Importância do Sistema Operacional (SO)

O Sistema Operacional atua como uma **camada de abstração** entre as aplicações do usuário e o hardware do sistema. 

Sem um SO, cada aplicação precisaria:
* Controlar a memória e o processador diretamente;
* Gerenciar arquivos e dispositivos de entrada/saída;
* Implementar mecanismos de segurança próprios;
* Conhecer os detalhes específicos e a arquitetura de cada hardware.

---

## Componentes Principais do SO

1. **Kernel (Núcleo):** O núcleo do sistema, responsável por gerenciar os recursos mais críticos do hardware.
2. **Gerenciamento de Processos:** Responsável pelo controle e execução de programas.
3. **Gerenciamento de Memória:** Realiza a alocação, organização e proteção da memória física e virtual.
4. **Sistema de Arquivos:** Organiza os dados em estruturas hierárquicas de diretórios e pastas.
5. **Entrada e Saída (E/S):** Gerencia a comunicação com dispositivos periféricos (teclado, mouse, impressora, etc.).
6. **Drivers de Dispositivos:** Módulos de software que atuam como interface para comunicar com hardwares específicos.

---

## Modos de Execução

Para garantir a estabilidade e a segurança do sistema, o processamento é dividido em dois modos principais:

* **Modo Usuário:** As aplicações rodam com acesso restrito/limitado ao hardware.
* **System Call (Chamadas de Sistema):** Mecanismo onde a aplicação solicita um serviço ao kernel.
* **Modo Kernel:** Executa funções críticas com acesso completo a todos os recursos e ao hardware do sistema.

---

## Conceitos de Processos e Threads

* **Programa:** Arquivo estático armazenado no disco.
* **Processo:** Programa carregado em memória e em execução, possuindo seu próprio espaço de endereçamento, código, pilha (*stack*), registramenos e arquivos abertos.
* **Thread:** Fluxo de execução individual dentro de um processo.

> **Exemplo Prático:** No navegador Google Chrome:
> * A aplicação é o Google Chrome.
> * O arquivo executável executado é um processo (`chrome.exe`).
> * As abas e tarefas internas utilizam diferentes *threads*.

---

## Sistema de Arquivos e Entrada/Saída

* **Sistema de Arquivos:** Organiza dados em uma estrutura hierárquica (diretório raiz -> pastas -> arquivos).
* **Drivers de Dispositivo:** Abstraem a complexidade do hardware (ex.: teclado, mouse, disco, placas de rede, impressoras), permitindo uma comunicação padronizada com o SO.

---

## Reaproveitamento da Estrutura de SOs

A maioria dos dispositivos modernos reutiliza e adapta sistemas operacionais existentes em vez de desenvolvê-los do zero.

* **Vantagens:** Redução de custos de desenvolvimento, maior estabilidade, reaproveitamento de tecnologias já testadas e suporte contínuo.
* **Exemplos Práticos:**
  * **Raspberry Pi:** Utiliza o *Raspberry Pi OS* (baseado na distribuição Linux Debian).
  * **PlayStation 4:** Utiliza o *Orbis OS* (baseado no FreeBSD).

---

## Atividades Práticas

### Atividade 01
* **Objetivo:** Descrever o processo de formatação e instalação de um SO com base no roteiro da disciplina.
* **Formato:** Arquivo em Markdown.
* **Requisitos:** Detalhar cada etapa, identificando quais componentes do SO estão envolvidos e por que são importantes naquele momento. Salvar no repositório da disciplina.

### Atividade 02
* **Objetivo:** Pesquisar 5 Sistemas Operacionais desenvolvidos a partir de outro sistema base (kernel/arquitetura).
* **Formato:** Arquivo em Markdown contendo uma tabela comparativa detalhando as diferenças entre o SO derivado e seu sistema base. Salvar no repositório.

---

## 📌 - Atividade 1 

# Relatório de Formatação e Instalação de Sistema Operacional

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

## Referências Bibliográficas

1. **TANENBAUM, Andrew S.; BOS, Herbert.** *Sistemas Operacionais Modernos*. 4. ed. Pearson, 2016.
2. **SILBERSCHATZ, Abraham; GALVIN, Peter B.; GAGNE, Greg.** *Fundamentos de Sistemas Operacionais*. 9. ed. LTC, 2015.
3. **STALLINGS, William.** *Sistemas Operacionais: Conceitos e Projetos*. 8. ed. Pearson, 2015.
4. **DENARDIN, G. W.; BARRIQUELLO, C. H.** *Sistemas Operacionais de Tempo Real e sua Aplicação em Sistemas Embarcados*. Editora da UFRGS, 2014.
5. **AWASTHI, A.; RAWAT, V.** *Ramificação e Tarefas do Sistema Operacional*. Edições Nosso Conhecimento, 2023.
6. **DOWNEY, Allen B.** *Think OS: A Brief Introduction to Operating Systems*. Green Tea Press, 2015.
