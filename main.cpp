#include <iostream>
#include <time.h>
#include <stdio.h>

using namespace std;
//funcion 1
int retornoint(char* str);
//matriz pidiendo datos
void rellen_mat();
//funcion para imprimir
void cout_matriz(int* iter);



int main()
{   int opcion;
    cout<<"1. problema 2"<<endl;
    cout<<"2. problema 4"<<endl;
    cout<<"3. problema 6"<<endl;
    cout<<"4. problema 8"<<endl;
    cout<<"5. problema 10"<<endl;
    cout<<"6. problema 12"<<endl;
    cout<<"7. problema 14"<<endl;
    cout<<"8. problema 16"<<endl;
    cout<<"9. problema 18"<<endl;

    cin>>opcion;
    switch(opcion)
    {//switch
    case 1:{
        char letras_mayus[200]={};//array de 200
        srand(time(NULL));
        for(int i=0;i<200;i++)
        {
        letras_mayus[i] += 65 + rand()%(90-65+1);//generacion de letras aleatorias
        cout<<letras_mayus[i];//imprime letras
        if(i==199){
        cout<<endl;//al llegar a 200 salto de linea
                   }
        }
        int k;//creacion de variable
        char repetidos[27]={};//array de 27 letras del abecedario para contar repetidas
        for(char i=65;i<=90;i++){//desde el ascci 65 que representa la A hasta la Z
            int cont=0;//se inicia un contador para las letras
            for(int j=0;j<=199;j++){//se inicia un contador para verificar si la letra repetida es igual a la del abecedario
                if(letras_mayus[j]==i){
                    cont+=1;
                                      }
                                   }
                        if(cont>0){
                            k=i-65;
                            repetidos[k]=i;//se guarda la cantidad de veces repetida
                                  }
            cout<<i<<':'<<cont<<endl;//la letra repetida se imprime y se repite el ciclo
                                    }

}//1
break;
case 2:{
    char cadena[] = "89789";
    int val = retornoint(cadena);
        cout << val<<endl;
}
break;
case 3:{
        char cad[]={"ManZ-aNA"};//cadena a modificar
        char i = 0;
        while (cad[i] != '\0'){//hasta que se termine la cadena
            if ((cad[i] >= 97 ) && (cad[i]<= 122 )){//si esta en las letras minusculas
                cad[i] = cad[i] - 32;}//cambia la letra minuscula por mayuscula en la tabla ascci
                i++;}//aumento la letra en posicion
                cout << cad << endl;
}
break;
case 4:{
        char cad[] = "abv67h76";//cadena a cambiar
        char numeros[sizeof(cad)];//"reservar memoria"
        char letras[sizeof(cad)];
        short int num_aum = 0;//contador numeros
        short int let_aum = 0;//contador letras

        for( int i = 0; i<sizeof(cad) ; i++){//recorre la cadena
            if(cad[i]>47 && cad[i]<58){//si esta entre los numeros 0 al 9
             numeros[num_aum] = cad[i]; //guardo en numeros
             num_aum++;
            }
            else{//si no
            letras[let_aum] = cad[i];//guardo en letras
            let_aum++;
            }
        }

        cout << "Original: " <<cad<< endl;
        cout << "Texto: " <<letras<<" Numero: " << numeros<<endl;
        //imprimo datos
        return 0;

    }//case
break;
case 5:{
        char romanos[]={"ix"};//numero a convertir

           int valor[100];//"reserva de memoria
           int n=2,i,numero=0;

           for(i=0;i<n;i++){//itera y busca el numero para el valor en decimal
               if(romanos[i]=='I' or romanos[i]=='i')
                   valor[i]=1;
               if(romanos[i]=='V' or romanos[i]=='v')
                   valor[i]=5;
               if(romanos[i]=='X' or romanos[i]=='x')
                   valor[i]=10;
               if(romanos[i]=='L' or romanos[i]=='l')
                   valor[i]=50;
               if(romanos[i]=='C' or romanos[i]=='c')
                   valor[i]=100;
               if(romanos[i]=='D' or romanos[i]=='d')
                   valor[i]=500;
               if(romanos[i]=='M' or romanos[i]=='m')
                   valor[i]=1000;
           }
           for(i=0;i<n;i++){
               if(i==n-1){//si esta en posicion anterior sumo
                   numero+=valor[i];
               }

               else
                   if(valor[i]>=valor[i+1])//si el valor es mayor aumento
                       numero+=valor[i];
                   else
                       numero-=valor[i];//si no disminuyo valor
               }
           cout<<"el numero romano es: "<<numero<<endl;
           }
break;
case 6:{
    rellen_mat();

    }

break;
case 7:{

        int Matriz[25],Matriz90[25],Matriz180[25],Matriz270[25],posicion = 0,summat=1;//datos
        for(int i = 0; i<25 ; i++){//relleno matriz del 1 al 25
            Matriz[i] = summat++;
        }

        posicion = 0;//formula para rotar matriz
        for(int i = 5; i>0 ; i--){
            for(int j = 0; j<=24 ; j += 5){
            Matriz90[(i+j-1)] = Matriz[posicion];
            posicion++;
            }
        }

        posicion = 24;//formula para rotar matriz
        for(int i = 0; i<25 ; i++){
            Matriz180[posicion] = Matriz[i];
            posicion--;
        }

        posicion = 24;//formula para rotar matriz
        for(int y = 5; y>0 ; y--){
            for(int g = 0; g<=24 ; g += 5){
            Matriz270[(y+g-1)] = Matriz[posicion];
            posicion--;
            }
        }
        cout<<endl;
        cout << "Matriz Original" << endl;
        cout_matriz(Matriz);
        cout<<endl;
        cout << "Matriz Rotada 90 grados" << endl;
        cout_matriz(Matriz90);
        cout<<endl;
        cout << "Matriz Rotada 180 grados" << endl;
        cout_matriz(Matriz180);
        cout<<endl;
        cout << "Matriz Rotada 270 grados" << endl;
        cout_matriz(Matriz270);
        cout<<endl;

//impresion de datos
}
break;
case 8:{
    int num,formula;//asignacion de datos
    cout<<"Ingrese un numero para construir una malla nxn: ";
    cin>>num;
    formula=(num*num-1)*2;//formula que funciona
    cout<<"Para una malla de "<<num<<"x"<<num<<" puntos hay "<<formula<<" caminos."<<endl;

    }
break;
case 9:{
    int enesimo,cadena[10]={0,1,2,3,4,5,6,7,8,9};
    cout<<"Ingrese el numero de permutaciones que quiere obtener: ";
    cin>>enesimo;

    }
    return 0;
}//switch
}
//funcion 1
int retornoint(char *cadena ){//funcion que retorna un int
    int res=0;//defino "resultado"
        for (int i = 0; cadena[i] != '\0'; ++i)//recorro la cadena desde la posicion inicial \0 significa que es char
                res = res *10 + cadena[i] - '0';//si encuentra el caracter especial lo elimina y sigue buscando los demas
        return res;//se multplica por 10 para realizar conversion y retorna la cadena nueva en int
}
//funcion 2
void rellen_mat(){
int **ptr_matriz,n,aux;//puntero a una matriz
    cout<<"ingrese el numero para generar una matriz cuadrada: ";
    cin>>n;

    ptr_matriz=new int*[n];//reservar memoria para filas
    for(int i=0;i<n;i++){
        ptr_matriz[i]=new int[n];//reservar memoria para columnas
    }
    cout<<"ingrese los elementos de la matriz: ";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){

            cin>>ptr_matriz[i][j];//recorre la matriz y la rellena
        }
    }
}
//funcion para imprimir matriz
void cout_matriz(int *iter){

    int contador = 0;

    for(int i = 0; i<5; i++){
        for(int j = 0; j<5 ; j++){//itera para pasar por cada numero de la matriz

            cout<<*(iter+contador)<<" ";//imprime la matriz forma = que [i][j]

            contador++;
      }

        cout << endl;
    }
}
