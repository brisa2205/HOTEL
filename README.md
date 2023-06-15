# HOTEL/TC1030
-Contexto

Este proyecto es creado con el fin de poder llevar un control acerca sobre los servicos que ofrece el hotel. En el cual se ofrecen diferente servicios como alojamiento, resturante y eventos, de manera que el cliente puede ver los servicios disponibles, pueda apartar el sericio y al final le muestre el servicio que aparto  es decir un resumen.

-FUNCIONAMIENTO DEL PROGRAMA
El progrsama pregunta datos del usuario, una vez registrados el porgrama manda un menu con las respectivas opciones de lo servicios dispoinibles , estos ya fueron creados por lo cual solo los imprimira, posterioremnte a esto elegirás que opcion deseas del servicio, este se va a apartar y por ultimo te mostrar lo  apartado.



-INSTRUCCIONES
El progrma pedirá datos como el no. de servicio, nombre del cliente, apellido, correo y metodo de pago. teniendo esto en cuenta puedes ingresar datos libres no hay restricción.
posteriormente no desplegará un menu, y te dirá que ingreses una opcion, esto solo funciona con numeros enteros desde el 1 hasta el 4, dependiendo de lo que elijas es lo que desplegará el sistema. para que tenga la funcion que necesito recomiendo picar las opciones en orden, en caso de que lo hagas asi el sistema funcionará de acuerdo a la descripcion dada.


-RETROALIMENTACIONES 

RETROALIMENTACION
Faltan consideraciones/ casos que con el que el proyecto no funcionaría. Hay métodos sin la especificación de visibilidad (+,-..) en ServicioHotel. La relación de composición entre ticket y servicio es al revés (el servicio genera un ticket). El cliente adquiere el ticket al pedir un servicio,y pide el servicio por medio del recepcionista. La relación de herencia no se ve claramente.			
ARREGLO
De acuerdo a la sugerencia, se hizo una modificación de clases por cuestiones de logica y de implemntación en código, ahorar todos los metodos tienen visibilidad, las relaciones que podemos apreciar es de herencia teniendo como cclase padre a servicioHotel e hijas a restaurante, evento y alojamiento , asimismo la clase cliente tiene una agregación de servicioHotel. Podemos apreciar que la clase hotel ya no se encuentra vigente, por lo que en código tampoco.
RETROALIMENTACIÓN
Favor de poner tu nombre y matrícula en tu repositorio. Agregar modificadores de acceso en UML. No hay sobreescritura, solo sobrecarga. Arreglar la flecha de herencia en el UML.			

ARREGLO
De acuerdo a la retroalimentación, en el repositorio ya han sido agregados mis datos como el nombre y matricula, asimismo han sido agregados los modificadores de acceso en el UML, además de que también se arreglo la flecha en mal posición de herencia.
RETROALIMENTACIÓN 3
No compila. Marca error en la librería <stream> de Hotel.h
ARREGLO
El codigo fue elaborado nuevamente y compila de manera correcta.
RETROALIMENTACION 4
No compila. Sin embargo, estaba revisando tu clase abstracta y veo que, aunque sea virtual, sigues definiendo el comportamiento del método en la clase Hotel.	
ARREGLO 

El programa ya compila de mnaera correcta además tambien se soluciono el virtual.

De acuerdo a la rúbbrica de evaluación, hago uso de dicha rubrica para poder comparar los cambios.

EVIDENCIA:
Se implementa de manera correcta el concepto de Polimorfismo
Se implementa de manera correcta el concepto de Clases Abstractas
DEMOSTRACIÓN
EN el serviciohotel.h linea 36 se genera un virtual lo cual nos dice que ese metodo funcionara a las clases de herencia, con la diferencia de que cada un actuará diferente asi mismo el igualar la función void a 0; esa clase se hace abstracta. 


