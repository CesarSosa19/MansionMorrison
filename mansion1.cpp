#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>
#include <time.h>



void warning(){
    printf("\
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWXxc,.       .':xXWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM \n \
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMKo.  .';::::,'.   'dNMMMMMMMMMMMMMMMMMMMMMMMMMMMMM \n \
MMMMMMMMMMMMMMMMMMMMMMMMMMMMWO,  .lk0KK000Okdc.   cXMMMMMMMMMMMMMMMMMMMMMMMMMMMM \n \
MMMMMMMMMMMMMMMMMMMMMMMMMMMWk. .:OKKKKK0000OOOx:.  :KMMMMMMMMMMMMMMMMMMMMMMMMMMM \n \
MMMMMMMMMMMMMMMMMMMMMMMMMMNx. .l0KKKK0000000OOOkc.  ,0WMMMMMMMMMMMMMMMMMMMMMMMMM \n \
MMMMMMMMMMMMMMMMMMMMMMMMMNo. .o0KKKK000000000OOOkl.  'kWMMMMMMMMMMMMMMMMMMMMMMMM \n \
MMMMMMMMMMMMMMMMMMMMMMMMXl. 'xKKKKK00000000000OOOko.  .xWMMMMMMMMMMMMMMMMMMMMMMM \n \
MMMMMMMMMMMMMMMMMMMMMMMK:  ,xKKKKK0Oxl:;;;:cdk00OOOd'  .dNMMMMMMMMMMMMMMMMMMMMMM \n \
MMMMMMMMMMMMMMMMMMMMMW0;  ;kKKKKK0x;.       .,oO0OOOx,  .lXMMMMMMMMMMMMMMMMMMMMM \n \
MMMMMMMMMMMMMMMMMMMMWO' .:OKKKK00k;           .d00OOOx:   cXMMMMMMMMMMMMMMMMMMMM \n \
MMMMMMMMMMMMMMMMMMMWx. .l0KKKK000x'           .l000OOOkc.  ;KMMMMMMMMMMMMMMMMMMM \n \
MMMMMMMMMMMMMMMMMMNd. .o0KKKK0000x'           .o0000OOOkl.  ,OWMMMMMMMMMMMMMMMMM \n \
MMMMMMMMMMMMMMMMMNo. .dKKKKK00000k,           'x00000OOOko.  'kWMMMMMMMMMMMMMMMM \n \
MMMMMMMMMMMMMMMMXc  'xKKKKK000000O:           ,k0000000OOOo'  .xWMMMMMMMMMMMMMMM \n \
MMMMMMMMMMMMMMMK:  ;kKKKKK00000000l.          ;O00000000OOOd,  .oNMMMMMMMMMMMMMM \n \
MMMMMMMMMMMMMW0,  :OKKKKK000000000d.          cO000000000OOOx;  .lXMMMMMMMMMMMMM \n \
MMMMMMMMMMMMWO' .cOKKKK00000000000k'         .l00000000000OOOx:.  cKMMMMMMMMMMMM \n \
MMMMMMMMMMMWx. .l0KKKK000000000000O:         .d000000000000OOOkc.  ;0MMMMMMMMMMM \n \
MMMMMMMMMMNd. .d0KKKK00000000000000o.        ,k0000000000000OOOkl.  ,OWMMMMMMMMM \n \
MMMMMMMMMXl. 'xKKKKK000000000000000x'        :O00000000000000OOOko.  .kWMMMMMMMM \n \
MMMMMMMMXc  ,kKKKKK0000000000000000Oc       .o00000000000000000OOOd,  .dNMMMMMMM \n \
MMMMMMMK;  ;kKKKKK000000000000000000d.      ;O000000000000000000OOOx;  .cXMMMMMM \n \
MMMMMWO, .cOKKKKK0000000000000000000Ol.    .d00000000000000000000OOOx:.  ;0WMMMM \n \
MMMMWk' .l0KKKK0000000000000000000000O:   .oO000000000000000000000OOOkc.  'kWMMM \n \
MMMWx. .o0KKKK000000000000000000000000Ol::dO00000000000000000000000OOOkl.  .dNMM \n \
MMNo. 'dKKKKK00000000000000000000000kdlcclldk00000000000000000000000OOOOo.  .oNM \n \
MXl. ,xKKKKK0000000000000000000000x:.       .:x00000000000000000000000OOOd'  .oN \n \ 
K:  ;OKKKKK0000000000000000000000x,          .,x00000000000000000000000OOOd,  .d \n \
:  ;OKKKK000000000000000000000000o.           .o000000000000000000000000OOOx;  . \n \
  .xKKKKK000000000000000000000000d.           'd000000000000000000000000OOOOd.   \n \
  'kKKKK0000000000000000000000000Od,        .,dO000000000000000000000000OOOOd'   \n \
. .oKKK0000000000000000000000000000Odc;;;;;cdk0000000000000000000000000OOOOkc. . \n \
l  .l0K00OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOxc. .l \n \
Nd.  'lxkkkkkOOOOOOOOOOOOOOOkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkxo:.  .dN \n \
MWKo,.  ...'',;;;;;;;;;;,,,,''''''''''''''''''''''''''''''''''''''''''..   .l0WM \n \
MMMMXx:.                                                                .,oKWMMM \n \
\n");
    printf("\nSe recomienda poner en juego en pantalla completa");
    printf("\nNecesitas ser mayor de edad para continuar");
}

int verificar_edad() {
    int edad;
    printf("\nPor favor, ingresa tu edad: ");
    if (scanf("%d", &edad) != 1) {
        printf("Error: Ingresa un numero valido.\n");
        while (getchar() != '\n');
        return 0;
    }

    if (edad >= 18) {
        printf("Eres mayor de edad! Disfruta el Juego :).\n");
        return 1;
    } else {
        printf("Lo siento, debes ser mayor de 18 años para continuar. :(\n");
        return 0;
    }
}


void portada(){
    printf(" \
                                           ,,                                                    ,,\n \
`7MMF'  `7MMF'            mm             `7MM      `7MMM.     ,MMF'                              db\n \
  MM      MM              MM               MM        MMMb    dPMM\n \
  MM      MM   ,pW'Wq.  mmMMmm   .gP Ya    MM        M YM   ,M MM   ,pW'Wq.  '7Mb od8  7Mb od8  7MM   pP'Ybd   pW Wq    7MMpMMMb   \n \
  MMmmmmmmMM  6W'   'Wb   MM    ,M    Yb   MM        M  Mb  M' MM  6W     Wb   MM'  '   MM'  '   MM  8I      6W     Wb   MM    MM  \n \
  MM      MM  8M     M8   MM    8Moooooo   MM        M  YM.P'  MM  8M     M8   MM       MM       MM  `YMMMa. 8M     M8   MM    MM  \n \
  MM      MM  YA.   ,A9   MM    YM.    ,   MM        M  `YM'   MM  YA.   ,A9   MM       MM       MM  L.   I8 YA.   ,A9   MM    MM  \n \
.JMML.  .JMML.  Ybmd9'     Mbmo   Mbmmd' .JMML.    .JML.  '  .JMML.  Ybmd9'  .JMML.   .JMML.   .JMML.M9mmmP'   Ybmd9'  .JMML  JMML.\n \
                                                                                                                                  \n");
                                                                                                                                
    printf("\nPor:");
    printf("\nSosa Alvarez Cesar Uriel");
    printf("\nGutierrez Gonzales Michelle Estefania");
    printf("\nDalman Ibarra Luis Alberto");
    printf("\nCampos Carreras Miguel");
    printf("\nVillafuerte Aguilar Christian Gabriel");
    printf("\n\n\n Presiona una tecla para continuar: ");
    getch();
    system("cls");
}

int main()
{
    char nombreJugador[21];
    char username[20];
    char password[20];
    int decision1,decision2,decision3,decision4,decision5,decision6,decision7,decision8,decision9,decision10,decision11,Clorpromazina,desarmador,lampara,iniciosesion;
    time_t tiempoInic, tiempoFinal;
	char resp;
	tiempoInic=time(NULL); //Se toma el tiempo del sistema

    Clorpromazina = 0;
    desarmador = 0;
    lampara = 0;
    iniciosesion = 0;

    srand(time(0));

    int numeroAleatorio = rand() % 900 + 100;
    int intento;
    int intentosRestantes = 3;

    warning();

    while (!verificar_edad()) {
        // Puedes poner aqui algun mensaje de error adicional si lo deseas
    }

    fflush(stdin);

    system("cls");

    printf("antes de comenzar necesito saber tu nombre: ");
    fgets(nombreJugador, sizeof(nombreJugador), stdin);
    nombreJugador[strcspn(nombreJugador, "\n")] = '\0'; // Elimina el caracter de nueva linea

    portada();
    
    printf(" \
MMMMMMMMMMMMMMMMMMMMMMMMWWWWWWWMMMWWWWMMMMMMMMMMMMMMMMMMMMMMMMWWWWMMMMMWMWWMMMMMMMMMMMMMMMMMMMMMMMMM\n \
MMMMMMMMMMMMMMMMMMMMMMNOxxxxxxxxxxxxxKWMMMMMMMMMMMMMMMMMMMMMMWKxxxxxxxxxxxxxONWMMMMMMMMMMMMMMMMMMMMM\n \
MMMMMMMMMMMMMMMMMMMMMWXo;;;;;;;;;:;;:kWMMMMMMMMMMMMMMMMMMMMMMWk:;;;;;;;;;;:;oKMMMMMMMMMMMMMMMMMMMMMM\n \
MMMMMMMMMMMMMMMMMWXKKKOl;:::::::;::;:d000KNWMMMMMMMMMMMMMNK000d::::::::::::;lO0KKXWWMMMMMMMMMMMMMMMM\n \
MMMMMMMMMMMMMMMMWNx::c::::::::::;;;:;::::cOWWMMMMMMMMMMMW0l::::;:::::::::::::::::xNWWMMMMMMMMMMMMMMM\n \
MMMMMMMMMMMMMMWWWXd:::::::::::::::;;;:::::OWWWWMMMMMMWWWWOc::::::::::::::::::::::dXNWWWMMMMMMMMMMMMM\n \
MMMMMMMMMMMMW0doooc:::::::::::::::::::::::lddoxXMMMWXxodol:::::::::::::::::::::::coood0WMMMMMMMMMMMM\n \
MMMMMMMMMMMMWk:::::::::::::::::::::::::::::::;l0WWWW0l;:::::::::::::::::::::::::::::::kWMMMMMMMMMMMM\n \
MMMMMMMMMMMMWk::::::::::::::::::::::::::::::::cdkkkkxc;:::::::::::::::::::::::::::::::kWMMMMMMMMMMMM\n \
MMMMMMMMMMMMWk::::::::::::::::::::::::::::::::::;;::::::::::::::::::::::::::::::::::::kWMMMMMMMMMMMM\n \
MMMMMMMMMMMMWk::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::kWMMMMMMMMMMMM\n \
MMMMMMMMMMMMWk::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::kWMMMMMMMMMMMM\n \
MMMMMMMMMMMMWk::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::kWMMMMMMMMMMMM\n \
MMMMMMMMMMMMWk::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::kWMMMMMMMMMMMM\n \
MMMMMMMMMMMMWk:::::::;::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::kWMMMMMMMMMMMM\n \
MMMMMMMMMMMMW0ooooc;:;::::::::::::::::::::::::::::::::::::::::::::::::::::::::::;clooo0WMMMMMMMMMMMM\n \
MMMMMMMMMMMMMWNWNXd::;;:::::::::::::::::::::::::::::::::::::::::::::::::::::::::;oKNWWWMMMMMMMMMMMMM\n \
MMMMMMMMMMMMMMMMMNx::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::dNWWWWMMMMMMMMMMMMM\n \
MMMMMMMMMMMMMMMMMWX000kl;::::::::::::::::::::::::::::::::::::::::::::::::::;lk000XWMMMMMMMMMMMMMMMMM\n \
MMMMMMMMMMMMMMMMMMMMMWXo;::;::::::::::::::::::::::::::::::::::::::::::::;;;;oKWMMMMMMMMMMMMMMMMMMMMM\n \
MMMMMMMMMMMMMMMMMMMMMMNOdxxoc:::::::::::::::::::::::::::::::::::::::;:::odddONMMMMMMMMMMMMMMMMMMMMMM\n \
MMMMMMMMMMMMMMMMMMMMMMMMMMW0l;::::::::::::::::::::::::::::::::::::;:::;l0WWWMMMMMMMMMMMMMMMMMMMMMMMM\n \
MMMMMMMMMMMMMMMMMMMMMMMMMMWKoccc:::::;;::::::::::::::::::::::::::::ccccoKWMMMMMMMMMMMMMMMMMMMMMMMMMM\n \
MMMMMMMMMMMMMMMMMMMMMMMMMMWWXXXXk:;::::;:::::::::::::::::::::::::::xKXXNWMMMMMMMMMMMMMMMMMMMMMMMMMMM\n \
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWWOc;;:::::::::::::::::::::::;:::::;:OWWWWMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n \
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMXOkkko::::::::::::::::::::;::;okkkOXWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n \
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWk::::::::::::::::::::;:::kWWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n \
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMW0ooolc::;:::::::::::cloooOWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n \
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWNNNXd:::;;::::::::;dXNNNWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n \
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNx::::::::::::::dNWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n \
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWX000Ol;::;lk000XWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n \
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMXo;:;;oKWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n \
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNOxxxxONMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n \
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWWWWWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n");
    printf("\n%s  disfruta la Historia ;)", nombreJugador);
    printf("\nPresiona una tecla para continuar: ");
    getch();
    system("cls");

    printf("\n Sufres de un horrible insomnio y no sabes como llegaste. Lo ultimo que tienes en la mente es la silueta de un tipo, alto, con una gabardina y un paquete de puros.");
    printf("\n %s:  Oh, maldicion que dolor de cabeza tengo! Donde estoy? Que me sucedio?",nombreJugador);
    printf("\nPresiona una tecla para continuar: ");
    getch();
    system("cls");

    do
    {
        printf("\n Estas dentro de un cuarto, revisas tu bolsa y hasta tu zapato, te das cuenta que te robaron todo. Alrededor de ti hay dos puertas, sobre la mesa hay Clorpromazina, una lampara y un desarmador");
        printf("\n Que eliges?");
        printf("\n 1)Clorpromazina");
        printf("\n 2)Desarmador");
        printf("\n 3)Lampara");
        printf("\n Elijo: ");
        scanf("%d", &decision1);
        system("cls");
        if(decision1 == 1){
            printf("\nElegiste Clorpromazina");
            Clorpromazina = 1;
        }
        else if (decision1 == 2)
        {
            printf("\nElegiste el Desarmador");
            desarmador = 1;
        }
        else if (decision1 == 3)
        {
            printf("\nElegiste la Lampara");
            lampara = 1;
        }
        else{
            printf("\nEsa no es una opcion");
        }
    } while (decision1 != 1 && decision1 != 2 && decision1 != 3);
    

    printf("\nRevisas a profundidad el cuarto, ves unas fotografias de una familia.");
    printf("\nLa familia Morrison y al ver a los integrantes te das cuenta que la mirada es vacia, parece que no hay nadie detras de esas pupilas, es como si el alma se les hubiera apagado.");
    printf("\nLa tomas y al reverso de ella hay una nota");
    printf("\nSabes por que estas aqui?, Tomaste tus medicamentos?, Te diste una ducha hoy?,");
    printf("\nMato a tres personas y es violador. Formo parte de una banda de criminales que operaba dentro y fuera del hotel");
    printf("\nPresiona una tecla para continuar: ");
    getch();
    system("cls");


    printf("\nTomas la foto del que parece ser el padre y al reverso otra nota");
    printf("\nMis hijos me trajeron porque decian que yo no podia dormir. Ellos no entienden, yo tengo que ir a la universidad porque estoy estudiando una carrera.");
    printf("\nEllos no ven cuando yo duermo, yo cierro los ojos en cualquier momento. Duermo en el metro, en la calle... yo descanso, yo duermo. Lo que veo dormido se hace realidad.");
    printf("\nMe gusta estar en el hotel porque yo les muestro a mis amigos que esto no es vida, que esto no es real y que hay un mundo afuera al que necesitamos salir, entonces mi trabajo aca es protegerlos a todos.");
    printf("\nPresiona una tecla para continuar: ");
    getch();
    system("cls");


    printf("\n%s:  Vaya familia, Que clase de hotel es este?Donde estoy? Maldicion, no puedo recordar nada", nombreJugador);
    printf("\nSe escucha un fuerte golpe en el pasillo de una de las puertas (SLAM, SLAM)");
    printf("\n%s:  Que rayos fue eso!",nombreJugador);
    printf("\nPresiona una tecla para continuar: ");
    getch();
    system("cls");

    do
    {
        printf("\nHay dos puertas en la habitacion donde proviene el ruido y la otra donde la obscuridad prevalece");
        printf("\nQue eliges?");
        printf("\n1)Puerta del ruido");
        printf("\n2)Puerta oscura");
        printf("\nElijo: ");
        scanf("%d", &decision2);
        system("cls");

        if (decision2 == 1)
        {
            printf("\nEscoges la puerta del ruido");
            printf("\nEncuentras un pasillo y caminas por este");
            printf("\nContinuas caminando y por el pasillo hay marcas de sangre y oraciones sin sentido");
            printf("\n%s: Hay alguien ahi?", nombreJugador);
            printf("\nPresiona una tecla para continuar: ");
            getch();
            system("cls");

            
            printf("\ncontinuas y vas leyendo");
            printf("\n*Hoy comi pan con queso*");
            printf("\n*Me desperte confundido por los medicamentos*");
            printf("\n*Hoy intente suicidarme de nuevo*");
            printf("\n*Mi abuela me dio respiracion boca a boca*");
            printf("\n%s: Ah, se me eriza la piel, Quiero salir de aqui!", nombreJugador);
            printf("\nPresiona una tecla para continuar: ");
            getch();
            system("cls");

            do{
            printf("\nLlegas al fondo del pasillo y se divide en dos");
            printf("\nde un lado el pasillo es mas angosto y una peste emana del lugar(derecha)");
            printf("\ndel otro lado esta encharcado y un goteo incesante te deja muy intranquilo(izquierda)");
            printf("\nCual tomas?");
            printf("\n1)Derecha");
            printf("\n2)Izquierda");
            printf("\nElijo: ");
            scanf("%d", &decision3);
            system("cls");
            
            if(decision3 == 1){
                printf("\nTomaste el camino de la derecha");
                printf("\n.Comienzas a caminar y te das cuenta que la peste que emana solo es por la humedad, el camino se vuelve mas angosto");
                printf("\ny no te permite pasar a lo lejos solo ves un escrito en la pared que te dice...");
                printf("\nDespierta, mataste a tus hijos");
                printf("\n comienzas a tener flashbacks de cuando en tu vida tenias a tu familia");
                printf("\n%s: Maldicion, que sucede? que le paso a mi familia?", nombreJugador);
                printf("\nPresiona una tecla para continuar: ");
                getch();
                system("cls");
            }
            else if (decision3 == 2 && lampara != 1 && desarmador != 1){
                printf("\nTomas el camino de la izquierda");
                printf("\ntuviste mala suerte y no tomaste la lampara, no puedes alumbrar");
                printf("\nsolo debes tener en cuenta que la madera del piso se siente fragil no sabes que se podra encontrar abajo");
                printf("\nTratas de caminar a un paso lento pero que te deja mas seguro por si cualquier cosa sucede Caminando un poco mas");
                printf("\nPresiona una tecla para continuar: ");
                getch();
                system("cls");
                
                printf("\nte das cuenta de donde viene el goteo ya que este sonido se hace cada vez mas fuerte");
                printf("\nAcercandote, mas y haciendo un esfuerzo para ver te das cuenta que no es agua si no sangre la que esta cayendo");
                printf("\n%s: Que carajos, voy caminando y este hotel se esta poniendo mas pesado en el ambiente! Demonios, el miedo me esta hirviendo por dentro!", nombreJugador);
                printf("\nContinuas caminando y las frases no dejan de estar, pero hubo una que llamo tu atencion");
                printf("\nVinieron a internarme por la tonteria mas grande: querer revivir a Gustavo Cerati. Del 1 al 10 siento que estoy curado un 6.");
                printf("\n%s: De quien estamos hablando?, Internado?, A caso este no es un hotel? No estoy entendiendo mucho", nombreJugador);
                printf("\nPresiona una tecla para continuar: ");
                getch();
                system("cls");

                do
                {
                    printf("\nAdentrandote un poco te das cuenta que hay 4 habitaciones revisas si estan abiertas, 3 de ellas estan cerradas y el pasillo continua");
                    printf("\n%s: Maldicion si tan solo hubiera agarrado el desarmador, podria haber revisado todas. En fin hay una que esta abierta", nombreJugador);
                    printf("\nQue eliges?");
                    printf("\n1)Entrar a la habitacion");
                    printf("\n2)Seguir en el pasillo");
                    printf("\nElijo: ");
                    scanf("%d", &decision4);
                    system("cls");
                } while (decision4 != 1 && decision4 != 2);
                if (decision4 == 1){
                    printf("\nEntras a la habitacion");
                    printf("\nUna luz brillante entra por la ventana, es la luz de la luna y te das cuenta que el cuarto esta vacio");
                    printf("\ncon una sola mesita en la esquina y una puerta del lado derecho.");
                    printf("\nPresiona una tecla para continuar: ");
                    getch();
                    system("cls");

                    printf("\nTe acercas a la ventana y no reconoces el lugar, afuera parece solo haber un patio");
                    printf("\n%s: Y los edificios?estoy?… Mi dolor de cabeza no para, pero creo fue la mejor idea haber tomado esas pastillas.",nombreJugador);
                    printf("\nPresiona una tecla pra continuar: ");
                    getch();
                    system("cls");

                    printf("\nTe acercas a la mesita y hay una nota encima, comienzas a leerla");
                    printf("\nMe quieren quitar a mis hijos pero no han podido, yo los veo diario en casa de su abuela");
                    printf("\nSalgo todos los dias pero nunca me ven. Me siento bien, pero aca dicen unas cosas que no son verdad");
                    printf("\nDicen que me orino en la ropa, pero yo no les creo. Tengo mucho tiempo sin abrazar a mis hijos pero siento que pronlo");
                    printf("\nLlevo 40 años en el hotel y me siento muy triste. No quiero seguir viviendo pero aca no me dejan matarme");
                    printf("\nPresiona una tecla para continuar: ");
                    getch();
                    system("cls");

                    do
                    {
                        printf("\nSe escucha un golpe hueco en el pasillos mientras lees la nota. tras, tras! suena desde la puerta del cuarto que aun no revisas");
                        printf("\nQue eliges?");
                        printf("\n1)Salir al pasillo");
                        printf("\n2)Ir hacia el cuarto");
                        printf("\nElijo: ");
                        scanf("%d", &decision5);
                        system("cls");
                    } while (decision5 != 1 && decision5 != 2);
                    if (decision5 == 1){
                        printf("\nSaliste del pasillo");
                        printf("\nContinuas caminando, inspeccionando el lugar dandote cuenta que cada vez la obscuridad");
                        printf("\nse esta haciendo mas presente que tus sentidos ya no son tuyos… que tu tacto, tu oido y tu vista te engañan");
                        printf("\nSientes como tu cuerpo y tu mente han dejado de trabajar para ti, y solo son esclavas de tu ansiedad");
                        printf("\nPresiona una tecla para continuar: ");
                        getch();
                        system("cls");

                        printf("\n%s: Hay demasiado ruido en mi cabeza y todo va demasiado rapido fuera de ella. Me cuesta encontrar el equilibrio y una presion cada vez mas fuerte me oprime el pecho", nombreJugador);
                        printf("\nMis huesos y mi cuerpo se quedan pequeños para tanto malestar. Mi ritmo cardiaco aumento, estoy sudando y tengo mucho escalofrios");
                        printf("\nLa cabeza se te llena de voces, no entiendes que es lo que esta sucediendo, comienzas a tener delirios <<!SAAL, SAAAAL DE ESTE SITIO>>");
                        printf("\n%s: Maldicion, Tengo que correr para salir de este lugar, ya no se ni lo que es real",nombreJugador);
                        printf("\nPresiona una tecla para continuar: ");
                        getch();
                        system("cls");

                        do
                        {
                            printf("\nLa vista se te nubla, mientras estas corriendo pero a lo lejos ves una ventana abierta con luz");
                            printf("\n sin embargo no sabes si estas en un 3er piso o en la planta baja Aqui es cuando tomas una decision de aventarte de por la ventana");
                            printf("\nQue eliges?");
                            printf("\n1)Aventarse por la ventana");
                            printf("\n2)tomar Clorpromazina y seguir explorando");
                            printf("\nElijo: ");
                            scanf("%d", &decision6);
                            system("cls");
                        } while (decision6 != 1 && decision6 != 2);
                        
                        if (decision6 == 1){
                            printf("\ncorres desesperadamente contra la ventana");
                            printf("\nHas corrido con suerte");
                            printf("\nestabas en un segundo piso y caiste sobre pasto");
                            printf("\nte empiezas a sentir mejor sin embargo esto no ha acabado");
                            printf("\nsales corriendo pero sabes que esto no ha terminado");
                            printf("\nnadie te persigue");
                            printf("\nestabas huyendo de ti");
                            printf("\nGanaste?");
                            printf("\nFinal Neutro");
                            tiempoFinal = time(NULL);
                            printf("\nTardaste %4.2f segundos, prueba a mejorar tu tiempo :)", difftime(tiempoFinal,tiempoInic));
                            getch();
                            break;
                        }else if (decision6 == 2){
                            printf("\nTomas tus pastillas y sigues explorando");
                            printf("\nEl medicamento tarda en hacer efecto pero es bastante eficaz aun asi");
                            printf("\nLa vista se te nubla, los pensamientos y tus delirios son cada vez mas agobiantes");
                            printf("\nllevas rato caminando y te das cuenta que no hay salida, tu mente se volvio un infierno");
                            printf("\nHas perdido la nocion de como regresar");
                            printf("\nPresiona una tecla para continuar: ");
                            getch();
                            system("cls");
                            
                            printf("\nLlegas al final del pasillo, hay una puerta y unas escaleras");
                            printf("\n%s: Maldicion, siento que voy a desfallecer, estoy perdiendo el equilibrio, mis pulsaciones empezaron a aumentar, ahhh! Voy a desmallarme, ahora no",nombreJugador);
                            printf("\nTuviste una pesadilla, recuerdas mejor quien eres y que debes hacer, las pastillas han hecho efecto");
                            printf("\nahora no dejes que de tomarlas. Es tu tratamiento!");
                            printf("\nPresiona una tecla para continuar: ");
                            getch();
                            system("cls");

                            printf("\n%s: Desperte, ahora debo elegir", nombreJugador);
                            printf("\nEntras a la unica habitacion. Es un simple cuarto, lo reconoces y entiendes que debes salir de ahi");
                            printf("\nEn la pared estaba escrito morrison, es el.");
                            printf("\nrecuerdo a morrison, era mi password de algun sitio");
                            printf("\nvas hacia las escaleras.Comienzas a bajar y un destello al final del pasillo te deslumbra");
                            printf("\nhay sangre asi que vas con cuidado");
                            printf("\n%s: Planta baja y a mi alrededor parece ser un lobby, debo tomar mi medicamento",nombreJugador);
                            do
                            {
                                printf("\nTe encuentras con una computadora y el destello de luz");
                                printf("\nHacia donde vas?");
                                printf("\n1)Computadora");
                                printf("\n2)Destello");
                                printf("\nElijo: ");
                                scanf("%d", &decision7);
                                system("cls");
                            } while (decision7 != 1 && decision7 != 2);
                            if(decision7 == 1){
                                printf("\nescogiste ir a la computadora");
                                printf("\nInicias sesion y te pide tu nombre y password");
                                printf("\n%s: Pondre mi nombre y la unica password que recuerdo, espero esto resulte",nombreJugador);
                                do
                                {
                                    printf("\nIngrese su nombre de usuario: ");
                                    scanf("%s", &username);
                                    printf("\nIngrese su password: ");
                                    scanf("%s", &password);
                                    system("cls");

                                    if (strcmp(username, nombreJugador) == 0 && strcmp(password, "morrison") == 0) {
                                        iniciosesion = 1;
                                        printf("\n<<Acceso permitido>>");
                                        printf("\nBuscas en los archivos del lugar, encuentras un archivo que dice: %s Morrison",nombreJugador);
                                        printf("\nPresiona una tecla para continuar: ");
                                        getch();
                                        system("cls");

                                        printf("\nSr. Morrison");
                                        printf("\nSu tratamiento debe continuar, la percepcion que tienes de tu reasigues");
                                        printf("\ncreyendo que mataron a tu familia, no eres dueño de ningun hotely tu eres el asesino, ");
                                        printf("\npadeces esquizofrenia, que se presenta en forma de alucinaciones y delirios,");
                                        printf("\nprincipalmente personificados en tu familia y una creencia de ser dueño de un hotel.");
                                        printf("\n\n");
                                        printf("\nEste hospital es empleado para encerrar y tratar, principalmente, a personas con trastornos");
                                        printf("\nmentales severos que han cometido algun tipo de crimen");
                                        printf("\nIndependientemente de ello a lo largo de su estancia podemos observar diferentes");
                                        printf("\nelementos psicologicos o psiquiatricos que se han ido trabajando a lo largo de este tiempo");
                                        printf("\nSin embargo, no es posible el diagnostico de este trastorno, los sintomas y lo que usted");
                                        printf("\npresenta, un modo de actuar caracterizado por la presencia de alucinaciones y delirios.");
                                        printf("\n\n");
                                        printf("\nNos damos cuenta que padece un tipo de trastorno psicotico. Los delirios y alucinaciones ");
                                        printf("\ntendrian en este caso un caracter persecutorio (dado que se siente perseguido) pero bien");
                                        printf("\ntratados puede incluirse a la sociedad sin ningun tipo de problema");
                                        printf("\nPor lo que en estos momentos al saber que esta leyendo esto nos damos cuenta que los");
                                        printf("\nresultados con la medicina han dado frutos, el ambiente en el que fue expuesto fue");
                                        printf("\nprescindible para su liberacion");
                                        printf("\nPuesto que debemos estar seguros que no hara ningun daño a alguien, teniendo bien en");
                                        printf("\ncuenta que debe tomar su medicamento para que su trastorno se controle");
                                        printf("\nPresiona una tecla para continuar: ");
                                        getch();
                                        system("cls");

                                        printf("\nSin mas por el momento el codigo para la salida es: %d",numeroAleatorio);
                                        printf("\nTen en cuenta que la puerta se bloqueara tras 3 intentos fallidos");
                                        printf("\nPresiona una tecla para continuar: ");
                                        getch();
                                        system("cls");

                                        printf("\n%s: “Todo este tiempo me senti encerrado, imaginando que me habian secuestrado.",nombreJugador);
                                        printf("\nSin embargo, la unica prision siempre ha sido mi mente... Debo salir de aqui");
                                        printf("\nPresiona una tecla para continuar: ");
                                        getch();
                                        system("cls");

                                        printf("\nCaminas hacia la puerta de donde proviene el destello");
                                        printf("\nTe pide el codigo de acceso");
                                        printf("\nPresiona una tecla para continuar: ");
                                        getch();
                                        system("cls");

                                        do {
                                            printf("\nIngresa el codigo para desbloquear la puerta: ");
                                            scanf("%d", &intento);

                                            if (intento == numeroAleatorio) {
                                                system("cls");
                                                printf("\n%s: Parece ser que he salido del hospital, el aire es fresco y hace tiempo la luz del dia no me da en la cara", nombreJugador);
                                                printf("\nHas sido liberado, una vida de tranquilidad te espera en la sociedad");
                                                printf("\nFelicidades Ganaste");
                                                tiempoFinal = time(NULL); //toma el tiempo del sistema
                                                printf("\nTardaste %4.2f segundos, prueba a mejorar tu tiempo :)", difftime(tiempoFinal,tiempoInic));
                                                getch();
                                                break;
                                            } else {
                                                system("cls");
                                                printf("\nEse no es el numero correcto. Te quedan %d intentos.\n", --intentosRestantes);
                                            }
                                        } while (intentosRestantes > 0);
                                        if (intentosRestantes == 0) {
                                            system("cls");
                                            printf("\nHas agotado tus intentos. y te has acabado tus pastillas, las voces regresan y te piden suicidarte");
                                            printf("\nperdiste :(");
                                            printf("\nTardaste %4.2f segundos, prueba a mejorar tu tiempo :)", difftime(tiempoFinal,tiempoInic));
                                            getch();
                                            break;

                                        }
                                    } else {
                                        system("cls");
                                        printf("\n<<Acceso denegado>>. Intenta de nuevo");
                                    }
                                } while (iniciosesion != 1);
                            
                            }else if (decision7 == 2){
                                system("cls");
                                printf("\nCaminas hacia la puerta de donde proviene el destello");
                                printf("\nTe pide el codigo de acceso");
                                printf("\nPresiona una tecla para continuar: ");
                                getch();
                                system("cls");
                                do {
                                    printf("Ingresa el codigo para desbloquear la puerta: ");
                                    scanf("%d", &intento);
                                    if (intento == numeroAleatorio) {
                                        system("cls");
                                        printf("\n%s: Parece ser que he salido del hospital, el aire es fresco y hace tiempo la luz del dia no me da en la cara", nombreJugador);
                                        printf("\nHas sido liberado, una vida de tranquilidad te espera en la sociedad");
                                        printf("\nFelicidades Ganaste");
                                        tiempoFinal = time(NULL); //toma el tiempo del sistema
                                        printf("\nTardaste %4.2f segundos, prueba a mejorar tu tiempo :)", difftime(tiempoFinal,tiempoInic));
                                        getch();
                                        break;
                                    } else {
                                        system("cls");
                                        printf("Ese no es el numero correcto. Te quedan %d intentos.\n", --intentosRestantes);
                                    }
                                } while (intentosRestantes > 0);
                                if (intentosRestantes == 0) {
                                    system("cls");
                                    printf("\nHas agotado tus intentos. y te has acabado tus pastillas, las voces regresan y te piden suicidarte");
                                    printf("\nperdiste :(");
                                    printf("\nTardaste %4.2f segundos, prueba a mejorar tu tiempo :)", difftime(tiempoFinal,tiempoInic));
                                    getch();
                                    break;
                                }
                            }
                        }
                    }else if (decision5 == 2){
                        system("cls");
                        printf("\nte diriges al cuarto");
                        printf("\nempiezas a sentir un dolor de cabeza espantoso");
                        printf("\nparace que alguien te golpeo en la cabeza");
                        printf("\nO no?");
                        printf("\nPierdes el conocimiento");
                        tiempoFinal = time(NULL);
                        printf("\nTardaste %4.2f segundos, prueba a mejorar tu tiempo :)", difftime(tiempoFinal,tiempoInic));
                        getch();
                        break;
                    }
                }else if (decision4 == 2){
                    system("cls");
                    printf("\nEscucha un crujir en la madera del suelo");
                    printf("\nte mueves un poco para comprobar que pasa");
                    printf("\nno das ni un solo paso y la madera del suelo se rompe");
                    printf("\nparece que has caido de 3 pisos");
                    printf("\nte has roto tus piernas y varios huesos");
                    printf("\ngritas de dolor sin embargo nadie viene a tu rescate");
                    printf("\nno aguantas mas te desangras y mueres");
                    tiempoFinal = time(NULL);
                    printf("\nTardaste %4.2f segundos, prueba a mejorar tu tiempo :)", difftime(tiempoFinal,tiempoInic));
                    getch();
                    break;
                }
            }
            else if (decision3 == 2 && Clorpromazina != 1 && lampara != 1){
                do
                {
                    printf("\n%s: Por fin le encuentro uso a este maldito desarmador, ojala una me saque de este sitio", nombreJugador);
                    printf("\nLa voz en tu cabeza cada vez empieza a agitarse mas y tu ritmo cardiaco deja de ser normal");
                    printf("\nQue eliges?");
                    printf("\n1)Revisar cada una de las habitaciones");
                    printf("\n2)Seguir en el pasillo");
                    printf("\nElijo: ");
                    scanf("%d", &decision8);
                    system("cls");
                } while (decision8 != 1 && decision8 != 2);
                if (decision8 == 1){
                    printf("\nRevisar cada una de las habitaciones");
                    printf("\nEntras a la primera habitacion y algo te recuerda a ti, no sabes que es pero algo dentro de esta se hace familiar");
                    printf("\n%s: No tengo tiempo para seguir viendo esto tengo que encontrar una salida", nombreJugador);
                    printf("\nEsta habitacion no fue de ayuda asi que vas por la segunda habitacion");
                    printf("\nPresiona una tecla para continuar: ");
                    getch();
                    system("cls");

                    printf("\npero empiezas a sentir a alguien cerca asi que entras rapido a la segunda habitacion y te escondes debajo de una cama");
                    printf("\nEl ruido cesa y continuas explorando");
                    printf("\n%s: Lo que sea que esta alla afuera no logro verme, carajo esto ya me esta desesperando",nombreJugador);
                    printf("\nPresiona una tecla para continuar: ");
                    getch();
                    system("cls");

                    printf("\nEntras a una tercera habitacion, sin embargo esta al entrar tiene un olor putrefacto");
                    printf("\n aun con esto continuas explorando rapido, la sangre en el piso es mas resbalosa");
                    printf("\n terminas cayendo, te golpeaste la cabeza y el desarmador se clavo en tu estomago");
                    printf("\nEscuchas a lo lejos acercarse una persona");
                    printf("\nPresiona una tecla para continuar: ");
                    getch();
                    system("cls");

                    printf("\ntu sudor se siente frio, todo empieza a sentirse lento, tu ritmo cardiaco empieza a disminuir");
                    printf("\n%s: Este no puede ser mi fin, por favor", nombreJugador);
                    printf("\nTu corazon se va deteniendo mientras la sombra que se asoma en la puerta se hace cada vez mas grande");
                    printf("\nte quedas en el suelo, mientras la sombra se apodera de tu mente y cuerpo, la vista se te nubla, terminaste muriendo");
                    printf("\nHaz perdido");
                    tiempoFinal = time(NULL);
                    printf("\nTardaste %4.2f segundos, prueba a mejorar tu tiempo :)", difftime(tiempoFinal,tiempoInic));
                    getch();
                    break;
                }else if (decision8 == 2){
                    printf("\nEscucha un crujir en la madera del suelo");
                    printf("\nte mueves un poco para comprobar que pasa");
                    printf("\nno das ni un solo paso y la madera del suelo se rompe");
                    printf("\nparece que has caido de 3 pisos");
                    printf("\nte has roto tus piernas y varios huesos");
                    printf("\ngritas de dolor sin embargo nadie viene a tu rescate");
                    printf("\nno aguantas mas te desangras y mueres");
                    tiempoFinal = time(NULL);
                    printf("\nTardaste %4.2f segundos, prueba a mejorar tu tiempo :)", difftime(tiempoFinal,tiempoInic));
                    getch();
                    break;
                } 
            }
            else if (decision3 == 2 && Clorpromazina != 1 && desarmador != 1){
                printf("\nTomas la izquierda");
                printf("\nPor suerte tomaste la lampara y puedes alumbrar, solo debes tener en cuenta que la bateria es finita");
                printf("\ny ya no cuentas con mucha...");
                printf("\nPresiona una tecla para continuar: ");
                getch();
                system("cls");

                printf("\nhas alumbrado para ver de donde proviene el goteo, dandote cuenta que no es agua si no sangre la que esta cayendo");
                printf("\nos, voy caminando y este hotel se esta poniendo mas pesado en el ambiente! Demonios, el miedo me esta hirviendo por dentro!");
                printf("\nContinuas caminando y las frases no dejan de estar, pero hubo una que llamo tu atencion");
                printf("\nVinieron a internarme por la tonteria mas grande: querer revivir a Gustavo Cerati. Del 1 al 10 siento que estoy curado un 6.");
                printf("\n%s: De quien demonios esta hablando?Internado?A caso este no es un hotel? No estoy entendiendo mucho", nombreJugador);
                printf("\nPresiona una tecla para continuar: ");
                getch();
                system("cls");
                {
                    printf("\nPrendes la lampara y te das cuenta que hay 4 habitaciones revisas si estan abiertas, 3 de ellas estan cerradas y el pasillo continua");
                    printf("\nMaldicion si tan solo hubiera agarrado el desarmador, podria haber revisado todas. En fin hay una que esta abierta");
                    printf("\nque elijes?");
                    printf("\n1)Entrar a la habitacion");
                    printf("\n2)Seguir en el pasillo");
                    printf("\nElijo: ");
                    scanf("%d", &decision9);
                    system("cls");
                } while (decision9 != 1 && decision9 != 2);

                if (decision9 == 1){
                    printf("\nEntras en la habitacion");
                    printf("\nUna luz brillante entra por la ventana, es la luz de la luna y te das cuenta que el cuarto esta vacio");
                    printf("\ncon una sola mesita en la mera esquina y una puerta del lado derecho");
                    printf("\nTe acercas a la ventana y no reconoces el lugar, afuera parece solo haber un patio");
                    printf("\n%s: Y los edificios? En que piso estoy?… Mi dolor de cabeza no para, tengo mareos y muchas nauseas, debi tomar mi medicamento y la luz comienza a molestarme",nombreJugador);
                    printf("\nPresiona una tecla para continuar: ");
                    getch();
                    system("cls");
                    printf("\nTe acercas a la mesita y hay una nota encima, comienzas a leerla");
                    printf("\nMe quieren quitar a mis hijos pero no han podido, yo los veo diario en casa de su abuela");
                    printf("\nSalgo todos los dias pero nunca me ven. Me siento bien, pero aca dicen unas cosas que no");
                    printf("\nson verdad. Dicen que me orino en la ropa, pero yo no les creo. Tengo mucho tiempo sin ");
                    printf("\nabrazar a mis hijos pero siento que pronlo. Llevo 40 años en el hotel y me");
                    printf("\nsiento muy triste. No quiero seguir vivendo pero aca no me dejan matarme");
                    printf("\n%s: Por cierto, y mis hijos? tengo algo de cordura pero la fatiga mental se esta haciendo cada vez mas presente, necesito mi medicamento", nombreJugador);
                    printf("\nPresiona una tecla para continuar: ");
                    getch();
                    system("cls");
                    do
                    {
                        printf("\nSe escucha un golpe hueco en el pasillos tras, tras!");
                        printf("\nY hay una puerta en el cuarto aun no se revisa");
                        printf("\nque elijes?");
                        printf("\n1)salir al pasillo");
                        printf("\n2)entrar a la puerta que falta");
                        printf("\nElijo: ");
                        scanf("%d", &decision10); 
                        system("cls");
                    } while (decision10 != 1 && decision10 != 2);
                    if (decision10 == 1){
                        printf("\nSaliste al pasillo");
                        printf("\nContinuas caminando, inspeccionando el lugar dandote cuenta que cada");
                        printf("\nvez la obscuridad se esta haciendo mas presente que tus sentidos ya no son tuyos… que tu");
                        printf("\ntacto, tu oido, y tu vista te engañan. Sientes como tu cuerpo y tu mente han dejado de");
                        printf("\ntrabajar para ti, y solo son esclavas de tu ansiedad");
                        printf("\nPresiona una tecla para continuar: ");
                        getch();
                        system("cls");

                        printf("\n%s: “Hay demasiado ruido en mi cabeza y todo va demasiado rapido fuera de",nombreJugador);
                        printf("\nella. Me cuesta encontrar el equilibrio y una presion cada vez mas fuerte me oprime el");
                        printf("\npecho. Mis huesos y mi cuerpo se quedan pequeños para tanto malestar. Mi ritmo");
                        printf("\ncardiaco aumento, estoy sudando y tengo mucho escalofrios");
                        printf("\nPresiona una tecla para continuar: ");
                        getch();
                        system("cls");

                        printf("\nLa cabeza se te llena de voces, no entiendes que es lo que esta sucediendo, comienzas a");
                        printf("\ntener delirios <<Olvidaste tus medicamentos, pero es demasiado tarde. Ya no puedes regresar>>");
                        printf("\n%s: Maldicion, olvide que tenia que tomarlos, esta enfermedad cada vez empeora mas, si continuo asi estoy seguro que no llegare lejos",nombreJugador);
                        printf("\nLa vista se te nubla, los pensamientos y tus delirios son cada vez mas agobiantes, llevas");
                        printf("\nrato caminando y te das cuenta que no hay salida, tu mente se volvio un infierno");
                        printf("\nHas perdido la nocion de como regresar. Siguen habiendo puertas cuartos sin sentido.");
                        printf("\nPresiona una tecla para continuar: ");
                        getch();
                        system("cls");
                        do
                        {
                            printf("\nLlegas al final del pasillo, hay una puerta y unas escaleras");
                            printf("\nQue elijes?");
                            printf("\n1)Ir hacia las escaleras");
                            printf("\n2)Entrar a la habitacion");
                            scanf("%d", &decision11);
                            system("cls");
                        } while (decision11 == 1 && decision11 == 2);

                        if (decision11 == 1){
                            printf("\nfuiste a las escaleras");
                            printf("\nLa bateria de la lampara se a agotado, comienzas a bajar y un");
                            printf("\ndestello al final del pasillo te deslumbra, resbalas por la sangre, te has golpeado la cabeza");
                            printf("\nterminas muerto.");
                            printf("\nPerdiste");
                            tiempoFinal = time(NULL);
                            printf("\nTardaste %4.2f segundos, prueba a mejorar tu tiempo :)", difftime(tiempoFinal,tiempoInic));
                            getch();
                            break;
                        }else if (decision11 == 2){
                            printf("\nEntras a la habitacion");
                            printf("\nTe das cuenta que el cuarto parece una nube, hay una esponjosa");
                            printf("\ncama y decides irte a acostar. Al fin vas a descansar");
                            printf("\nPerdiste?");
                            tiempoFinal = time(NULL);
                            printf("\nTardaste %4.2f segundos, prueba a mejorar tu tiempo :)", difftime(tiempoFinal,tiempoInic));
                            getch();
                            break;
                        }
                    }else if (decision10 == 2){
                        printf("\nEntras a la habitacion");
                        printf("\nAlgo te recuerda a ti, no sabes que es pero algo dentro de esta se hace familiar, te das cuenta que hay mas habitaciones");
                        printf("\n%s: No tengo tiempo para seguir viendo esto tengo que encontrar una salida",nombreJugador);
                        printf("\nEsta habitacion no fue de ayuda asi que vas por la segunda habitacion,");
                        printf("\nPresiona una tecla para continuar: ");
                        getch();
                        system("cls");
                        printf("\npero empiezas a sentir a alguien cerca asi que entras rapido a la segunda habitacion y te escondes debajo de una cama.");
                        printf("\n<<La persona que se escucha deja de oirse y continuas explorando>>");
                        printf("\n%s: Lo que sea que esta alla afuera no logro verme, carajo esto ya me esta desesperando");
                        printf("\nPresiona una tecla para continuar: ");
                        getch();
                        system("cls");
                        printf("\nEntras a una tercera habitacion, sin embargo esta al entrar tiene un olor putrefacto, aun");
                        printf("\ncon esto continuas explorando rapido, la sangre en el piso es mas resbalosa, terminas");
                        printf("\ncayendo, te golpeaste la cabeza Escuchas a lo lejos acercarse una persona, tu sudor se");
                        printf("\nsiente frio, todo empieza a sentirse lento, tu ritmo cardiaco empieza a disminuir");
                        printf("\n%s: Este no puede ser mi fin, por favor",nombreJugador);
                        printf("\nPresiona una tecla para continuar: ");
                        getch();
                        system("cls");

                        printf("\nTu corazon se va deteniendo mientras la sombra que se asoma en la puerta se hace cada");
                        printf("\nvez mas grande. Te quedas en el suelo, mientras la sombra se apodera de tu mente y ");
                        printf("\ncuerpo, la vista se te nubla, terminaste muriendo");
                        printf("\nHaz Perdido");
                        tiempoFinal = time(NULL);
                        printf("\nTardaste %4.2f segundos, prueba a mejorar tu tiempo :)", difftime(tiempoFinal,tiempoInic));
                        getch();
                        break;
                    }
                }
            }
            else{
                printf("esa no es una opcion");
            }
            } while (decision3 != 2);
        }else if (decision2 == 2){
            printf("\npuerta oscura");
            printf("\nTe das cuenta que solo era un cuarto vacio, por eso la obscuridad era mas intensa");
            printf("\nRegresas y te vas por donde vino el ruido");
            printf("\nPresiona una tecla para continuar: ");
            getch();
            system("cls");
        }else{
            printf("\nNo escogiste una opcion valida, te desmayas y pierdes el conocimiento");
            printf("\nHas perdido :(");
            tiempoFinal = time(NULL);
            printf("\nTardaste %4.2f segundos, prueba a mejorar tu tiempo :)", difftime(tiempoFinal,tiempoInic));
            getch();
            break;
        }
    } while (decision2 != 1); 
}