# 🖥 Resumo da Aula: Introdução à Virtualização

**Instituição:** Fatec - Faculdade de Tecnologia
**Disciplina:** Sistemas Operacionais
**Professor:** Prof. Me. Deivison S. Takatu.

---

## 1. 📘 Conceitos Fundamentais

> _**Virtualização:** Tecnologia que permite executar múltiplos sistemas operacionais simultaneamente em um único computador físico, criando ambientes isolados que simulam hardware real para testes seguros e consolidação de recursos._

### Vantagens da Adoção
| Vantagem | Descrição Prática  |
| :--- | :--- |
| **Economia de Hardware** | Reduz custos consolidando múltiplos servidores em uma única máquina física. |
| **Isolamento Seguro** | Permite realizar testes de forma segura sem risco de comprometer o sistema principal. |
| **Agilidade e Testes** | Facilita a criação rápida de *snapshots* (instantâneos) e a recuperação de configurações. |
| **Múltiplos Sistemas** | Execução simultânea de diferentes sistemas operacionais (Windows, Linux, macOS, etc). |

---

## 2. ⚙️ Arquitetura de Virtualização

Para que a virtualização funcione, o ambiente opera basicamente em três grandes camadas :

1. **🖥️ Sistema Hospedeiro (Host):** É o sistema operacional principal instalado fisicamente no seu computador .
2. **🧠 Hypervisor (Camada de Virtualização):** É a camada ou software responsável por simular o hardware . Suas atribuições incluem:
   * Distribuir recursos físicos (CPU e Memória RAM) .
   * Gerenciar e isolar os dispositivos virtuais .
   * Controlar o acesso e a comunicação com o hardware real .
3. **💻 Sistema Convidado (Guest):** O sistema operacional secundário que é executado de forma isolada dentro da máquina virtual .

---

## 3. 🛠️ Ferramenta: Oracle VirtualBox

O **Oracle VirtualBox** é um software de virtualização gratuito e open-source (para uso pessoal e educacional) . Ele é multiplataforma, operando nativamente em Windows, Linux, macOS e Solaris .

### Componentes da Interface 
* **Painel Principal:** Lista de todas as VMs criadas com status de energia (ex: *Powered Off*, *Running*).
* **Configurações:** Onde se ajustam os recursos dedicados (CPU, RAM, Tela).
* **Armazenamento:** Painel para gerenciar discos virtuais e conectar mídias/ISOs.
* **Rede:** Central de configuração de adaptadores para acesso à internet e comunicação local.

---

## 4. 🚀 Guia Prático: Construindo uma VM

### Fase 1: Configuração Básica 
- [x] **1. Novo:** Clicar no botão "Nova" para forjar a VM.
- [x] **2. Identidade:** Preencher Nome, Tipo e Versão do SO (ex: Windows 10, Linux).
- [x] **3. Memória (RAM):** Definir a capacidade (Recomendação geral: 2048 MB ou mais).
- [x] **4. Disco Virtual:** Criar um disco (VHD) estipulando um tamanho razoável (20-40 GB).

### Fase 2: Instalação do Sistema 
- [x] **1. Obter a Mídia:** Fazer o download do arquivo de imagem do sistema (`.iso`).
- [x] **2. Montar:** Nas configurações de armazenamento, inserir a ISO no drive virtual.
- [x] **3. Iniciar:** Ligar a VM para dar o *boot* pela mídia de instalação.
- [x] **4. Instalar:** Seguir as telas de instalação do sistema (pode ser feita de forma autônoma/otimizada pelo VirtualBox).

> 💡 **Exemplo de SO Leve para Testes: Tiny Core Linux** 
> * **Tamanho:** ISO varia entre 17 MB e 248 MB.
> * **Foco:** Desempenho, simplicidade, arquitetura modular e baixíssimo consumo de recursos.

---

## 📌 Atividades Práticas e Avaliação

**Passo a passo da atividade:**
1. Instalar o Oracle VirtualBox em sua máquina física.
2. Criar uma Máquina Virtual instalando um Linux de baixo consumo (Ex: *Tiny Core, Lubuntu, Xubuntu*).
3. Validar e testar o sistema virtualizado.
4. **Documentar** todo o processo na forma de um **Manual** e salvar no repositório da disciplina.

---
# 🔌 Manual de Virtualização - Lubuntu no VirtualBox (Particionamento Manual)
---

**🧠 Objetivo**

Demonstrar a configuração e o particionamento manual de um disco virtual por meio da criação de uma máquina virtual rodando o sistema operacional Lubuntu, analisando seu funcionamento e relacionando com conceitos da disciplina de Sistemas Operacionais.

---

## 🛠️ Instalação do Ambiente

---

Para a realização da atividade, foram utilizadas as seguintes ferramentas:
**Oracle VirtualBox:** software de virtualização
**Arquivo ISO do Lubuntu**
**Sistema operacional hospedeiro (Host):** Windows 10
O VirtualBox foi escolhido por ser gratuito, multiplataforma, intuitivo e muito utilizado em ambientes educacionais.

---

## 💻 Criação da Máquina Virtual

A máquina virtual foi criada seguindo os passos:

1. **Abrir o VirtualBox e clicar em "Nova"**   
  * Nome: Lubuntu-VM
  * Tipo: Linux
  * Versão: Ubuntu (64-bit)

2. **Configurar memória RAM:**
  * 2048 MB (suficiente para o sistema e para compensar a ausência de Swap)

3. **Criar disco virtual:**
  * Tipo: VDI
  * Alocação dinâmica
  * Tamanho: 16 GB

---

## 📀 Particionamento e Instalação do Lubuntu

**O processo de instalação com particionamento manual ocorreu da seguinte forma:**
 
  * Inicialização da máquina virtual com a ISO
  * Seleção da opção "Particionamento manual"
  * Criação de "Nova Tabela de Partições" do tipo MBR (modo BIOS)
  * Configuração da partição principal: Uso de 100% do espaço livre (16 GB)
  * Sistema de arquivos: ext4
  * Ponto de montagem: / (raiz)
  * Marcador: root
  * Instalação do carregador de inicialização (GRUB) no disco inteiro (/dev/sda)
  * Finalização da instalação e inicialização do sistema

---

## 🔍 Testes Realizados

- Durante a execução da máquina virtual, foram realizados testes básicos:
- Inicialização do sistema através do GRUB
- Navegação pela interface gráfica leve (LXQt)
- Acesso à estrutura de diretórios a partir da raiz
- Execução de aplicativos básicos (bloco de notas, internet)
O sistema apresentou funcionamento altamente estável e rápido, tirando proveito da característica leve da distribuição.

---

## ⚙️ Análise Técnica (Conceitos de SO)

🔹 Tabela de Partições (MBR vs GPT)

Foi utilizado o padrão MBR (Master Boot Record), estrutura clássica suportada por inicializações em modo BIOS, definindo como o disco de 16 GB está logicamente dividido.

🔹 Memória Virtual (Swap) e Otimização

A partição Swap atua como extensão da RAM no disco. Como o Lubuntu é um sistema de baixo consumo de recursos, e o disco virtual tem apenas 16 GB, optou-se por focar o armazenamento nos arquivos do sistema, dispensando o Swap sem comprometer a estabilidade.

🔹 Sistema de Arquivos e Hierarquia

Diferente do Windows, o Linux utiliza uma árvore de diretórios unificada. O ponto de montagem `/` (raiz) garante que todos os diretórios do SO sejam gravados nessa única partição estruturada em ext4.

🔹 Bootloader

O carregador de inicialização foi instalado diretamente no `/dev/sda` (MBR do disco físico virtual), permitindo que a BIOS encontre as instruções de boot sem depender de partições específicas.

## 📊 Vantagens do Particionamento Manual Observadas

Aproveitamento total do armazenamento de 16 GB
Controle absoluto sobre a alocação e formato do sistema de arquivos
Adequação perfeita da infraestrutura virtual à proposta leve do Lubuntu

## ⚠️ Desafios Encontrados

Tomada de decisão arquitetural sobre a ausência da partição Swap
Atenção redobrada para não instalar o carregador de inicialização na partição errada (como /dev/sda1)

## 🧾 Conclusão

A instalação via particionamento manual exige um planejamento profundo dos recursos da máquina virtual.
A utilização do Lubuntu aliado ao particionamento evidenciou:
A importância da hierarquia de arquivos em sistemas baseados em Unix
O impacto do gerenciamento de armazenamento e memória em sistemas leves
O papel essencial do bootloader no processo de inicialização
Essa prática reforça como a gestão de partições é essencial para o entendimento da arquitetura de Sistemas Operacionais.


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
