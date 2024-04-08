#include <vector>
#include <iostream>
#include <ctime>

using namespace std;

void script1(){
    cout << "Vecteur d'entiers" << endl;
    vector<int> vec;
    vec.resize(3);
    for(int i=0; i<3; i++){
        vec[i]=i^2;
    }
    //affichage
    for(int i=0; i<vec.size(); i++){
        cout << vec[i] << " ";
    }
    cout << endl;
    for(int& v : vec){
        cout << v << " ";
    }
    cout << endl;
    for(vector<int>::iterator it = vec.begin(); it!=vec.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
    vec.push_back(10);
    cout << "Nouvelle taille : " << vec.size() <<endl;
    for(int& v : vec){
        cout << v << ",";
    }cout << endl;
    vector<int> vecCopy(vec.size());
    copy(vec.begin(),vec.end(),vecCopy.begin());
    cout << "Copie du vecteur" << endl;
    for(int& v : vec){
        cout << v << " ";
    }cout << endl << endl;
}

void script2(){
    cout << "Vecteur de chaines de caractères" << endl;
    
}

int main(){
    script1();
    script2();
    return 0;
}