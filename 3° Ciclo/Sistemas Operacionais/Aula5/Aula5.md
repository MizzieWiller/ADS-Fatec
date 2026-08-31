# 🎓 Resumo da Aula: Introdução à Virtualização

**Instituição:** Fatec - Faculdade de Tecnologia
**Disciplina:** Sistemas Operacionais
**Professor:** Prof. Me. Deivison S. Takatu.

---

## 1. 📘 Conceitos Fundamentais

> **Virtualização:** Tecnologia que permite executar múltiplos sistemas operacionais simultaneamente em um único computador físico, criando ambientes isolados que simulam hardware real para testes seguros e consolidação de recursos .

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

## 5. 📝 Atividade Prática e Avaliação

**Passo a passo da atividade :**
1. Instalar o Oracle VirtualBox em sua máquina física.
2. Criar uma Máquina Virtual instalando um Linux de baixo consumo (Ex: *Tiny Core, Lubuntu, Xubuntu*).
3. Validar e testar o sistema virtualizado.
4. **Documentar** todo o processo na forma de um **Manual** e salvar no repositório da disciplina.

---

*fazer um resumo como um manuel!!*
commit 1:

---

# 🛠️ Guia Estruturado: Criação de Máquina Virtual no Oracle VirtualBox

O **Oracle VirtualBox** é o "Centro de Comando" utilizado para criar e gerenciar as construções virtuais . Abaixo está o processo detalhado utilizando especificamente a interface e as ferramentas deste software.

## 1. 🖥️ Conhecendo a Interface do Gerenciador
Antes de criar a máquina, é importante entender onde as ações ocorrem no VirtualBox :
* **Barra de Ferramentas (Topo):** Contém as ações globais imediatas, como os botões **Novo**, **Configurações** e **Iniciar** .
* **Lista de Máquinas (Esquerda):** É o inventário de todas as suas máquinas virtuais, mostrando o estado atual de cada uma (ex: *Powered Off*, *Running*) .
* **Painel de Detalhes (Direita):** Exibe a alocação exata de hardware (Sistema, Tela, Armazenamento) para a máquina selecionada na lista .

---

## 2. ⚙️ Fase 1: A "Linha de Montagem" (Configuração da VM)
Passos para forjar a nova VM usando o assistente do VirtualBox :

- [x] **1. Novo:** Clique no ícone azul **"Nova"** na Barra de Ferramentas do topo .
- [x] **2. Identidade:** 
  * Defina um **Nome** descritivo e a **Pasta** de destino da VM .
  * Indique o **Tipo** e a **Versão** do Sistema Operacional (ex: Microsoft Windows, Linux) .
  * *Opcional:* Você já pode selecionar o arquivo de **Imagem ISO** (mídia de instalação) nesta etapa .
- [x] **3. Otimização (Instalação Autônoma):** Um recurso poderoso do VirtualBox que pula telas de configuração tediosas. Você pode definir previamente usuário, senha e *hostname* para que o software instale o SO convidado automaticamente em segundo plano .
- [x] **4. Memória RAM:** No painel de Sistema, defina a quantidade de memória (a recomendação é alocar 2048 MB ou mais, dependendo do SO) .
- [x] **5. Disco Virtual:** Crie um disco virtual (VHD) estipulando um espaço em disco suficiente (geralmente entre 20 e 40 GB) .

---

## 3. 🚀 Fase 2: Instalação do Sistema Operacional
Com o "hardware" virtual criado, é hora de rodar o sistema :

- [x] **1. Obter a Mídia:** Certifique-se de ter feito o download do arquivo de instalação (extensão `.iso`) do sistema desejado .
- [x] **2. Montar a ISO (Armazenamento):** Caso não tenha inserido a ISO na etapa de Identidade, clique em **Configurações > Armazenamento** e adicione o arquivo ISO como um drive ótico virtual .
- [x] **3. Iniciar a VM:** Selecione sua nova máquina na Lista de Máquinas (à esquerda) e clique na seta verde **"Iniciar"** na Barra de Ferramentas .
- [x] **4. Instalação:** A máquina fará o *boot* pelo disco virtual inserido. A partir daqui, basta seguir o processo de instalação normal exigido pelo sistema operacional escolhido .

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
