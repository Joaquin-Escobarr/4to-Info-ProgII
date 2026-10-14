#include <iostream>
using namespace std;
int main(){
  int N;
  int vector_resultante[N]; 
  do{
        cin >> N;
    } while (N<2);
 
  int Matrices[N][2];
        for (int i=0;i<N;i++){
            for (int j=0;j<2;j++){
  cin >> Mat[i][j];
  }
    } //El for utilizado arriba sirve para cargar la matriz.
for (int i=0;i<N;i++){
    for(int j=0;j<2;j++){
    
        vector_resultante[i]= Mat[i] [j]+ Mat[i] [j];//Carga el vector

}
}
  for (int i=0;i<N; i++){
    cout << "El vector resultante es: " << vector_resultante[i] << " ";//Muestra por pantalla el vector.
  }
  if (N=2){
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
 
