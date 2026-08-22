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

# Atividade 2 - 

![print repositótio clonado] (https://github.com/user-attachments/assets/d3c3d0c9-7557-4b2d-a43a-e4fa68c9ab15)



---

## 📚 Referências

* TANENBAUM, A. S.; BOS, H. **Sistemas Operacionais Modernos**. 4. ed. Pearson, 2016.
* SILBERSCHATZ, A.; GALVIN, P. B.; GAGNE, G. **Fundamentos de Sistemas Operacionais**. 9. ed. LTC, 2015.
* STALLINGS, W. **Sistemas Operacionais: Conceitos e Projetos**. 8. ed. Pearson, 2015.
* DENARDIN, G. W.; BARRIQUELLO, C. H. **Sistemas Operacionais de Tempo Real e sua Aplicação em Sistemas Embarcados**. Editora da UFRGS, 2014.
