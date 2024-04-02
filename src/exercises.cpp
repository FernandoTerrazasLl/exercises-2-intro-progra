
#include <cmath>
#include <iostream>

using namespace std;


void exercise_1(string doc){
  // TODO: YOUR CODE HERE
  int i= 0;
  int doc_size1 = doc.size();
    while(i<=doc_size1){
        char doc_char = doc[i];
        
        if(doc_char==' ') {
            cout << i << endl;

        }
        ++i;
    }
    cout << doc.size()<< endl;
}

void exercise_2(string doc) {
  // TODO: YOUR CODE HERE
  int doc_size1 = doc.size();
    string doc_word;
    for(int i=0; i<=doc_size1; ++i){
        char doc_char = doc[i];
        if(doc_char=='\n' || doc_char==' '){
            cout<< '[' << doc_word << ']' << endl;
            doc_word ="";

        }else {
            doc_word = doc_word + doc_char;
        }
    }
  
}

void exercise_3(string torta) {
  // TODO: YOUR CODE HERE
      int i= 0;
    while(i < 20){
        if(torta[i]=='1'){
            cout << "Om-nom-nom :P" << endl;
            i = i + 1;
        }else if(torta[i]=='0'){
            cout << "No cake :("<< endl;
            break;
        }else{
            i = i+ 1;
        }
        
      
    }
  
}

void exercise_4(int numero) {
  // TODO: YOUR CODE HERE
    int i = 1;
    int multiply = 1;
    if(numero < 0){
        cout << "El numero es negativo. Intentelo de nuevo"<< endl;

    }else if(numero>14){
        cout << "El numero es muy grande. Intentelo de nuevo" << endl;

    }else if(numero>=0 && numero <=14){
        while(i<=numero){
                multiply *=i;
                ++i;
            }
  
        cout << multiply<< endl;
        }
    
}

void exercise_5(int n, int k) {
  // TODO: YOUR CODE HERE
}

int exercise_6(int n) {
  // TODO: YOUR CODE HERE
    int n_size = to_string(n).size();
    int suma = 0;
    string string_n = to_string(n);
    if(n<=0){
        return 0;
    }else{
    for(int i=0; i<n_size; ++i){
        int digits = string_n[i];
        suma = suma + digits -'0';
        }
    return suma;
    }
}

void exercise_7(int n) {
  // TODO: YOUR CODE HERE
    double sum = 0;
    for(int i=1;n>=i; ++i){

      sum = sum + (pow((-1), (i+1)))/i;
    }
    cout << sum << endl;
    
}

void exercise_8(string s) {
  // TODO: YOUR CODE HERE

}

void exercise_9(string s) {
  // TODO: YOUR CODE HERE
    int quantity = 0;
    int second = 0;

    for(int i=0; i<= s.size(); ++i){
        if(s[i]=='f'){
            second = i;
            ++quantity;
        }
    }
    switch(quantity){
        case 0:
            cout << -2 << endl;
            break;
        case 1:
            cout << -1 << endl;
            break;
        case 2:
            cout << second << endl;
            break;
    }
      
}
int exercise_10(int a, int b) {
  // TODO: YOUR CODE HERE
    int mcd = 1;
    if(a==0){
      return b;
    }else if(b==0){
      return a;
    }else{
    for(int i=2; a>=i && b>=i; ++i){

        while(a%i==0 && b%i==0){
            mcd = mcd *i;
            a = a/i;
            b = b/i;
        }
    }
  }
    return mcd;
}

void exercise_11() {
  // TODO: YOUR CODE HERE
  double UI = 1;
    for(int i=1; 10>=i; ++i){
        double result = UI/(i +1);
        cout << UI << endl;
        UI = result;
    }
}

void exercise_12() {
  // TODO: YOUR CODE HERE
}

long exercise_13(int n, int k) {
  // TODO: YOUR CODE HERE
  return 0;
}

string exercise_14(int n) {
  // TODO: YOUR CODE HERE
  return "";
}

void exercise_15(int decimal) {
  // TODO: YOUR CODE HERE
}

void exercise_16(int divident, int divider) {
  // TODO: YOUR CODE HERE
}

void exercise_17(int n) {
  // TODO: YOUR CODE HERE
}

void exercise_18_19(int debut, int fin) {
  // TODO: YOUR CODE HERE
}