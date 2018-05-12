# Cubo de LEDs 3x3x3
##  By: LEGOMAN7

Este programa incluye diferentes combinaciones de luces que se realizan con una contrucción de 3x3x3 LEDs y 3 transistores. Cada combinación está definida como función, por lo que se puede modificar el orden en el que aparecen o las veces que se desea repetir cada una.

Se conecta a la placa Arduino Uno de la suguiente manera:
- 9 latiguillos que irán a puertos de salida digital para alimentar los 9 LEDs (en el void setup van del 1 al 9).
- 3 latiguillos que irán a puertos de salida digital para dar órdenes a los tres transistores (en el void setup van del 11 al 13):
- Un latiguillo que irá al pin GND, que hará de toma a tierra.

Su funcionamiento depende de los transistores. Con los pines 1-9 se enciende un LED en una determinada posición. Ahora bien, dependiendo de qué transistor está recibiendo corriente, este LED se encenderá en uno de los pisos controlado por ese transistor. El único inconveniente es que no puedes encender más de un transistor a la vez. Para eso necesitarás conectar un módulo extra.

![Alt Text](https://github.com/LEGOMAN7/IES-Alfonso-X-Murcia/blob/master/Cubo%203x3x3/Cubo%203x3x3.gif)
