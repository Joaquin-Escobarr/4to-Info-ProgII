#include <iostream>
using namespace std;
int main(){
  int n;
  int vector[n]; 
  do{
        cin >> n;
    } while (n<2);
 
  int matriz [n][2];
        for (int i=0;i<n;i++){
            for (int j=0;j<2;j++){
  cin >> matriz [i][j];
  }
    }
for (int i=0;i<n;i++){
    for(int j=0;j<2;j++){
    
        vector[i]= matriz [i] [j]+ matriz [i] [j];

}
}
  for (int i=0;i<n; i++){
    cout << "El vector resultante es: " << vector[i] << " ";
  }
  if (n=2){
    if (vector [0]>0 && vector [1]>0){
     cout << " Pertenece al primer cuadrante";
     }else{
    if (vector [0]>0 && vector [1]<0){
      cout << " Pertenece al cuarto cuadrante";
        }else{
    if (vector [0]<0 && vector [1]>0){
      cout << "Pertenece al segundo cuarante";
        }else{
          if( vector [0]<0 && vector [1]<0){
            cout << " Pertenece al tercer cuadrante";
          }
        }  
      }
    }
  return 0;
}
 