# 🃏 Super Trunfo - Comparação de Cartas (Linguagem C)

Projeto desenvolvido como parte do desafio da disciplina, evoluindo do nível básico de condicionais até a implementação do **Nível Mestre**, com menu interativo duplo, operadores ternários e validação de atributos.

---

### 🚀 Funcionalidades Implementadas

- **Cadastro Dinâmico:** Entrada de dados completos para duas cartas (Estado, Código, Cidade, População, Área, PIB e Pontos Turísticos).
- **Cálculo de Atributos Derivados:**
  - Densidade Populacional ($\text{População} / \text{Área}$)
  - PIB per Capita ($\text{PIB} / \text{População}$)
  - Super Poder (Soma ponderada de todos os atributos)
- **Menu Interativo Duplo (`do-while` + `switch`):**
  - Permite escolher dois atributos distintos para comparação.
  - Validação automática para impedir a escolha do mesmo atributo duas vezes.
- **Regras de Vitória Especiais:**
  - **Densidade Populacional:** O menor valor vence.
  - **Demais Atributos:** O maior valor vence.

---

### 🛠️ Tecnologias Utilizadas

- **Linguagem:** C
- **Estruturas de Controle:** `if-else`, `switch-case`, `do-while`
- **Lógica e Operadores:** Ternários para atribuição do resultado e especificadores de formatação.
