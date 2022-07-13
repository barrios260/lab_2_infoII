#include <iostream>
#include <time.h>
#include <stdio.h>
using namespace std;
//funcion 1
int retornoint(char* str);
//funcion 2
double **matriz_nueva(int f,int c);

//void imprimir_matriz(double **matriz,int f, int c);

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
    char romanos[4]={'x','x','x','x'};

    int valor[100];
    int n=4,i,numero=0;

    for(i=0;i<n;i++){
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
        if(i==n-1){
            numero+=valor[i];
        }

        else
            if(valor[i]>=valor[i+1])
                numero+=valor[i];
            else
                numero-=valor[i];
        }
    cout<<"el numero romano es: "<<numero<<endl;
    }
break;
case 6:{
int num,aux;//variables
cout<<"ingrese un numero para la matriz cuadrada: ";//se pide un unico numero para la matriz cuadrada
cin>>num;
double **ptr;//se define un puntero doble
ptr=matriz_nueva(num,num);//apunta hacia la matriz

for(int i=0;i<num;i++){//se ingresa los datos
    for(int j=0;j<num;j++){
        cin>>ptr[i][j];}
}

for(int i=0;i<num;i++){// se imprime los datos
    for(int j=0;j<num;j++)
        cout<<ptr[i][j]<<" ";
    cout<<endl;
}


    }//case  6

break;
case 7:{

int num [5][5],i,j,ns=1,aux,matriz2,matriz3;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            num[i][j]=ns;
            ns++;
        }
    }
    cout<<"matriz original "<<endl;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            cout<<num[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"MATRIZ 90 GRADOS "<<endl;
    for(i=0;i<5/2;i++){
        for(j=i;j<5-i-1;j++){
            matriz2=num[i][j];
            num[i][j]=num[5-1-j][i];
            num[5-1-j][i]=num[5-1-i][5-i-j];
            num[5-1-i][5-1-j]=num[j][5-1-i];
            num[j][5-1-i]=matriz2;
        }
    }
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            cout<<num[i][j]<<" ";
        }
        cout<<endl;
    }



    cout<<"MATRIZ 180 GRADOS "<<endl;
    for(i=4;i>=0;i--){
        for(j=4;j>=0;j--){
            cout<<*num;
        }
    }

       cout<<endl;
    cout<<"MATRIZ 270 GRADOS "<<endl;


}
break;
case 8:{
    int num,formula;
    cout<<"Ingrese un numero para construir una malla nxn: ";
    cin>>num;
    formula=(num*num-1)*2;
    cout<<"Para una malla de "<<num<<"x"<<num<<" puntos hay "<<formula<<" caminos."<<endl;

    }
    return 0;
}//switch
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
//funcion 3
void relleno_matriz(int n){

}
/*//imprimir matriz
void imprimir_matriz(double **matriz,int f, int c){
    for(int i=0;i<f;i++){
        for(int j=0;j<f;j++)
            cout<<matriz[i][j]<< " ";
        cout<<endl;
    }
}
*/
