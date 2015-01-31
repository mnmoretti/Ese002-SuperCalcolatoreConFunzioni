float somma(float a, float b) {
    float risultato;
    
    risultato = a+b;
    
    return risultato;
}

float sottrazione(float a, float b) {
    float risultato;
    
    risultato = a-b;
    
    return risultato;
}

float prodotto(float a, float b) {
    float risultato;
    
    risultato = a*b;
    
    return risultato;
}

float divisione(float a, float b) {
    float risultato;
    
    risultato = a/b;
    
    return risultato;
}

int quoziente(int a, int b) {
    int quoziente;
    
    quoziente = a/b;
    
    return quoziente;
}

float frazionale(int a, int b) {
    float risultato;
	int risultatoIntero;
	
	risultato = (float)a/(float)b;
	
	risultatoIntero = a/b;
	
	risultato -= risultatoIntero;
	
	return risultato;
}

float potenza(float base, int esponente) {
    float risultato = 1;
    int i;
    esponente = (int)esponente;
    
    for(i=0;i<esponente;i++) {
          risultato = risultato*base;
    }
    return risultato;
}




