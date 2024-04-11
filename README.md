# Edge Computing - Checkpoint 01 - 1ESA

### Integrantes:
- Gustavo do Espírito Santo
- Heitor Prestes
- Lucca Cardinale
- Mohamed
- Gustavo Atanazio

# Sistema de monitoramento de luminosidade

## Sobre o projeto:
O armazenamento de vinhos é um quesito sensível e crucial em toda adega. Existem diferentes níveis de luminosidade, temperatura e humidade que devem ser seguidos para garantir um produto da mais alta qualidade. Neste projeto, usamos o Arduino para desenvolver um sistema que identifica e alerta o usuário quanto ao nível ideal de luminosidade.

## Como funciona?
Para representar os níveis de luminosidade, foram usados três cores diferentes de LED: verde, amarela e vermelha. Cada LED indica uma situação diferente, 
como descrito abaixo:

### O que representa cada nível:
- Verde
    - Este nível indica que não há nada de errado, a luminosidade está na intensidade ideal.
- Amarelo
    - Este nível indica que a luminosidade está alta. Junto com este LED, também é acionada uma buzina para garantir que o alerta seja reconhecido.
- Vermelho
    - Este LED acende para indicar alguma falha no sistema.

### Componentes usados:
- Arduino UNO
- Fotorresistor
- Resistor de 10 kΩ
- LED verde
- LED amarelo
- LED vermelho
- 3 resistores de 220 Ω
- Piezo

### Link do Circuito
- https://www.tinkercad.com/things/6ozEGRRNSRv-edge-computing-cp1
