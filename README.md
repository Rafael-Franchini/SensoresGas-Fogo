# Detector de Incêndio
Trabalho desenvolvido para a segunda prova prática da matéria de **Instrumentação e Sistemas de Medidas**. O projeto consiste em um **detector de incêndio** que utiliza três sensores principais para monitorar e alertar sobre condições críticas.

## Sensores ultilizados
- MQ-2: Sensor de gás para detectar gases inflamáveis e fumaça.
- DHT11: Sensor de temperatura e umidade.
- Sensor de Fogo: Utilizado para detectar a presença de chama ou fogo.
- Tela LCD I2C: Exibe informações em tempo real, como temperatura, umidade, concentração de gás e alertas de segurança.
- Buzzer: Emite sinais sonoros em caso de detecção de condições críticas, como níveis elevados de gás, altas temperaturas ou presença de fogo.

## Esquema Eletrico
![Prancheta 1](https://github.com/user-attachments/assets/5dbcd84b-7f78-481f-a991-bce74d7a6cfb)


## Resultado Final


https://github.com/user-attachments/assets/5261a568-31b5-477a-89b0-29eaefbb3a6c



## Como Usar
1. Conecte os sensores e dispositivos de acordo com o esquema elétrico.
2. Faça o upload do código para a placa utilizando o Arduino IDE.
3. Ligue o sistema e monitore as leituras no display LCD e no monitor serial.
4. O buzzer será ativado automaticamente em caso de condições críticas.

## Instalação
1. Clone este repositório:
```bash
  git clone https://github.com/seu-usuario/detector-de-incendio.git
```
3. Abra o projeto no Arduino IDE.
4. Certifique-se de ter as bibliotecas necessárias instaladas: DHT e LiquidCrystal_I2C
5. Compile e envie o código para a sua placa Arduino.

## **Contato**
Se você tiver dúvidas, sugestões ou feedback, entre em contato:

  <a href="mailto:rflfranchini@gmail.com" target="_blank"><img alt="Gmail" height="40px" width="40px" src="https://img.icons8.com/color/48/gmail--v1.png"/><a> 
  <a href="https://www.instagram.com/rafael_franchini/" target="_blank"><img alt="Instagram" height="40px" width="40px" src="https://img.icons8.com/fluency/48/instagram-new.png"/></a>
  <a href="https://www.linkedin.com/in/rafael-franchini-37b0a21a4/" target="_blank"><img alt="LinkedIn" height="40px" width="40px" src="https://img.icons8.com/fluency/48/linkedin.png"/></a>

