#include <iostream>
#include <time.h>
#include <stdio.h>
using namespace std;
//funcion 1
int retornoint(char* str);
//funcion 2
double **matriz_nueva(int f,int c);

void imprimir_matriz(double **matriz,int f, int c);

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
        cout << val;
}
break;
case 3:{
        string cad;
        cout<<"ingrese una cadena de caracteres: ";
        cin >> cad;

        char i = 0;
        while (cad[i] != '\0'){
            if ((cad[i] >= 97 ) && (cad[i]<= 122 )){//si esta en las letras minusculas
                cad[i] = cad[i] - 32;}//cambia la letra minuscula por mayuscula en la tabla ascci
                i++;}
                cout << cad << endl;
}
break;
case 4:{
char *cad;

cad=new char[1000];
cout<<"ingrese la cadena de letras y numeros: ";
cin>>cad;

int len=sizeof(cad),j=0,k=0;
char *num;
char *let;

num=new char[len];
let=new char[len];

for(int i=0;i<len;i++){
    if((cad[i]>=65)&&(cad[i]<=122)){
    let[j]=cad[i];
    j++;}
    else{
    num[k]=cad[i];
    k++;}
}
cout << "Original: " << cad << endl;
cout << "Texto: ";

for (int i=0; i < k; i++){
cout << let[i];}

cout << ' ';
cout << "Numero: ";

for (int i = 0; i < j; i++)
{
cout << num[i];
}
cout << endl;

    }//case
break;
case 5:{
    char conversion;
    cout<<"ingrese los numeros romanos: ";
    char romanos[][7]={"M","D","C","L","X","V","I"}; //const me permite apuntar a varios objetos
    cin>>conversion;                                                       //sin modificarlos
    char *ptr_romanos;

    cout<<ptr_romanos;

    }
break;
case 6:{
int cuadrada,c,f;//variables
cout<<"ingrese un numero para la matriz cuadrada: ";//se pide un unico numero para la matriz cuadrada
cin>>cuadrada;
f=cuadrada;//filas = columnas ya que es matriz cuadrada
c=cuadrada;
double **ptr;//se define un puntero doble
ptr=matriz_nueva(f,c);//apunta hacia la matriz

for(int i=0;i<f;i++){//se ingresa los datos
    for(int j=0;j<c;j++){
        cin>>ptr[i][j];}
}

for(int i=0;i<f;i++){// se imprime los datos
    for(int j=0;j<c;j++)
        cout<<ptr[i][j]<<" ";
    cout<<endl;
}


    }//case  6
    }//switch
    return 0;
}
//funcion 1
int retornoint(char *cadena ){
    int res=0;
        for (int i = 0; cadena[i] != '\0'; ++i)
                res = res * 10 + cadena[i] - '0';
        return res;
}
//funcion 2
double **matriz_nueva(int f,int c){//f=fila,c=columna
    double **ptr=new double*[f];
for(int i=0;i<f;i++)
    ptr[i]=new double[c];

return ptr;
}
//imprimir matriz
void imprimir_matriz(double **matriz,int f, int c){
    for(int i=0;i<f;i++){
        for(int j=0;j<f;j++)
            cout<<matriz[i][j]<< " ";
        cout<<endl;
    }
}

