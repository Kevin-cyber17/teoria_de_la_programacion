#include <stdio.h>

void main(){
    //Datos de entrada
    int TRANS_MB_GB = 1024;  //Definicion de constante
    int cant_docs , cant_img , cant_vid , cant_prog = 0.0; 
    float tam_docs , tam_img , tam_vid , tam_prog , cap_disco_GB =0.0;
    float Docs , Img , Vid , Prog ;
    float esp_total , esp_total_GB , Porcentaje = 0.0;

    printf ("Ingresar cantidad de docs " );
    scanf ("%ld" , &cant_docs);
     printf ("Ingresar tamaño de docs" );
    scanf ("%f" , &tam_docs);

     printf ("Ingresar cantidad de img" );
    scanf ("%ld" , &cant_img);
     printf ("Ingresar tamaño de img" );
    scanf ("%f" , &tam_img);
    
     printf ("Ingresar cantidad de vid" );
    scanf ("%ld" , &cant_vid );
     printf ("Ingresar tamaño de vid" );
    scanf ("%f" , &tam_vid );
    
     printf ("Ingresar cantidad de prog" );
    scanf("%ld" , &cant_prog);
     printf ("Ingresar tamaño de prog" );
    scanf("%f" , &tam_prog);

    printf ("Ingresar capacidad de disco" );
    scanf("%f" , &cap_disco_GB);
    //Proceso
    Docs = cant_docs * tam_docs;
    Img = cant_img * tam_img;
    Vid = cant_vid * tam_vid;
    Prog = cant_prog * tam_prog;
    
    esp_total = Docs + Img + Vid + Prog;
    esp_total_GB = esp_total / TRANS_MB_GB;
    Porcentaje = (esp_total_GB / cap_disco_GB ) * 100;
    //Datos de salida
    printf ("El espacio de documentos es %f \n", Docs );
    printf ("El espacio de imagenes es %f \n" , Img );
    printf ("El espacio de videos es %f \n" , Vid );
    printf ("El espacio de programas es %f \n" , Prog);
    printf ("El espacio total es %f \n" , esp_total );
    printf ("El espacio total en GB es %f \n" , esp_total_GB );
    printf ("El porcentaje es %f \n" , Porcentaje );

}