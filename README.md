# ¿Que es la Multiplexacion?

<p align="center">
  <img  src="https://github.com/IDiegoUlises/Arduino-Multiplexacion/blob/master/Images/network.png">
</p>

En una red de internet todos los dispositivos conectados envian una señal 5 dispositivos enviaran 5 señales se utiliza la multiplexacion para unir las 5 señales y convertirla en 1 sola señal.

* **Es combinar dos o mas señales para transmitirla por un solo medio de transmision**

**Tipos de Multiplexacion**
* La multiplexacion por division de tiempo(TDM)
* La multiplexacion estadistica(TDM)
* La multiplexacion por division de frecuencia(FDM)
* La multiplexacion por division en codigo(CDM)

## ¿Como Utilizar Multiplexacion en Arduino?

  <img src="https://github.com/IDiegoUlises/Arduino-Multiplexacion/blob/master/Images/Multiplexacion-Arduino.jpg" width="400" height="600" >


* **Con 6 puertos detectamos 9 pulsadores**

Lo que debemos hacer es divir el circuito en **filas** y **columnas** solo se puede en matrices de 3x3 o 4x4 o mayores lo que sucede es que al presionar el pulsador entrega energia a toda la fila y en toda columna el Arduino recibe 2 señales para convertirla en una sola señal.  


**El Arduino se Convierte en un Mutliplexor**
```C++
void posicion(int columna, int fila)
{
  if (columna == HIGH && fila == HIGH)
  {
    digitalWrite(Led, OUTPUT);
  }
```
* Se combinan 2 señales para convertila en una sola señal

