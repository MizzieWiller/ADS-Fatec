# 📝 Resumo da Aula: Documentação de Software

**Instituição:** Fatec - Faculdade de Tecnologia **Disciplina:** Sistemas Operacionais **Professor:** Prof. Me. Deivison S. Takatu  

---

## 📘 Conceitos Fundamentais

> **Documentação de Software:** Conjunto de informações que ajuda pessoas a compreender, utilizar, desenvolver, testar e manter um sistema. Documentar não é apenas registrar, é tornar o conhecimento reutilizável.

**Pergunta-chave:** *"Se eu entrar hoje no GitHub do seu projeto, consigo entender e executar o projeto sem perguntar nada para vocês?"*

### Uma boa documentação responde
* O que é o projeto e para que ele serve?
* Como instalar e configurar?
* Como executar e testar?
* Como contribuir e realizar mudanças?

### Por que documentar?
* **Comunicação:** compartilhar conhecimento entre pessoas.
* **Manutenção:** facilitar correções e evolução.
* **Colaboração:** permitir trabalho conjunto.
* **Continuidade:** reduzir a dependência de indivíduos.

### O que acontece sem documentação?
* Dependência de desenvolvedores específicos e perda de conhecimento quando alguém deixa a equipe.
* Dificuldade para novos integrantes entrarem no projeto.
* Configurações esquecidas ou executadas de forma diferente.
* Maior tempo de manutenção e perguntas repetitivas sobre instalação, execução e deploy.

### Quem utiliza?
* **Dev:** inicia o trabalho com menor dependência da equipe.
* **Tester:** identifica como executar e validar os testes.
* **DevOps:** configura pipeline, ambientes e deploy.
* **Gestor:** acompanha processos e decisões.
* **Usuário:** aprende a utilizar o produto.

> 🔗 **Exemplo da aula:** [github.com/deivisontakatu/aula-documentacao-software](https://github.com/deivisontakatu/aula-documentacao-software)
> **Projetos bem documentados:** `torvalds/linux`, `react/react`, `nodejs/node`, `docker/docs`, `bitcoin/bitcoin`, `github/brasil`.

---

## ⚙️ Áreas Envolvidas e Tipos de Documentação

### Combinação de Áreas
* **Engenharia de Software:** requisitos, arquitetura, código e testes.
* **Gestão de Projetos:** escopo, cronograma, riscos e entregas.
* **DevOps:** CI/CD, infraestrutura, deploy e monitoramento.
* **Segurança da Informação:** vulnerabilidades, políticas, acessos e incidentes.
* **Qualidade (QA):** testes, critérios de aceitação, evidências.
* **Produto / UX:** requisitos do usuário, jornadas, regras de negócio e usabilidade.

### Tipos de Documentação
1. **🏗️ Técnica:** descreve arquitetura, APIs, banco de dados, componentes e configurações.
2. **📋 De projeto:** registra objetivos, requisitos, decisões e organização.
3. **🔁 De processo:** descreve branches, commits, Pull Requests, testes, pipeline e deploy.

---

## 📄 O README no GitHub

O README normalmente é o **primeiro documento consultado** em um repositório. Ele deve permitir entender rapidamente: propósito, tecnologias, pré-requisitos, instalação e execução, testes, contribuição e links importantes.

### Seções recomendadas
* **Tecnologias e pré-requisitos:** informe a stack (linguagem e versão, framework, banco, gerenciador de pacotes, Docker, Git) e as versões mínimas ou recomendadas.
* **Instalação e execução:** transforme o processo em uma sequência reproduzível:
  1. Clonar o repositório
  2. Acessar a pasta
  3. Instalar dependências
  4. Configurar variáveis
  5. Executar o projeto
  6. Acessar a aplicação
  7. Executar os testes
* **Configuração e variáveis:** explique quais variáveis existem, para que servem, quais são obrigatórias e como criar o arquivo de configuração, **sem expor dados sensíveis**.
* **Execução e testes:** comandos para iniciar a aplicação, rodar testes unitários, de integração e de performance (quando houver) e verificar falhas.
* **Estrutura do projeto:** mostre as principais pastas e a responsabilidade de cada uma, sem documentar arquivo por arquivo.

```env
PORT=3000
DATABASE_URL=sua_url_aqui
API_KEY=sua_chave_aqui
```

```text
├── src/               # aplicação
├── tests/             # testes
├── docs/              # documentação
└── .github/workflows/ # pipelines
```

---

## 🔄 Documentação do Processo DevOps

1. **Desenvolvimento:** implementação de funcionalidades e correções.
2. **Git:** controle de versão e histórico das alterações.
3. **Pull Request:** solicitação de revisão e integração das mudanças.
4. **Build:** compilação ou preparação do software para execução.
5. **Testes:** validação do funcionamento e identificação de falhas.
6. **Pipeline CI/CD:** automação de integração, validação e entrega.
7. **Deploy:** publicação da aplicação em um ambiente de execução.

---

## 🔐 O que NÃO colocar na documentação

* **Senhas e credenciais** de usuários, administradores ou bancos de dados.
* **Chaves de API e tokens** que permitam acessar serviços ou recursos privados.
* **Dados sensíveis:** informações pessoais, dados confidenciais de clientes e informações internas restritas.
* **Arquivos `.env`** ou configurações que contenham segredos.
* **Infraestrutura restrita:** detalhes que facilitem acessos indevidos ou comprometam a segurança.

---

## 📌 Atividade Prática

1. Escolher um projeto de software e elaborar sua documentação, apresentando:
   * Objetivo e problema que pretende resolver;
   * Escopo;
   * Principais requisitos funcionais e não funcionais.
2. Descrever as tecnologias utilizadas, a arquitetura da aplicação e a organização dos principais componentes.
3. Criar ou atualizar o `README.md` do repositório no GitHub, incluindo pré-requisitos, instalação, configuração e execução.
4. Quando aplicável, documentar também **APIs, banco de dados, variáveis de ambiente e procedimentos de testes e deploy**.

---

➡️ 😺 Projeto escolhido: **Miau Links** (https://miaulinks.netlify.app/). A documentação está em [readme.md](https://github.com/MizzieWiller/MiauLinks/blob/main/README.md).

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
