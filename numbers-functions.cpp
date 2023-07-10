/* 
Author: Lasha Zibzibadze
Course: CSCI-135
Instructor: Genady Maryash

Number Manipulations
*/
#include <iostream>

using namespace std;


bool isPrime(int n){


    for(int i=2; i < n; i++){
        if(n % i ==0){
            return false;
        }

    }
    if(n < 2){
        return false;
    }
    

    return true;

}

bool isTwinPrime(int n){
    if(isPrime(n+2) && isPrime(n) || isPrime(n-2) && isPrime(n) ){
        return true;
    }
    else{
        return false;
    }






}

int nextPrime(int n){
    int prime= n;
    bool search_next_prime= false;
    
    if(n < 2){
        return 2;
    }
    while(!search_next_prime){
        prime++;

        if(isPrime(prime) == true){
            search_next_prime= true;
        }

    }


    return prime;
}

int countPrimes(int a, int b){
    int counter= 0;

    for( int k=a; k<=b; k++){
        if(isPrime(k)){
            counter++;
        }


    }

    return counter;


}

int nextTwinPrime(int n){
    int twinprime= n;
    bool search_next_twin= false;
    while(!search_next_twin){

        twinprime++;
        if(isTwinPrime(twinprime)){
            search_next_twin= true;
        }
    }
    return twinprime;





}

int largestTwinPrime(int a,int b){

    int largest_twin= 0;

    for(int p= b; p >= a; p--){
        if(isTwinPrime(p)){
            largest_twin= p;
        }
        if(largest_twin>0){
            break;
        }

    }

    if(largest_twin == 0){
        largest_twin= -1;
    }

    

    return largest_twin;




    
}
// largestTwinPrime(5, 18) == 17
// largestTwinPrime(1, 31) == 31
// largestTwinPrime(14, 16) == -1




int main(){
    int x= 17,y= 20;
    // cout<< "Enter numbers: ";
    // cin>>x>>y;
    cout<< largestTwinPrime(0, 15485661);





    return 0;
}



