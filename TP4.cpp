#include<iostream>
using namespace std;
class Monome{
private:
double coefficient;
double N;
public:
Monome(double coef,double n):coefficient(coef),N(n){}
Monome(const Monome  &autre):coefficient(autre.coefficient),N(autre.N){}
double getCoefficient(){
    return coefficient;
}
double getdegre(){
    return N;
}

friend istream& operator<<(istream &in,Monome &mon){
cout<<"Coefficient";
in>>mon.coefficient;
cout<<"Degre";
in>>mon.N;
}
friend ostream& operator>>(ostream &out,Monome &mon){
out<<"Coefficient: "<<mon.coefficient;
out<<"Degre : "<<mon.N;
}
friend Monome operator+(const Monome &autre)const{
    Monome res;

    if (N == autre.N) {
        res.coefficient = coefficient + autre.coefficient;
        res.N = N;
    } 
    else {
        
        res.coefficient = 0;
        res.N = 0;
    }

    return res;
}

friend Monome operator*(const Monome &autre) const {
    Monome res;
    res.coefficient = coefficient * autre.coefficient;
    res.N = N + autre.N;
    return res;
}

friend Monome operator==(istream &in,Monome &mon)const{

}
friend Monome operator<(istream &in,Monome &mon)const{

}
};
