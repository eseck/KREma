//
#include "Kramer.h"

D* ejercicioDos = new D;
T* ejercicioTres = new T;
C* ejercicioCuatro =  new C;




void InsertarDos(D* Ejercicio){
        int x, y, r, X, Y, R;
        cout << "Ingrese el valor que acompañara al X para la primera ecuacion" << endl;
        cin >> x;
        if(cin.fail()) {
            cin.clear();
            cin.ignore();
            cout << "Valor Invalido" << endl;

        }
        else {
            Ejercicio->x = x;
        }
        cout << "Ingrese el valor que acompañara al Y para la primera ecuacion" << endl;
        cin >> y;
        if(cin.fail()) {
            cin.clear();
            cin.ignore();
            cout << "Valor Invalido" << endl;

        }
        else {
            Ejercicio->y = y;
        }
        cout << "Ingrese el valor de la ecuacion" << endl;
        cin >> r;
        if(cin.fail()) {
            cin.clear();
            cin.ignore();
            cout << "Valor Invalido" << endl;
        }
        else{
            Ejercicio->r = r;
        }
        cout << "Ingrese el valor que acompañara al X para la segunda ecuacion" << endl;
        cin >> X;
        if(cin.fail()) {
            cin.clear();
            cin.ignore();
            cout << "Valor Invalido" << endl;
        }
        else{
            Ejercicio->X = X;
        }
        cout << "Ingrese el valor que acompañara al Y para la segunda ecuacion" << endl;
        cin >> Y;
        if(cin.fail()) {
            cin.clear();
            cin.ignore();
            cout << "Valor Invalido" << endl;
        }
        else {
            Ejercicio->Y = Y;
        }
        cout << "Ingrese el valor de la segunda ecuacion" << endl;
        cin >> R;
        if(cin.fail()) {
            cin.clear();
            cin.ignore();
            cout << "Valor Invalido" << endl;
        }
        else{
        Ejercicio->R = R;
        }
}
void DesarrolloDos(D* Ejercicio) {
    //arrays para ordenar los valores
    float uno[3] = {Ejercicio->x, Ejercicio->y, Ejercicio->r};
    float dos[3] = {Ejercicio->X, Ejercicio->Y, Ejercicio->R};
    //Determinante Sistema.
    float determinanteSistema = (uno[0] * dos[1]) - (uno[1] * dos[0]);
    cout << determinanteSistema << endl;
    if (determinanteSistema==0) {
        cout << "el sistema no presenta un formato valido para esta calculadora.";
    }
    else{
        //Determinante de la X.
        float determinanteX = (uno[2] * dos[1]) - (dos[2] * uno[1]);
        cout << determinanteX << endl;
        //Determinante de la Y.
        float determianteY = (uno[0] * dos[2]) - (uno[2] * dos[0]);
        cout << determianteY << endl;
        //Division de los Coeficientes
        float ValorX = (determinanteX / determinanteSistema);
        float ValorY = (determianteY / determinanteSistema);
        float Resultado[2] = {ValorX, ValorY};
        Ejercicio->ResultadoX = Resultado[0];
        Ejercicio->ResultadoY = Resultado[1];
        float resultado[2] = {Ejercicio->ResultadoX,Ejercicio->ResultadoY};
        cout << "el programa ha terminando de operar, los resultados fueron: "<< endl;
        cout << "(" << resultado[0] << "," << resultado[1] << ")" << endl;
        cout << endl << endl;
    }
}
//Funciones3X3
void InsertarTres(T* Ejercicio) {
    float x,y,z,r,X,Y,Z,R,aX,aY,aZ,aR;
    cout << "Ingrese el valor que acompañara al X para la primera ecuacion"<<endl;cin >> x;
    cout << "Ingrese el valor que acompañara al Y para la primera ecuacion"<<endl;cin >> y;
    cout << "Ingrese el valor que acompañara al Z para la primera ecuacion"<<endl;cin >> z;
    cout << "Ingrese el valor de la ecuacion"<<endl;cin >> r;
    cout << "Ingrese el valor que acompañara al X para la segunda ecuacion"<<endl;cin >> X;
    cout << "Ingrese el valor que acompañara al Y para la segunda ecuacion"<<endl;cin >> Y;
    cout << "Ingrese el valor que acompañara al Z para la segunda ecuacion"<<endl;cin >> Z;
    cout << "Ingrese el valor de la segunda ecuacion"<<endl;cin >> R;
    cout << "Ingrese el valor que acompañara al X para la tercera ecuacion"<<endl;cin >> aX;
    cout << "Ingrese el valor que acompañara al Y para la tercera ecuacion"<<endl;cin >> aY;
    cout << "Ingrese el valor que acompañara al Z para la tercera ecuacion"<<endl;cin >> aZ;
    cout << "Ingrese el valor de la tercera ecuacion"<<endl;cin >> aR;
    Ejercicio->z=z;
    Ejercicio->x=x;
    Ejercicio->y=y;
    Ejercicio->r=r;
    Ejercicio->Z=Z;
    Ejercicio->X=X;
    Ejercicio->Y=Y;
    Ejercicio->R=R;
    Ejercicio->aZ=aZ;
    Ejercicio->aX=aX;
    Ejercicio->aY=aY;
    Ejercicio->aR=aR;
}
void DesarrolloTres(T* Ejercicio){
    float uno[4] = {Ejercicio->x, Ejercicio->y, Ejercicio->z, Ejercicio->r};
    float dos[4] = {Ejercicio->X, Ejercicio->Y, Ejercicio->Z, Ejercicio->R};
    float tres[4] = {Ejercicio->aX, Ejercicio->aY, Ejercicio->aZ, Ejercicio->aR};
    //determinante Sistema
    float DeterminanteSistemaA =
            (uno[0] * dos[1] * tres[2]) + (dos[0] * tres[1] * uno[2]) + (tres[0] * uno[1] * dos[2]);
    float DeterminanteSistemaB =
            (uno[2] * dos[1] * tres[0]) + (dos[2] * tres[1] * uno[0]) + (tres[2] * uno[1] * dos[0]);
    float DeterminanteSistema = DeterminanteSistemaA - DeterminanteSistemaB;
    if (DeterminanteSistema==0){
        cout << "el sistema no presenta un formato valido para esta calculadora.";
    }
    else {
        //Determinante X
        float DeterminanteXA =
                (uno[3] * dos[1] * tres[2]) + (dos[2] * tres[3] * uno[1]) + (tres[1] * uno[2] * dos[3]);
        float DeterminanteXB =
                (uno[2] * dos[1] * tres[3]) + (dos[2] * tres[1] * uno[3]) + (tres[2] * uno[1] * dos[3]);
        float DeterminanteX = DeterminanteXA - DeterminanteXB;
        //Determinante Y
        float DeterminanteYA =
                (uno[0] * dos[3] * tres[2]) + (dos[2] * tres[0] * uno[3]) + (tres[3] * uno[2] * dos[0]);
        float DeterminanteYB =
                (uno[2] * dos[3] * tres[0]) + (dos[2] * tres[3] * uno[0]) + (tres[2] * uno[3] * dos[0]);
        float DeterminanteY = DeterminanteYA - DeterminanteYB;
        //Determinante Z
        float DeterminanteZA =
                (uno[0] * dos[1] * tres[3]) + (dos[3] * tres[0] * uno[1]) + (tres[1] * uno[3] * dos[0]);
        float DeterminanteZB =
                (uno[3] * dos[1] * tres[0]) + (dos[3] * tres[1] * uno[0]) + (tres[3] * uno[1] * dos[0]);
        float DeterminanteZ = DeterminanteZA - DeterminanteZB;
        //Valores incognitas
        float ValorX = (DeterminanteX / DeterminanteSistema);
        float ValorY = (DeterminanteY / DeterminanteSistema);
        float ValorZ = (DeterminanteZ / DeterminanteSistema);
        float Resultados[3] = {ValorX, ValorY, ValorZ};
        Ejercicio->ResultadoX = Resultados[0];
        Ejercicio->ResultadoY = Resultados[1];
        Ejercicio->ResultadoZ = Resultados[2];
        float resultado[3] = {Ejercicio->ResultadoX, Ejercicio->ResultadoY, Ejercicio->ResultadoZ};
        cout << "el programa ha terminando de operar, los resultados fueron: " << endl;
        cout << "(" << resultado[0] << "," << resultado[1] << "," << resultado[2] << ")" << endl;
        cout << endl << endl;
    }
}
//Funciones4X4
void InsertarCuatro(C* Ejercicio){
    float x,y,z,w,r,X,Y,Z,W,R,aX,aY,aZ,aW,aR,ax,ay,az,aw,ar;
    cout << "Ingrese el valor que acompañara al X para la primera ecuacion"<<endl;cin >> x;
    cout << "Ingrese el valor que acompañara al Y para la primera ecuacion"<<endl;cin >> y;
    cout << "Ingrese el valor que acompañara al Z para la primera ecuacion"<<endl;cin >> z;
    cout << "Ingrese el valor que acompañara al W para la primera ecuacion"<<endl;cin >> w;
    cout << "Ingrese el valor de la ecuacion"<<endl;cin >> r;
    cout << "Ingrese el valor que acompañara al X para la segunda ecuacion"<<endl;cin >> X;
    cout << "Ingrese el valor que acompañara al Y para la segunda ecuacion"<<endl;cin >> Y;
    cout << "Ingrese el valor que acompañara al Z para la segunda ecuacion"<<endl;cin >> Z;
    cout << "Ingrese el valor que acompañara al W para la segunda ecuacion"<<endl;cin >> W;
    cout << "Ingrese el valor de la segunda ecuacion"<<endl;cin >> R;
    cout << "Ingrese el valor que acompañara al X para la tercera ecuacion"<<endl;cin >> aX;
    cout << "Ingrese el valor que acompañara al Y para la tercera ecuacion"<<endl;cin >> aY;
    cout << "Ingrese el valor que acompañara al Z para la tercera ecuacion"<<endl;cin >> aZ;
    cout << "Ingrese el valor que acompañara al W para la tercera ecuacion"<<endl;cin >> aW;
    cout << "Ingrese el valor de la tercera ecuacion"<<endl;cin >> aR;
    cout << "Ingrese el valor que acompañara al X para la cuarta ecuacion"<<endl;cin >> ax;
    cout << "Ingrese el valor que acompañara al Y para la cuarta ecuacion"<<endl;cin >> ay;
    cout << "Ingrese el valor que acompañara al Z para la cuarta ecuacion"<<endl;cin >> az;
    cout << "Ingrese el valor que acompañara al W para la cuarta ecuacion"<<endl;cin >> aw;
    cout << "Ingrese el valor para la cuarta ecuacion"<<endl;cin >> ar;
    Ejercicio->z=z;Ejercicio->x=x;Ejercicio->y=y;Ejercicio->r=r;Ejercicio->w=w;
    Ejercicio->W=W;Ejercicio->Z=Z;Ejercicio->X=X;Ejercicio->Y=Y;Ejercicio->R=R;
    Ejercicio->aW=aW;Ejercicio->aZ=aZ;Ejercicio->aX=aX;Ejercicio->aY=aY;Ejercicio->aR=aR;
    Ejercicio->ax=ax;Ejercicio->ay=ay;Ejercicio->aw=aw;Ejercicio->az=az;Ejercicio->ar=ar;
}
void DesarrolloCuatroSistema(C* Ejercicio){
    //Determinante el sistema
    float FilaUno[4] = {Ejercicio->x,Ejercicio->y,Ejercicio->z,Ejercicio->w};
    float UnoFilaUno[5] = {Ejercicio->Y,Ejercicio->Z,Ejercicio->W,Ejercicio->Y,Ejercicio->Z};
    float UnoFilaDos[5] = {Ejercicio->aY,Ejercicio->aZ,Ejercicio->aW,Ejercicio->aY,Ejercicio->aZ};
    float UnoFilaTres[5] = {Ejercicio->ay,Ejercicio->az,Ejercicio->aw,Ejercicio->ay,Ejercicio->az};
    float UnoDiagonal= ((UnoFilaUno[0]*UnoFilaDos[1]*UnoFilaTres[2])+(UnoFilaUno[1]*UnoFilaDos[2]*UnoFilaTres[3])+(UnoFilaUno[2]*UnoFilaDos[3]*UnoFilaTres[4])) - ((UnoFilaUno[4]*UnoFilaDos[3]*UnoFilaTres[2])+(UnoFilaUno[3]*UnoFilaDos[2]*UnoFilaTres[1])+(UnoFilaUno[2]*UnoFilaDos[1]*UnoFilaTres[0]));
    float DosFilaUno[5] = {Ejercicio->X,Ejercicio->Z,Ejercicio->W,Ejercicio->X,Ejercicio->Z};
    float DosFilaDos[5] = {Ejercicio->aX,Ejercicio->aZ,Ejercicio->aW,Ejercicio->aX,Ejercicio->aZ};
    float DosFilaTres[5] = {Ejercicio->ax,Ejercicio->az,Ejercicio->aw,Ejercicio->ax,Ejercicio->az};
    float DosDiagonal= ((DosFilaUno[0]*DosFilaDos[1]*DosFilaTres[2])+(DosFilaUno[1]*DosFilaDos[2]*DosFilaTres[3])+(DosFilaUno[2]*DosFilaDos[3]*DosFilaTres[4])) - ((DosFilaUno[4]*DosFilaDos[3]*DosFilaTres[2])+(DosFilaUno[3]*DosFilaDos[2]*DosFilaTres[1])+(DosFilaUno[2]*DosFilaDos[1]*DosFilaTres[0]));
    float TresFilaUno[5] = {Ejercicio->X,Ejercicio->Y,Ejercicio->W,Ejercicio->X,Ejercicio->Y};
    float TresFilaDos[5] = {Ejercicio->aX,Ejercicio->aY,Ejercicio->aW,Ejercicio->aX,Ejercicio->aY};
    float TresFilaTres[5] = {Ejercicio->ax,Ejercicio->ay,Ejercicio->aw,Ejercicio->ax,Ejercicio->ay};
    float TresDiagonal= ((TresFilaUno[0]*TresFilaDos[1]*TresFilaTres[2])+(TresFilaUno[1]*TresFilaDos[2]*TresFilaTres[3])+(TresFilaUno[2]*TresFilaDos[3]*TresFilaTres[4])) - ((TresFilaUno[4]*TresFilaDos[3]*TresFilaTres[2])+(TresFilaUno[3]*TresFilaDos[2]*TresFilaTres[1])+(TresFilaUno[2]*TresFilaDos[1]*TresFilaTres[0]));
    float CuatroFilaUno[5] = {Ejercicio->X,Ejercicio->Y,Ejercicio->Z,Ejercicio->X,Ejercicio->Y};
    float CuatroFilaDos[5] = {Ejercicio->aX,Ejercicio->aY,Ejercicio->aZ,Ejercicio->aX,Ejercicio->aY};
    float CuatroFilaTres[5] = {Ejercicio->ax,Ejercicio->ay,Ejercicio->az,Ejercicio->ax,Ejercicio->ay};
    float CuatroDiagonal= ((CuatroFilaUno[0]*CuatroFilaDos[1]*CuatroFilaTres[2])+(CuatroFilaUno[1]*CuatroFilaDos[2]*CuatroFilaTres[3])+(CuatroFilaUno[2]*CuatroFilaDos[3]*CuatroFilaTres[4])) - ((CuatroFilaUno[4]*CuatroFilaDos[3]*CuatroFilaTres[2])+(CuatroFilaUno[3]*CuatroFilaDos[2]*CuatroFilaTres[1])+(CuatroFilaUno[2]*CuatroFilaDos[1]*CuatroFilaTres[0]));
    float ResultadoUno = ((FilaUno[0]*UnoDiagonal)+(FilaUno[1]*DosDiagonal*-1)+(FilaUno[2]*TresDiagonal*1)+(FilaUno[3]*CuatroDiagonal*-1));
    cout<<"El determinante del sistema corresponde a: "<<ResultadoUno<<endl;
    Ejercicio->DetSistema=ResultadoUno;
    cout<<"El determinante del sistema es: "<< ResultadoUno<<endl;
}
void DesarrolloCuatroX(C* Ejercicio){
    float FilaUno[4] = {Ejercicio->r,Ejercicio->y,Ejercicio->z,Ejercicio->w};
    float UnoFilaUno[5] = {Ejercicio->Y,Ejercicio->Z,Ejercicio->W,Ejercicio->Y,Ejercicio->Z};
    float UnoFilaDos[5] = {Ejercicio->aY,Ejercicio->aZ,Ejercicio->aW,Ejercicio->aY,Ejercicio->aZ};
    float UnoFilaTres[5] = {Ejercicio->ay,Ejercicio->az,Ejercicio->aw,Ejercicio->ay,Ejercicio->az};
    float UnoDiagonal= ((UnoFilaUno[0]*UnoFilaDos[1]*UnoFilaTres[2])+(UnoFilaUno[1]*UnoFilaDos[2]*UnoFilaTres[3])+(UnoFilaUno[2]*UnoFilaDos[3]*UnoFilaTres[4])) - ((UnoFilaUno[4]*UnoFilaDos[3]*UnoFilaTres[2])+(UnoFilaUno[3]*UnoFilaDos[2]*UnoFilaTres[1])+(UnoFilaUno[2]*UnoFilaDos[1]*UnoFilaTres[0]));
    float DosFilaUno[5] = {Ejercicio->R,Ejercicio->Z,Ejercicio->W,Ejercicio->R,Ejercicio->Z};
    float DosFilaDos[5] = {Ejercicio->aR,Ejercicio->aZ,Ejercicio->aW,Ejercicio->aR,Ejercicio->aZ};
    float DosFilaTres[5] = {Ejercicio->ar,Ejercicio->az,Ejercicio->aw,Ejercicio->ar,Ejercicio->az};
    float DosDiagonal= ((DosFilaUno[0]*DosFilaDos[1]*DosFilaTres[2])+(DosFilaUno[1]*DosFilaDos[2]*DosFilaTres[3])+(DosFilaUno[2]*DosFilaDos[3]*DosFilaTres[4])) - ((DosFilaUno[4]*DosFilaDos[3]*DosFilaTres[2])+(DosFilaUno[3]*DosFilaDos[2]*DosFilaTres[1])+(DosFilaUno[2]*DosFilaDos[1]*DosFilaTres[0]));
    float TresFilaUno[5] = {Ejercicio->R,Ejercicio->Y,Ejercicio->W,Ejercicio->R,Ejercicio->Y};
    float TresFilaDos[5] = {Ejercicio->aR,Ejercicio->aY,Ejercicio->aW,Ejercicio->aR,Ejercicio->aY};
    float TresFilaTres[5] = {Ejercicio->ar,Ejercicio->ay,Ejercicio->aw,Ejercicio->ar,Ejercicio->ay};
    float TresDiagonal= ((TresFilaUno[0]*TresFilaDos[1]*TresFilaTres[2])+(TresFilaUno[1]*TresFilaDos[2]*TresFilaTres[3])+(TresFilaUno[2]*TresFilaDos[3]*TresFilaTres[4])) - ((TresFilaUno[4]*TresFilaDos[3]*TresFilaTres[2])+(TresFilaUno[3]*TresFilaDos[2]*TresFilaTres[1])+(TresFilaUno[2]*TresFilaDos[1]*TresFilaTres[0]));
    float CuatroFilaUno[5] = {Ejercicio->R,Ejercicio->Y,Ejercicio->Z,Ejercicio->R,Ejercicio->Y};
    float CuatroFilaDos[5] = {Ejercicio->aR,Ejercicio->aY,Ejercicio->aZ,Ejercicio->aR,Ejercicio->aY};
    float CuatroFilaTres[5] = {Ejercicio->ar,Ejercicio->ay,Ejercicio->az,Ejercicio->ar,Ejercicio->ay};
    float CuatroDiagonal= ((CuatroFilaUno[0]*CuatroFilaDos[1]*CuatroFilaTres[2])+(CuatroFilaUno[1]*CuatroFilaDos[2]*CuatroFilaTres[3])+(CuatroFilaUno[2]*CuatroFilaDos[3]*CuatroFilaTres[4])) - ((CuatroFilaUno[4]*CuatroFilaDos[3]*CuatroFilaTres[2])+(CuatroFilaUno[3]*CuatroFilaDos[2]*CuatroFilaTres[1])+(CuatroFilaUno[2]*CuatroFilaDos[1]*CuatroFilaTres[0]));
    float ResultadoX = ((FilaUno[0]*UnoDiagonal)+(FilaUno[1]*DosDiagonal*-1)+(FilaUno[2]*TresDiagonal*1)+(FilaUno[3]*CuatroDiagonal*-1));
    cout<<"El determinante de X es: "<< ResultadoX<<endl;
    Ejercicio->DetX=ResultadoX;
}
void DesarrolloCuatroY(C* Ejercicio){
    float FilaUno[4] = {Ejercicio->x,Ejercicio->r,Ejercicio->z,Ejercicio->w};
    float UnoFilaUno[5] = {Ejercicio->R,Ejercicio->Z,Ejercicio->W,Ejercicio->R,Ejercicio->Z};
    float UnoFilaDos[5] = {Ejercicio->aR,Ejercicio->aZ,Ejercicio->aW,Ejercicio->aR,Ejercicio->aZ};
    float UnoFilaTres[5] = {Ejercicio->ar,Ejercicio->az,Ejercicio->aw,Ejercicio->ar,Ejercicio->az};
    float UnoDiagonal= ((UnoFilaUno[0]*UnoFilaDos[1]*UnoFilaTres[2])+(UnoFilaUno[1]*UnoFilaDos[2]*UnoFilaTres[3])+(UnoFilaUno[2]*UnoFilaDos[3]*UnoFilaTres[4])) - ((UnoFilaUno[4]*UnoFilaDos[3]*UnoFilaTres[2])+(UnoFilaUno[3]*UnoFilaDos[2]*UnoFilaTres[1])+(UnoFilaUno[2]*UnoFilaDos[1]*UnoFilaTres[0]));
    float DosFilaUno[5] = {Ejercicio->X,Ejercicio->Z,Ejercicio->W,Ejercicio->X,Ejercicio->Z};
    float DosFilaDos[5] = {Ejercicio->aX,Ejercicio->aZ,Ejercicio->aW,Ejercicio->aX,Ejercicio->aZ};
    float DosFilaTres[5] = {Ejercicio->ax,Ejercicio->az,Ejercicio->aw,Ejercicio->ax,Ejercicio->az};
    float DosDiagonal= ((DosFilaUno[0]*DosFilaDos[1]*DosFilaTres[2])+(DosFilaUno[1]*DosFilaDos[2]*DosFilaTres[3])+(DosFilaUno[2]*DosFilaDos[3]*DosFilaTres[4])) - ((DosFilaUno[4]*DosFilaDos[3]*DosFilaTres[2])+(DosFilaUno[3]*DosFilaDos[2]*DosFilaTres[1])+(DosFilaUno[2]*DosFilaDos[1]*DosFilaTres[0]));
    float TresFilaUno[5] = {Ejercicio->X,Ejercicio->R,Ejercicio->W,Ejercicio->X,Ejercicio->R};
    float TresFilaDos[5] = {Ejercicio->aX,Ejercicio->aR,Ejercicio->aW,Ejercicio->aX,Ejercicio->aR};
    float TresFilaTres[5] = {Ejercicio->ax,Ejercicio->ar,Ejercicio->aw,Ejercicio->ax,Ejercicio->ar};
    float TresDiagonal= ((TresFilaUno[0]*TresFilaDos[1]*TresFilaTres[2])+(TresFilaUno[1]*TresFilaDos[2]*TresFilaTres[3])+(TresFilaUno[2]*TresFilaDos[3]*TresFilaTres[4])) - ((TresFilaUno[4]*TresFilaDos[3]*TresFilaTres[2])+(TresFilaUno[3]*TresFilaDos[2]*TresFilaTres[1])+(TresFilaUno[2]*TresFilaDos[1]*TresFilaTres[0]));
    float CuatroFilaUno[5] = {Ejercicio->X,Ejercicio->R,Ejercicio->Z,Ejercicio->X,Ejercicio->R};
    float CuatroFilaDos[5] = {Ejercicio->aX,Ejercicio->aR,Ejercicio->aZ,Ejercicio->aX,Ejercicio->aR};
    float CuatroFilaTres[5] = {Ejercicio->ax,Ejercicio->ar,Ejercicio->az,Ejercicio->ax,Ejercicio->ar};
    float CuatroDiagonal= ((CuatroFilaUno[0]*CuatroFilaDos[1]*CuatroFilaTres[2])+(CuatroFilaUno[1]*CuatroFilaDos[2]*CuatroFilaTres[3])+(CuatroFilaUno[2]*CuatroFilaDos[3]*CuatroFilaTres[4])) - ((CuatroFilaUno[4]*CuatroFilaDos[3]*CuatroFilaTres[2])+(CuatroFilaUno[3]*CuatroFilaDos[2]*CuatroFilaTres[1])+(CuatroFilaUno[2]*CuatroFilaDos[1]*CuatroFilaTres[0]));
    float ResultadoY = ((FilaUno[0]*UnoDiagonal)+(FilaUno[1]*DosDiagonal*-1)+(FilaUno[2]*TresDiagonal*1)+(FilaUno[3]*CuatroDiagonal*-1));
    cout<<"El Determinante de Y es: "<<ResultadoY<<endl;
    Ejercicio->DetY=ResultadoY;
}
void DesarrolloCuatroZ(C* Ejercicio){
    float FilaUno[4] = {Ejercicio->x,Ejercicio->y,Ejercicio->r,Ejercicio->w};
    float UnoFilaUno[5] = {Ejercicio->Y,Ejercicio->R,Ejercicio->W,Ejercicio->Y,Ejercicio->R};
    float UnoFilaDos[5] = {Ejercicio->aY,Ejercicio->aR,Ejercicio->aW,Ejercicio->aY,Ejercicio->aR};
    float UnoFilaTres[5] = {Ejercicio->ay,Ejercicio->ar,Ejercicio->aw,Ejercicio->ay,Ejercicio->ar};
    float UnoDiagonal= ((UnoFilaUno[0]*UnoFilaDos[1]*UnoFilaTres[2])+(UnoFilaUno[1]*UnoFilaDos[2]*UnoFilaTres[3])+(UnoFilaUno[2]*UnoFilaDos[3]*UnoFilaTres[4])) - ((UnoFilaUno[4]*UnoFilaDos[3]*UnoFilaTres[2])+(UnoFilaUno[3]*UnoFilaDos[2]*UnoFilaTres[1])+(UnoFilaUno[2]*UnoFilaDos[1]*UnoFilaTres[0]));
    float DosFilaUno[5] = {Ejercicio->X,Ejercicio->R,Ejercicio->W,Ejercicio->X,Ejercicio->R};
    float DosFilaDos[5] = {Ejercicio->aX,Ejercicio->aR,Ejercicio->aW,Ejercicio->aX,Ejercicio->aR};
    float DosFilaTres[5] = {Ejercicio->ax,Ejercicio->ar,Ejercicio->aw,Ejercicio->ax,Ejercicio->ar};
    float DosDiagonal= ((DosFilaUno[0]*DosFilaDos[1]*DosFilaTres[2])+(DosFilaUno[1]*DosFilaDos[2]*DosFilaTres[3])+(DosFilaUno[2]*DosFilaDos[3]*DosFilaTres[4])) - ((DosFilaUno[4]*DosFilaDos[3]*DosFilaTres[2])+(DosFilaUno[3]*DosFilaDos[2]*DosFilaTres[1])+(DosFilaUno[2]*DosFilaDos[1]*DosFilaTres[0]));
    float TresFilaUno[5] = {Ejercicio->X,Ejercicio->Y,Ejercicio->W,Ejercicio->X,Ejercicio->Y};
    float TresFilaDos[5] = {Ejercicio->aX,Ejercicio->aY,Ejercicio->aW,Ejercicio->aX,Ejercicio->aY};
    float TresFilaTres[5] = {Ejercicio->ax,Ejercicio->ay,Ejercicio->aw,Ejercicio->ax,Ejercicio->ay};
    float TresDiagonal= ((TresFilaUno[0]*TresFilaDos[1]*TresFilaTres[2])+(TresFilaUno[1]*TresFilaDos[2]*TresFilaTres[3])+(TresFilaUno[2]*TresFilaDos[3]*TresFilaTres[4])) - ((TresFilaUno[4]*TresFilaDos[3]*TresFilaTres[2])+(TresFilaUno[3]*TresFilaDos[2]*TresFilaTres[1])+(TresFilaUno[2]*TresFilaDos[1]*TresFilaTres[0]));
    float CuatroFilaUno[5] = {Ejercicio->X,Ejercicio->Y,Ejercicio->R,Ejercicio->X,Ejercicio->Y};
    float CuatroFilaDos[5] = {Ejercicio->aX,Ejercicio->aY,Ejercicio->aR,Ejercicio->aX,Ejercicio->aY};
    float CuatroFilaTres[5] = {Ejercicio->ax,Ejercicio->ay,Ejercicio->ar,Ejercicio->ax,Ejercicio->ay};
    float CuatroDiagonal= ((CuatroFilaUno[0]*CuatroFilaDos[1]*CuatroFilaTres[2])+(CuatroFilaUno[1]*CuatroFilaDos[2]*CuatroFilaTres[3])+(CuatroFilaUno[2]*CuatroFilaDos[3]*CuatroFilaTres[4])) - ((CuatroFilaUno[4]*CuatroFilaDos[3]*CuatroFilaTres[2])+(CuatroFilaUno[3]*CuatroFilaDos[2]*CuatroFilaTres[1])+(CuatroFilaUno[2]*CuatroFilaDos[1]*CuatroFilaTres[0]));
    float ResultadoZ = ((FilaUno[0]*UnoDiagonal)+(FilaUno[1]*DosDiagonal*-1)+(FilaUno[2]*TresDiagonal*1)+(FilaUno[3]*CuatroDiagonal*-1));
    cout<<"El Determinante de Z es: "<<ResultadoZ<<endl;
    Ejercicio->DetZ=ResultadoZ;
}
void DesarrolloCuatroW(C* Ejercicio){
    float FilaUno[4] = {Ejercicio->x,Ejercicio->y,Ejercicio->z,Ejercicio->r};
    float UnoFilaUno[5] = {Ejercicio->Y,Ejercicio->Z,Ejercicio->R,Ejercicio->Y,Ejercicio->Z};
    float UnoFilaDos[5] = {Ejercicio->aY,Ejercicio->aZ,Ejercicio->aR,Ejercicio->aY,Ejercicio->aZ};
    float UnoFilaTres[5] = {Ejercicio->ay,Ejercicio->az,Ejercicio->ar,Ejercicio->ay,Ejercicio->az};
    float UnoDiagonal= ((UnoFilaUno[0]*UnoFilaDos[1]*UnoFilaTres[2])+(UnoFilaUno[1]*UnoFilaDos[2]*UnoFilaTres[3])+(UnoFilaUno[2]*UnoFilaDos[3]*UnoFilaTres[4])) - ((UnoFilaUno[4]*UnoFilaDos[3]*UnoFilaTres[2])+(UnoFilaUno[3]*UnoFilaDos[2]*UnoFilaTres[1])+(UnoFilaUno[2]*UnoFilaDos[1]*UnoFilaTres[0]));
    float DosFilaUno[5] = {Ejercicio->X,Ejercicio->Z,Ejercicio->R,Ejercicio->X,Ejercicio->Z};
    float DosFilaDos[5] = {Ejercicio->aX,Ejercicio->aZ,Ejercicio->aR,Ejercicio->aX,Ejercicio->aZ};
    float DosFilaTres[5] = {Ejercicio->ax,Ejercicio->az,Ejercicio->ar,Ejercicio->ax,Ejercicio->az};
    float DosDiagonal= ((DosFilaUno[0]*DosFilaDos[1]*DosFilaTres[2])+(DosFilaUno[1]*DosFilaDos[2]*DosFilaTres[3])+(DosFilaUno[2]*DosFilaDos[3]*DosFilaTres[4])) - ((DosFilaUno[4]*DosFilaDos[3]*DosFilaTres[2])+(DosFilaUno[3]*DosFilaDos[2]*DosFilaTres[1])+(DosFilaUno[2]*DosFilaDos[1]*DosFilaTres[0]));
    float TresFilaUno[5] = {Ejercicio->X,Ejercicio->Y,Ejercicio->R,Ejercicio->X,Ejercicio->Y};
    float TresFilaDos[5] = {Ejercicio->aX,Ejercicio->aY,Ejercicio->aR,Ejercicio->aX,Ejercicio->aY};
    float TresFilaTres[5] = {Ejercicio->ax,Ejercicio->ay,Ejercicio->ar,Ejercicio->ax,Ejercicio->ay};
    float TresDiagonal= ((TresFilaUno[0]*TresFilaDos[1]*TresFilaTres[2])+(TresFilaUno[1]*TresFilaDos[2]*TresFilaTres[3])+(TresFilaUno[2]*TresFilaDos[3]*TresFilaTres[4])) - ((TresFilaUno[4]*TresFilaDos[3]*TresFilaTres[2])+(TresFilaUno[3]*TresFilaDos[2]*TresFilaTres[1])+(TresFilaUno[2]*TresFilaDos[1]*TresFilaTres[0]));
    float CuatroFilaUno[5] = {Ejercicio->X,Ejercicio->Y,Ejercicio->Z,Ejercicio->X,Ejercicio->Y};
    float CuatroFilaDos[5] = {Ejercicio->aX,Ejercicio->aY,Ejercicio->aZ,Ejercicio->aX,Ejercicio->aY};
    float CuatroFilaTres[5] = {Ejercicio->ax,Ejercicio->ay,Ejercicio->az,Ejercicio->ax,Ejercicio->ay};
    float CuatroDiagonal= ((CuatroFilaUno[0]*CuatroFilaDos[1]*CuatroFilaTres[2])+(CuatroFilaUno[1]*CuatroFilaDos[2]*CuatroFilaTres[3])+(CuatroFilaUno[2]*CuatroFilaDos[3]*CuatroFilaTres[4])) - ((CuatroFilaUno[4]*CuatroFilaDos[3]*CuatroFilaTres[2])+(CuatroFilaUno[3]*CuatroFilaDos[2]*CuatroFilaTres[1])+(CuatroFilaUno[2]*CuatroFilaDos[1]*CuatroFilaTres[0]));
    float ResultadoUno = ((FilaUno[0]*UnoDiagonal)+(FilaUno[1]*DosDiagonal*-1)+(FilaUno[2]*TresDiagonal*1)+(FilaUno[3]*CuatroDiagonal*-1));
    cout<<"El Determinante W es: "<<ResultadoUno<<endl;
    Ejercicio->DetW=ResultadoUno;
}
void Imprimir(C* Ejercicio){
    float resultado[5] = {Ejercicio->DetX, Ejercicio->DetY, Ejercicio->DetZ,Ejercicio->DetW,Ejercicio->DetSistema};
    cout << "el programa ha terminando de operar, los resultados fueron: " << endl;
    cout << "(" << (resultado[0]/resultado[4]) << "," << (resultado[1]/resultado[4]) << "," << (resultado[2]/resultado[4]) << "," << (resultado[3]/resultado[4]) << ")" << endl;
    cout << endl << endl;
}