# Momento de Retroalimentación. Metodología del Proyecto

En este directorio puede encontrar los documentos necesarios correspondientes a la metodología establecida a seguir del reto. Cuenta con los siguientes archivos:
* **Documento de Requerimientos.pdf:** Documento PDF que sirve para establecer los requerimientos que el software necesita cumplir en su versión final.
* **Memorándum de Entendimiento.pdf:** Documento PDF que describe el acuerdo bilateral entre el socio formador (NDS) y los alumnos pertenecientes al equipo 2 de la concentración de *Inteligencia Artificial Avanzada II*.
* **Mapeo de Recursos y Herramientas Disponibles.pdf:** Documento PDF que define las herramientas a utilizar para el desarrollo del sistema automatizado de pase de lista y participación.
* **Plan de Proyecto:** Documento PDF que incluye una breve descripción y diagramas que proyectan la metodología a seguir para nuestro proyecto. Así mismo, este documneto incluye una sección asignada para los avances por semana, así como este mismo archivo README a continuación:

    ### **Reporte Semana 1**

    Para esta primera semana se espera que en conjunto como equipo se tenga establecido de forma clara y concisa la problemática a resolver para el socio formador, en este caso NDS Cognitive Labs. Se estableció un sistema de pase de lista y asistencia automatizado basado en Machine Learning y en el uso de Visión Computacional.

    Teniendo en cuenta lo anterior, hemos empezado a trabajar tanto en los algoritmos de visión computacional que se encargará del reconocimiento facial de los estudiantes al momento de entrar al salón y tomar su asistencia y participación. También, se empezó a trabajar en el desarrollo de la plataforma web que administra la captura y registro de los datos recabados, como lo sería el registro de los alumnos, profesores, registro de salones, así como datos de estadísticas sobre la asistencia y la participación. Por otro lado, ya se está pensando en empezar a trabajar en el dataset a utilizar, en nuestro caso pensamos en usar Unity como un recurso para generar estos datasets y aprovechar sus capacidades con el fin de generar diversos ambientes (día, tarde, noche, mucha o poca luz, etc.), esto se hace pensando en que podríamos entrenar el modelo de ML con múltiples casos a nuestro gusto y no solo con videos con características muy parecidas. Es así que este podría aprender de una mayor variedad de posibilidades en vez de probar un conjunto algo más reducido.

    ### **Reporte Semana 2**

    Esta segunda semana hemos avanzado significativamente tanto en el desarrollo de la interfaz web como en los modelos que se utilizarán para emular un salón de clases con Unity 3D. En cuanto a la interfaz ya se tenía la base con la cual se trabajará de ahora en adelante, además de incluir un backend basado completamente en Fast API, el cual permite una conexión directa con los scripts de OpenCV, lo que facilitará su implementación posteriormente. Por el lado de la simulación, se trabajaron elementos como un escenario principal base y al menos 3 diferentes modelos de personajes con animaciones básicas, y adicionalmente, se probó el algoritmo de reconocimiento facial con estos mismos personajes y funciona de forma óptima.

    También se trabajó en el entregable relacionado a la metodología del proyecto, que incluye elaborar un documento de requerimientos sencillo, un memorándum de entendimiento entre nuestro equipo y el socio formador, un mapeo de los recursos y herramientas a utilizar para el desarrollo del proyecto y un plan general de la metodología a implementar.

    ### **Reporte Semana 3**
    Para la tercera semana se dejó pendiente el apartado de la simulación en Unity 3D para dar paso al desarrollo de la interfaz web. Básicamente, se añadieron algunos scripts necesarios para la generación de un dataset de imágenes que pudiera ser utilizado como complemento a los modelos pre-entrenados que ya teníamos previamente programados. Habiendo implementado esto, solo hacía falta agregarlo como una funcionalidad dentro de la interfaz web, por lo que se aprovechó Fast API para conectar directamente los scripts de Python con el frontend de la aplicación. El resultado final fue lograr la carga de un video del rostro de una persona para analizar desde el frontend, para posteriormente procesar dicho video, convertirlo en el dataset de imágenes, y en base a otro video dónde aparezca la misma persona, hacer el reconocimiento facial desde el mismo frontend.

    Se espera que para la semana 4 estemos implementando el reconocimiento de participación de una persona en conjunto con los avances de esta semana.

    ### **Reporte Semana 4**
    Pendiente...

## Canal de Comunicación con el Socio Formador (NDS)
Como medio para contactar al socio formador que nos acompaña durante el planteamiento y desarollo de este proyecto tenemos un canal abierto de comunicación tanto por la aplicación de *Slack*, como una sesión semanal por zoom. Dentro de este apartado se adjuntarán las evidencias tanto de reuniones como chats con los miembros de NDS:

* Chat entre el socio formador y el equipo para proveer acceso del repositorio del reto al socio formador:

<div style="text-align: center;">
    <img src="img/image.png" width="95%"/>
</div>

* Chat entre el socio formador y el equipo para otorgar acceso a los repositorios tanto de frontend como de backend (esto es correspondiente a los entregables de la semana 3):

<div style="text-align: center;">
    <img src="img/image2.jpeg" width="95%"/>
</div>
