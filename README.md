# Projeto Arduíno para manipular um sensor de luminosidade

## Contextualização

Neste experimento fiz com que o dois LEDs incorporados acendam separadamente de acordo com o sensor de presença. 

## Lista de componentes:

– Arduíno UNO R3
– Um cabo de conexão USB
– Placa de prototipação (Protoboard)
– LED
– Resistor de 220 Ω ohms
– Resistor de 10k Ω ohms
– Fotoresistor (Sensor de luminosidade) LDR
– Jumpers (macho-macho)

## Esquema do projeto

![Esquema do projeto](esquema_projeto.PNG)

## Projeto no Tinkercad

https://www.tinkercad.com/things/1XrqkoqBrCH

## Experimentar e pesquisar:

- Altere a sensibilidade do fotoresistor modificando o valor 750 na linha 17. Experimente valores como
600 ou 900. Lembrando que esse valor pode ser entre 0 e 1023.
- Altere o programa para fazer o inverso, muita luz liga o LED e pouca luz desliga o LED.
- Faça uma alteração para adicionar um segundo LED ao esquema. Onde somente o primeiro LED deve
ser ligado na falta de luz e o somente o segundo LED deve ser ligado na falta de luz.
- Monitore no monitor serial o valor da luminosidade.
