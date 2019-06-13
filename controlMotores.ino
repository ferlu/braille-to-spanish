int totalPines[] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41,42, 43, 44, 45, 46, 47, 48, 49};

//A, B , C , D motores
int motor1[] = {2, 3, 4, 5};
int motor2[] = {6, 7, 8, 9};
int motor3[] = {10, 11, 12, 13};
int motor4[] = {22, 23, 24, 25};
int motor5[] = {26, 27, 28, 29};
int motor6[] = {30, 31, 32, 33};
int motor7[] = {34, 35, 36, 37};
int motor8[] = {38, 39, 40, 41};
int motor9[] = {42, 43, 44, 45};
int motor10[] = {49, 48, 47, 46};

const int DER =2, IZQ =1;

// el ultimo caracter es el primero en esta lista
int pasosPosicionM1I [] ={60, 50, 50, 42, 42, 42, 35, 35, 30, 30, 30, 30, 30, 30, 27, 26, 25, 25, 30, 30, 30, 30, 30, 30, 30, 35, 40, 60, 60};
int pasosPosicionM2I [] ={20, 16, 18, 22, 20, 20, 20, 25, 23, 23, 23, 25, 25, 25, 25, 23, 25, 25, 30, 30, 30, 30, 32, 32, 32, 37, 37, 50, 50};
int pasosPosicionM3I [] ={60, 50, 50, 42, 42, 42, 35, 35, 30, 30, 30, 30, 30, 30, 27, 26, 25, 25, 30, 30, 30, 30, 30, 30, 30, 35, 40, 60, 60};
int pasosPosicionM4I [] ={20, 16, 18, 22, 20, 20, 20, 25, 23, 23, 23, 25, 25, 25, 25, 23, 25, 25, 30, 30, 30, 30, 32, 32, 32, 37, 37, 50, 50};
int pasosPosicionM5I [] ={60, 50, 50, 42, 42, 42, 35, 35, 30, 30, 30, 30, 30, 30, 27, 26, 25, 25, 30, 30, 30, 30, 30, 30, 30, 35, 40, 60, 60};
int pasosPosicionM6I [] ={20, 16, 18, 22, 20, 20, 20, 25, 23, 23, 23, 25, 25, 25, 25, 23, 25, 25, 30, 30, 30, 30, 32, 32, 32, 37, 37, 50, 50};
int pasosPosicionM7I [] ={60, 50, 50, 42, 42, 42, 35, 35, 30, 30, 30, 30, 30, 30, 27, 26, 25, 25, 30, 30, 30, 30, 30, 30, 30, 35, 40, 60, 60};
int pasosPosicionM8I [] ={20, 16, 18, 22, 20, 20, 20, 25, 23, 23, 23, 25, 25, 25, 25, 23, 25, 25, 30, 30, 30, 30, 32, 32, 32, 37, 37, 50, 50};
int pasosPosicionM9I [] ={60, 50, 50, 42, 42, 42, 35, 35, 30, 30, 30, 30, 30, 30, 27, 26, 25, 25, 30, 30, 30, 30, 30, 30, 30, 35, 40, 60, 60};
int pasosPosicionM10I [] ={20, 16, 18, 22, 20, 20, 20, 25, 23, 23, 23, 25, 25, 25, 25, 23, 25, 25, 30, 30, 30, 30, 32, 32, 32, 37, 37, 50, 50};
// en esta lista todo esta en orden
int pasosPosicionM1D [] ={60, 50, 50, 42, 42, 42, 35, 35, 30, 30, 30, 30, 30, 30, 27, 26, 25, 25, 30, 30, 30, 30, 30, 30, 30, 35, 40, 60, 60};
int pasosPosicionM2D [] ={20, 16, 18, 22, 20, 20, 20, 25, 23, 23, 23, 25, 25, 25, 25, 23, 25, 25, 30, 30, 30, 30, 32, 32, 32, 37, 37, 50, 50};
int pasosPosicionM3D [] ={60, 50, 50, 42, 42, 42, 35, 35, 30, 30, 30, 30, 30, 30, 27, 26, 25, 25, 30, 30, 30, 30, 30, 30, 30, 35, 40, 60, 60};
int pasosPosicionM4D [] ={20, 16, 18, 22, 20, 20, 20, 25, 23, 23, 23, 25, 25, 25, 25, 23, 25, 25, 30, 30, 30, 30, 32, 32, 32, 37, 37, 50, 50};
int pasosPosicionM5D [] ={60, 50, 50, 42, 42, 42, 35, 35, 30, 30, 30, 30, 30, 30, 27, 26, 25, 25, 30, 30, 30, 30, 30, 30, 30, 35, 40, 60, 60};
int pasosPosicionM6D [] ={20, 16, 18, 22, 20, 20, 20, 25, 23, 23, 23, 25, 25, 25, 25, 23, 25, 25, 30, 30, 30, 30, 32, 32, 32, 37, 37, 50, 50};
int pasosPosicionM7D [] ={60, 50, 50, 42, 42, 42, 35, 35, 30, 30, 30, 30, 30, 30, 27, 26, 25, 25, 30, 30, 30, 30, 30, 30, 30, 35, 40, 60, 60};
int pasosPosicionM8D [] ={20, 16, 18, 22, 20, 20, 20, 25, 23, 23, 23, 25, 25, 25, 25, 23, 25, 25, 30, 30, 30, 30, 32, 32, 32, 37, 37, 50, 50};
int pasosPosicionM9D [] ={60, 50, 50, 42, 42, 42, 35, 35, 30, 30, 30, 30, 30, 30, 27, 26, 25, 25, 30, 30, 30, 30, 30, 30, 30, 35, 40, 60, 60};
int pasosPosicionM10D [] ={20, 16, 18, 22, 20, 20, 20, 25, 23, 23, 23, 25, 25, 25, 25, 23, 25, 25, 30, 30, 30, 30, 32, 32, 32, 37, 37, 50, 50};

int posM1 =1;
int posM2 =1;
int posM3 =1;
int posM4 =1;
int posM5 =1;
int posM6 =1;
int posM7 =1;
int posM8 =1;
int posM9 =1;
int posM10 =1;


int paso [8][4] =
{
  {1, 0, 0, 0},
  {1, 1, 0, 0},
  {0, 1, 0, 0},
  {0, 1, 1, 0},
  {0, 0, 1, 0},
  {0, 0, 1, 1},
  {0, 0, 0, 1},
  {1, 0, 0, 1}
};
const int pasosParaPosicion=10;//Pasos que se necesitan para cambiar de posicion

void giro(int motor, int espacios, int dir) //1 izq, 2 der
{
  int totalPasos = espacios*pasosParaPosicion;
  int* pines = obtenerPinesMotor(motor);
 
  for(int posicion=0; posicion<totalPasos; posicion++)
  {
      for (int cable = 0; cable < 8; cable++)
      { 
           for(int pins =0; pins<4;pins++)
           {
              if( dir ==1 )
                  digitalWrite(pines[3 - pins], paso[cable][pins]);
              else
                digitalWrite(pines[pins], paso[cable][pins]);
           }
           delay(2);
      }
  }
}

 int* obtenerPinesMotor(int motor)
 {
    switch(motor)
    {
      case 1: return motor1;
      case 2: return motor2;
      case 3: return motor3;
      case 4: return motor4;
      case 5: return motor5;
      case 6: return motor6;
      case 7: return motor7;
      case 8: return motor8;
      case 9: return motor9;
      case 10: return motor10;
     }
 }
int obtenerPosicionMotor(int motor)
{
  switch(motor)
  {
    case 1: return posM1;
    case 2: return posM2;
    case 3: return posM3;
    case 4: return posM4;
    case 5: return posM5;
    case 6: return posM6;
    case 7: return posM7;
    case 8: return posM8;
    case 9: return posM9;
    case 10: return posM10;
  }  
}
int obtenerPasosPosicionPorMotor(int motor,int pos, int dir)
{
  if( dir == IZQ)
  {
      switch(motor)
      {
        case 1: return pasosPosicionM1I[pos];
        case 2: return pasosPosicionM2I[pos];
        case 3: return pasosPosicionM3I[pos];
        case 4: return pasosPosicionM4I[pos];
        case 5: return pasosPosicionM5I[pos];
        case 6: return pasosPosicionM6I[pos];
        case 7: return pasosPosicionM7I[pos];
        case 8: return pasosPosicionM8I[pos];
        case 9: return pasosPosicionM9I[pos];
        case 10: return pasosPosicionM10I[pos];
      }  
  }
  else
  {
    switch(motor)
      {
        case 1: return pasosPosicionM1D[pos];
        case 2: return pasosPosicionM2D[pos];
        case 3: return pasosPosicionM3D[pos];
        case 4: return pasosPosicionM4D[pos];
        case 5: return pasosPosicionM5D[pos];
        case 6: return pasosPosicionM6D[pos];
        case 7: return pasosPosicionM7D[pos];
        case 8: return pasosPosicionM8D[pos];
        case 9: return pasosPosicionM9D[pos];
        case 10: return pasosPosicionM10D[pos];
      } 
  }
}

void actualizarPosicion(int motor, int pos, int dir)
{
  if( dir == IZQ)
    pos++;
  else
    pos--;
  switch(motor)
  {
    case 1: posM1 = pos; break;
    case 2: posM2 = pos; break;
    case 3: posM3 = pos; break;
    case 4: posM4 = pos; break;
    case 5: posM5 = pos; break;
    case 6: posM6 = pos; break;
    case 7: posM7 = pos; break;
    case 8: posM8 = pos; break;
    case 9: posM9 = pos; break;
    case 10: posM10 = pos; break;
  }    
}

void cambiarCaracter(int m1, int m2, int nPM) //nPM = nueva posicion motores
{
            int actPosM1 = obtenerPosicionMotor(m1); // posiciones por default en la lista derecha
            unsigned int contLimit = actPosM1;
            bool condicion = true;
            
            if(actPosM1 == nPM) // si las posiciones no cambian, no hace nada
              return;
            
            int dir = actPosM1 < nPM ?  DER : IZQ; // 1 giro a la izquierda, 2 giro a la derecha
            
            if(dir == IZQ)//Si va hacia la izquierda, la posicion es al reves
              actPosM1 = 28 - actPosM1;

            while(condicion)
            {
                if(dir == IZQ)
                  contLimit--;
                else
                  contLimit++;

                int limit1 = obtenerPasosPosicionPorMotor(m1,actPosM1, dir);
                int limit2 = obtenerPasosPosicionPorMotor(m2, actPosM1, dir);
                bool yes = true;
                bool ok1= false, ok2= false;
                int cont1 = 0, cont2 = 0;

                if(dir == IZQ)
                {
                  int limitTemp = limit1;
                  limit1= limit2;
                  limit2 = limitTemp;
                  int mTemp= m1;
                  m1=m2;
                  m2=mTemp;
                }
                
                while(yes)
                {
                    if(cont1<limit1)
                    {
                      cont1 += 1;
                      giro(m1,1,dir);
                    }
                    else
                    {
                      ok1 = true;
                      actualizarPosicion(m1,obtenerPosicionMotor(m1), dir);
                    }
                    if(cont2<limit2)
                    {
                      cont2 +=1;
                      giro(m2,1,dir);
                    }
                    else
                    {
                      ok2= true;
                      actualizarPosicion(m2,obtenerPosicionMotor(m2), dir);
                    }
                    yes = !(ok1&ok2);
                }
                if(dir == IZQ)
                  condicion = contLimit > nPM? true: false;
                else
                  condicion = contLimit < nPM? true: false;
                actPosM1++;
                delay(5000);
            }
}

void setup()
{
  // Todos los pines en modo salida
  for(int numPines =0; numPines < 40; numPines++)
  {
    pinMode(totalPines[numPines], OUTPUT);
  }     
  Serial.begin(9600);    
}
void loop()
{ 
  int posMotores[5];
          while (!Serial.available()) {} // wait for data to arrive
        
          // serial read section
          while (Serial.available())
          {
            if (Serial.available() >0)
            {
               int bytesLeidos = 0 ;
               while (bytesLeidos < 5)
               {
                   int c = Serial.read();
                   if(c>=0)
                   {
                    Serial.println(c);
                     posMotores[bytesLeidos] = c;
                     bytesLeidos ++;
                    Serial.println(c);
                    }
               }
               if (sizeof(posMotores) >0)
              {
                Serial.print("Arduino received: ");
                for(int i=0; i<5; i++)
                {
                  Serial.println(posMotores[i]);
                }
                delay(5000);
                Serial.println("Iniciando Proceso...");
                int mot =10;
                for(int i =0; i<5; i++)
                {
                  cambiarCaracter(mot-1, mot, posMotores[i]);
                  Serial.println("Motores cambiados: ");
                  Serial.print(i+1); Serial.print(" y "); Serial.println(i+2);
                  mot = mot - 2;
                  delay(1000);
                }
              }
            }
          }
delay(500);
}
