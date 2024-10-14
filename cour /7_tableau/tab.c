//tableaux

int main(){
    int t[100];
    int size = 10;
    int nbr;
    for ( int i = 0; i < size; i++){
        nbr = rand()%50;
        t[i] = nbr ;
        //printf("%d\n", t[i]);
        //printf("%d\n", nbr);
        }
    printf("%d\n",somme(t,size));
    printf("%d\n",imaxi(t,size));
    return 0;
}

int mini(int t[], int size){
    int min = t[0] ;
    for (int i = 0; i < size; i++){
        if (t[i] < min){
            min = t[i];
        }
    }
    return min;
}


int imini(int t[], int size){
    int min = t[0] ;
    int ind = 0 ;
    for (int i = 0; i < size; i++){
        if (t[i] < min){
            min = t[i];
            ind = i ;
        }
    }
    return ind;
}

int maxi(int t[], int size){
    int min = t[0] ;
    for (int i = 0; i < size; i++){
        if (t[i] > min){
            min = t[i];
        }
    }
    return min;
}

int imaxi(int t[], int size){
    int min = t[0] ;
    int ind = 0 ;
    for (int i = 0; i < size; i++){
        if (t[i] > min){
            min = t[i];
            ind = i ;
        }
    }
    return ind;
}


int somme(int t[], int size){
    int som = 0 ;
    for (int i = 0; i < size; i++){
        som +=  t[i];
        }
    
    return som;
}


int moyenne(int t[], int size){
    int som = 0 ;
    int moy = 0 ;
    for (int i = 0; i < size; i++){
        som +=  t[i];
        }
    moy = som / size;
    
    return moy;
}

int compte(int t[], int size, int lowest, int highest){
    int com = 0;
    for (int i = 0; i < size; i++){
        if (t[i] < highest && t[i] > lowest){
            com += 1;
        }
    }
 return com;
}

int est_trie(int t[], int size){
    int res = 0;
    for (int i = 0; i < size-1; i++){
        if (t[i]<t[i+1]){
           res = 1;
        }
        if (t[i]>t[i+1]){
            res = -1;
        }
    }
    res = 0;
return res;
}

