# Momento de Retroalimentación. Reto Datos

En este directorio puede encontrar los archivos y documentos necesarios correspondientes a la estructura de componentes, arquitectura de software y un ejemplo de los datos utilizados para el reto. Cuenta con los siguientes archivos:
* **Documento de Datos del Proyecto:** Documento PDF que sirve para establecer la arquitectura del software, el almacenamiento de datos y el enfoque en cuanto a si se hará uso de Big Data o no.
* **Dataset de Ejemplo:** Archivo ZIP que contiene el script principal utilizados para el procesamiento y generación de resultados de reconocimiento facial, tomando en cuenta patrones y características de un rostro y su posterior reconocimiento. Se cuenta con una serie de directorios en los cuales se incluyó un ejemplo de dataset con los siguientes archivos:

    * [*Carpeta faces*](/final/Datos/dataset/faces/): Incluye un set de fotografías de rostros de estudiantes que el modelo puede utilizar como referencia para el modelo de reconocimiento.
    * [*Carpeta test*](/final/Datos/dataset/test/): Incluye un set de fotografías de un conjunto de estudiantes en un aula que se puede utilizar como pruebas para el modelo de reconocimiento.
    * [*Script identify.py*](/final/Datos/dataset/identify.py): Incluye el modelo pre-entrenado para realizar el reconocimiento facial con base en el set de rostros dentro del set de pruebas. Se puede ejecutar este código directamente para probar el rendimiento de dicho modelo y comprobar que tan certero y bueno es. Este archivo genera una imagen de salida "*output_image*" con el reconocimiento facial realizado.

## Cambios realizados con respecto a la entrega anterior
Se realizaron varias modicaciones con el fin de cumplir con los criterios de la rúbrica que no se lograron alcanzar previamente. Además, se modificó la estructura del dataset debido a que el proceso de reconocimiento facial cambió durante el proceso del desarrollo y selección de los modelos. Debido a que no hubo retroalimentación de los profesores correspondientes, se tomó en cuenta actualizar esta entrega para coincidir con el estado actual del proyecto.

Al principio, se hacia uso de una haarcascade para realizar el reconocimiento facial, y se ocupaba una cantidad mayor de datos de entrada, más scripts, mayor procesamiento y entrenamiento para un resultado mínimamente decente. Ahora solo se necesita un set de rostros, un set de pruebas y solamente el script del modelo de reconocimiento facial pre-entrenado que entrega mejores resultados por una menor cantidad de datos.