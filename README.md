# LP01_012_Datas
Resolução da questão 4 da Lista de Exercícios da disciplina de Linguagem de Programação I, do curso de Bacharelado em Ciência e Tecnologia da UFRN. As soluções serão implementadas usando a linguagem C++.
## Enuciado da Questão
**Questão 4.**
- Escreva um programa para representar datas a partir dos atributos dia, mês e ano.
    - Sua classe Data deve implementar um construtor que inicializa os três atributos já em sua instanciação.
    - Forneça também um construtor padrão que inicializa os atributos de acordo com a data atual fornecida pelo sistema operacional (isto deve envolver alguma pesquisa de sua parte.Google it!!).
    - Efetue a sobrecarga do operador(«) para retornar uma representação da data como uma string. Considere que a data deve ser formatada mostrando o dia, o mês e ano separados por barra (/).
    - Implemente os métodos: somarDias(int quantidade), somarMeses(int quantidade) e somarAnos(int quantidade) que permita avançar a data atual numa quantidade de dias, meses ou anos passada por parâmetro.
    - Implemente também o método proximoDia() que permita avançar a data atual para o dia seguinte. Por fim, escreva uma classe de teste que demonstra as capacidades da classe Data.