// ***************************** SIEVE ******************************************

// sqrt(1e9) < 32000
int N_sqrt_1e9 = 32000;
bool sieve[32000];
void createSieve(){
    int n=N_sqrt_1e9;
    for(int i=0; i<n; i++){
        sieve[i]=1;
    }
    for(int i=2; i*i<n; i++){
        if(sieve[i]==1){
            for(int j=i*i; j<n; j += i){
                sieve[j]=0;
            }
        }
    }
}
// let k>32000 and have to check if k is prime 
// check if prime[i] is factor of k or not if not then k is prime .... think yourself

// storing primes upto 32000
vector<int> Primes_in_vector(){
    createSieve();
    vector<int> v;
    for(int i=0; i<N_sqrt_1e9; i++){
        if(sieve[i]){
            v.push_back(i);
        }
    }
    return v;
}

// ****************************** END ****************************
