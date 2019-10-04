#include <Stdio.h>
#include <stdlib.h>
 
void visualizar(float cola[]){
               int i;
              for(i=0;i<3;i++){
                                printf("[%f]",cola[i]);
                                }
             }
int main(){
 
       float cola[3];
       int frente=0;
       int atras=0;
       int band=0;
       int opc;
       float dato;
 
 
 
do{
 
  printf("\n \n\nMenu Cola cicular: ");
  printf("\n 1.insertar:");
  printf("\n 2.Eliminar:");
  printf("\n 3.Visualizar: ");
  printf("\n 4.Salir:");
  printf("\n Seleccione opcion:");
  scanf("%d",&opc);
 switch(opc)
 {
        case 1:
            if(frente==atras && band==1){printf("cola llena.....\n");}
          else{
               printf("\n ingrese un numero:");
             scanf("%f",&dato);
               cola[atras]=dato;
               printf("dato insertado...%f",cola[atras]);
               atras=(atras+1)%3;
                band=1;
                }
 
                 break;
 
         case 2:
              if(frente==atras && band==0){printf("cola vacia.......\n");}
          else{
               dato=cola[frente];
                printf("dato eliminado...%f",dato);
               band=0;
               frente=(frente+1)%3;
               }
                 break;
 
         case 3:
              visualizar(cola);
                 break;
 
 
}
}while(opc!=4);
 
 
 system("pause");
return 0;
}
