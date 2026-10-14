#include <iostream>
using namespace std;
int main(){
  int n;
  int vector_resultante[n]; 
  do{
        cin >> n;
    } while (n<2);
 
  int matriz [n][2];
        for (int i=0;i<n;i++){
            for (int j=0;j<2;j++){
  cin >> matriz [i][j];
  }
    } //El for utilizado arriba sirve para cargar la matriz.
for (int i=0;i<n;i++){
    for(int j=0;j<2;j++){
    
        vector_resultante[i]= matriz [i] [j]+ matriz [i] [j];//Carga el vector

}
}
  for (int i=0;i<n; i++){
    cout << "El vector resultante es: " << vector_resultante[i] << " ";//Muestra por pantalla el vector.
  }
  if (n=2){
    if (vector_resultante [0]>0 && vector_resultante [1]>0){
     cout << " Pertenece al primer cuadrante";
     }else{
    if (vector_resultante [0]>0 && vector_resultante [1]<0){
      cout << " Pertenece al cuarto cuadrante";
        }else{
    if (vector_resultante [0]<0 && vector_resultante [1]>0){
      cout << "Pertenece al segundo cuarante";
        }else{
          if( vector_resultante [0]<0 && vector_resultante [1]<0){
            cout << " Pertenece al tercer cuadrante";
          }
        }  
      }
    }
  return 0;
}
 
