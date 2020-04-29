# ¿Que es la Multiplexacion?

<p align="center">
  <img  src="https://github.com/IDiegoUlises/Arduino-Multiplexacion/blob/master/Images/network.png">
</p>

En una red de internet todos los dispositivos conectados envian una señal 5 dispositivos enviaran 5 señales se utiliza la multiplexacion para unir las 5 señales y convertirla en 1 sola señal.

* **Es combinar dos o mas señales para transmitirla por un solo medio de transmision**

**Tipos de Multiplexacion**
* La multiplexacion por division de tiempo o TDM sincrona
* La multiplexacion estadística o TDM asincrona o TDM estadistica
* La multiplexacion por division de frecuencia o FDM
* La multiplexacion por división en codigo o CDM

## ¿Como Utilizar Multiplexacion en Arduino?

<img src="https://github.com/IDiegoUlises/Arduino-Multiplexacion/blob/master/Images/Mutliplexacion-Botones.jpg" width="400" height="600" />

Lo que debemos hacer es divir el circuito en **filas** y **columnas** solo se puede realizer en matrices de 3x3 o 4x4 o mayores lo que sucede es que al presionar el pulsador entrega energia a toda la fila y en toda columna en el puerto del arduino recibe 2 señales para convertirla en una sola señal.  

* Circuito de 9 pulsadores
* Con 6 puertos del Arduino detectamos los 9 pulsadores

**El Arduino se Convierte en un Mutliplexor**
```C++
void posicion(int columna,int fila)
{
  if (columna == HIGH && fila == HIGH)//HIGH
  {
    digitalWrite(Led,OUTPUT);
    delay(50);
  }
```
* **El Arduino combina las 2 señales para convertila en una sola señal**
