#include <vector>
#include <iostream>
#include <list>
#include <algorithm>
#include <map>

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

void affiche(vector<string> const& vec){
    for(string v : vec){
        cout << v << (v==vec.back()?"":",");
    }cout << endl;
}

string concatene(vector<string> vec){
    string s;
    for(string v : vec){
        s += v;
        s += " ";
    }
    return s;
}

vector<string> ajoute_virgule(vector<string> &vec){
    for_each(vec.begin(),vec.end(),[](string& s) { s+=","; });
    return vec;
} 

void script2(){
    cout << "Vecteur de chaines de caractères" << endl;
    vector<string> vec;

    vec.push_back("Bonjour");
    vec.push_back("comment");
    vec.push_back("allez");
    vec.push_back("vous");
    vec.push_back("?");

    cout << "Taille du vector : " << vec.size() << endl;

    cout << "Capacité du vector : " << vec.capacity() << endl;
    vec.push_back("Fiiiiire !!!");
    cout << "Taille du vector après ajout : " << vec.size() << endl;
    cout << "Capacité du vector après ajout : " << vec.capacity() << endl;
    vec.pop_back();
    //affichage
    for(int i=0; i<vec.size(); i++){
        cout << vec[i] << " ";
    }
    cout << endl;
    for(string& v : vec){
        cout << v << " ";
    }
    cout << endl;
    for(vector<string>::iterator it = vec.begin(); it!=vec.end(); it++){
        cout << *it << " ";
    }
    cout << endl;

    swap(vec[1],vec[3]);
    for(string& v : vec){
        cout << v << " ";
    }
    cout << endl;

    vec.insert(next(vec.begin(),1),"a tous");
    for(string& v : vec){
        cout << v << " ";
    }
    cout << endl;

    vec.back() = "???";
    for(string& v : vec){
        cout << v << (v==vec.back()?"":",");
    }cout << endl;

    sort(vec.begin(),vec.end());
    for(string& v : vec){
        cout << v << (v==vec.back()?"":",");
    }cout << endl;

    cout << "Retour de la fonction affiche() :"<< endl;
    affiche(vec);

    cout << "Retour de la fonction concatene() :"<< endl;
    string s = concatene(vec);
    cout << s << endl;

    cout << "Retour de la fonction ajoute_virgule() :"<< endl;
    vector<string> vecVirgule = ajoute_virgule(vec);
    affiche(vecVirgule);
}

void script3(){
    cout << "Les listes" << endl;
    list<int> listInt = {1,2,3,4,5,6,7,8};
    for(list<int>::iterator it=listInt.begin(); it!=listInt.end(); it++){
        cout << *it << " ";
    }cout << endl;

    listInt.erase(next(listInt.begin(),2));
    for(list<int>::iterator it=listInt.begin(); it!=listInt.end(); it++){
        cout << *it << " ";
    }cout << endl;
}

void script4(){
    cout << "Les Maps" << endl;
    map<int,list<string>> mapInt;
    

}

int main(){
    int script;
    cout << "Quel exo a faire ?" << endl;
    cin >> script;
    switch(script){
        case 1:
            script1();
            break;
        case 2:
            script2();
            break;
        case 3:
            script3();
            break;
        case 4:
            script4();
            break;
        default:
            cout<<"Good bye"<<endl;
            break;
    }
    return 0;
}