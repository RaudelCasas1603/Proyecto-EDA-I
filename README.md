# Proyecto EDA I
/* Todos estos movimientos fueron hechos en stl en vectores.

Descripccion: Este programa es un gestor de contraseñas. a continuacion aqui abajo explicare para que  funciona y como fuciona cada cosa de este programa  .

Llave de los usuarios ya cargados: cucei

Nota importante: Las contraseñas de los usuarios ya cargados estan encriptadas por lo tanto necesitara de  la llave de arriba "cucei" para su correcto desencriptado.
pre.- Antes de cualquier cosa el programa te pide una contraseña o llave unica, esto se hizo en un apartado 
llamado procesamiento, esta llave va ha ser muy importante puesto que es la que te va a ayudar a hacer todo 
lo demas y se te puede llegar a pedir despues.

1.- Agregar, aqui se crean nuvos usuarios, en esta seccion se te pide un nombre de usuario una vez que lo
ingresas se almacena directamente en el vector "nodo"y haci va a ser con todos los demas datos, se te dice si
deaseas ingresar una contraseña hecha por ti o si deseas que el sistema te cree una y al final te pide una 
direccion con eso termina la seccion de agregar.

2.- Buscar, Como dice su nombre este apartado lo que hace es buscar una direccion especifica de un usuario para 
mostrar la direccion usuario y contraseña de ese usuario en especifico, te pide la direccionn del usuario en
especifico que deseas encontrar en caso de que esta sea igual a una de las igresadas se te inprimira esta si no
te sacara del ciclo.

3.- Eliminar, Te pide la direccion de un usuario para buscarlo con la funcion de buscar que ya aviamos creado
antes y despues lo elimina con ayuda de las funciones erase y begin.

4.- Modificar, de nuevo te pide la direccion de un usuario para buscarlo, una vez echo esto te pide la nueva 
contraseña al hacer esto el resto es sencillo simple mente se sobrescribe la contraseña del usuario en la 
pocision encontrada en caso de que exista claro esta.

5.- Cargar, como bien dice su nombre carga todos los usuarios previaminte registrados con ayuda de fstream.

6.- Guardar, guarda los usuarios recien ingresados en el archivo de texto con ayuda de fstream.

7.- Cifrar-Decifrar, como bien dice su nombre es el encriptado y desencriptado de las contraseñas al hacer  esto la contraseña se encripta por seguridad y asi se puede ingresar en el archivo pero por eso es muy Importante guardar tu llave ya que si la pierdes tus contraseñas se perderan con ella el tipo de  encriptamiento utilizado fue el xor. */