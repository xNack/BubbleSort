#include <iostream>
using namespace std;




void ordinamento(int *vett,int n){

    int tmp;
    bool scambio = true;
    int counter = 0;

    //BubbleSort+//

    while(scambio){
        scambio = false;
        for(int i=0;i<n-1;i++){
            tmp = vett[i];
            if(vett[i] > vett[i+1]){
                vett[i] = vett[i+1];
                vett[i+1] = tmp;
                scambio = true;
                counter++;

            }
        }

    }
    cout << "Ecco il tuo vettore ordinato!!!" << endl << endl ;
    for(int i=0;i<n;i++){
        cout << vett[i] << " ";
    }
    cout << endl << endl;


    cout << "Ci sono voluti " << counter << " scambi per ordinare il vettore!" << endl;

}

int main() {

    //Dichiarazione Variabili//
    int n;
    cout << "Scegli dimensione vettore: " << endl;
    cin >> n;
    int *vett = new int [n];
    srand(time(0));

    cout << "Vettore disordinato: ";

    for(int i=0;i<n;i++){
        vett[i] = rand()%5000;
        cout << vett[i] << " ";
    }
    cout << endl << endl << endl;

    ordinamento(vett,n);

    delete []vett;


}
