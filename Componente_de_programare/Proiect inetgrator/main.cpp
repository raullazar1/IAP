#include <iostream>
#include <string.h>
#include <fstream>

using namespace std;

void L(int valoare, int bin[], int poz)
    {
        bin[poz]=bin[poz+1]=bin[poz+2]=bin[poz+3]=bin[poz+4]=bin[poz+5]=bin[poz+6]=0;
        switch(valoare)
        {
        case 0: // 0001101
        bin[poz+3]=bin[poz+4]=bin[poz+6]=1;
        break;
        case 1: // 0011001
        bin[poz+2]=bin[poz+3]=bin[poz+6]=1;
        break;
        case 2: // 0010011
        bin[poz+2]=bin[poz+5]=bin[poz+6]=1;
        break;
        case 3: // 0111101
        bin[poz+1]=bin[poz+2]=bin[poz+3]=bin[poz+4]=bin[poz+6]=1;
        break;
        case 4: // 0100011
        bin[poz+1]=bin[poz+5]=bin[poz+6]=1;
        break;
        case 5: // 0110001
        bin[poz+1]=bin[poz+2]=bin[poz+6]=1;
        break;
        case 6: // 0101111
        bin[poz+1]=bin[poz+3]=bin[poz+4]=bin[poz+5]=bin[poz+6]=1;
        break;
        case 7: // 0111011
        bin[poz+1]=bin[poz+2]=bin[poz+3]=bin[poz+5]=bin[poz+6]=1;
        break;
        case 8: // 0110111
        bin[poz+1]=bin[poz+2]=bin[poz+4]=bin[poz+5]=bin[poz+6]=1;
        break;
        case 9: // 0001011
        bin[poz+3]=bin[poz+5]=bin[poz+6]=1;
        break;
    }
}

void G(int valoare, int bin[], int poz)
    {
        bin[poz]=bin[poz+1]=bin[poz+2]=bin[poz+3]=bin[poz+4]=bin[poz+5]=bin[poz+6]=0;
        switch(valoare)
        {
        case 0: // 1110010
        bin[poz]=bin[poz+1]=bin[poz+2]=bin[poz+5]=1;
        break;
        case 1: // 1100110
        bin[poz+2]=bin[poz+3]=bin[poz+6]=1;
        break;
        case 2: // 1101100
        bin[poz+2]=bin[poz+5]=bin[poz+6]=1;
        break;
        case 3: // 0100001
        bin[poz+1]=bin[poz+6]=1;
        break;
        case 4: // 0011101
        bin[poz+2]=bin[poz+3]=bin[poz+4]=bin[poz+6]=1;
        break;
        case 5: // 0111001
        bin[poz+1]=bin[poz+2]=bin[poz+3]=bin[poz+6]=1;
        break;
        case 6: // 0000101
        bin[poz+4]=bin[poz+6]=1;
        break;
        case 7: // 0010001
        bin[poz+2]=bin[poz+6]=1;
        break;
        case 8: // 0001001
        bin[poz+3]=bin[poz+6]=1;
        break;
        case 9: // 0010111
        bin[poz+2]=bin[poz+4]=bin[poz+5]=bin[poz+6]=1;
        break;
    }
}

void R(int valoare, int bin[], int poz)
    {
        bin[poz]=bin[poz+1]=bin[poz+2]=bin[poz+3]=bin[poz+4]=bin[poz+5]=bin[poz+6]=0;
        switch(valoare)
        {
        case 0: // 0100111
        bin[poz+1]=bin[poz+4]=bin[poz+5]=bin[poz+6]=1;
        break;
        case 1: // 0110011
        bin[poz+1]=bin[poz+2]=bin[poz+5]=bin[poz+6]=1;
        break;
        case 2: // 0011011
        bin[poz+2]=bin[poz+3]=bin[poz+5]=bin[poz+6]=1;
        break;
        case 3: // 1000010
        bin[poz]=bin[poz+5]=1;
        break;
        case 4: // 1011100
        bin[poz]=bin[poz+2]=bin[poz+3]=bin[poz+4]=1;
        break;
        case 5: // 1001110
        bin[poz]=bin[poz+3]=bin[poz+4]=bin[poz+5]=1;
        break;
        case 6: // 1010000
        bin[poz]=bin[poz+2]=1;
        break;
        case 7: // 1000100
        bin[poz]=bin[poz+4]=1;
        break;
        case 8: // 1001000
        bin[poz]=bin[poz+3]=1;
        break;
        case 9: // 1110100
        bin[poz]=bin[poz+1]=bin[poz+2]=bin[poz+4]=1;
        break;
    }
}

void desenare_cod(char denumire[], int b[95]) {
    fstream cod;
    int i;

    cod.open( "cod.html", ios::out);
    cod << "<!DOCTYPE html>" << endl;
    cod << "<html>" << endl;
    cod << "<body>" << endl;
    cod << "<h3>Acestea este codul pentru produsul " << denumire <<"</h3>" << endl;
    cod << "<svg height=\"50\" width=\"200\">" << endl;
    // Doi pixeli pentru fiecare bara
    int pozx = 10; // De la acest x incep trasarea
    for(i=0; i<95; i++)
    {
    if(b[i] == 1) // Se traseaza o linie
    cod << "<line x1=\"" << pozx << "\" y1=\"20\" x2=\"" << pozx
    << "\" y2=\"50\" style=\"stroke:rgb(0,0,0); stroke-width:2\" />"
    << endl;
    pozx = pozx + 2; // Avans cu 2px, indiferent daca s-a trasat sau nu
    }
    cod << "</svg>" << endl;
    cod << "</body>" << endl;
    cod << "</html>" << endl;
    cod.close();
}

int main()
{

   char codDat[10], denumire[21];
   int S, s1, s2;

    cout << "Introduceti denumirea produsului (max. 20 caractere): ";
    cin >> denumire;

    cout << "Introduceti codul produsului (max. 9 cifre, fara spatii): ";
    cin >> codDat;

    int lungime = strlen(codDat);

// Verificarea numarului de caractere

    while(lungime >= 10) {
        cout << "Lungimea codului este de " << lungime << endl;
        cout << "Te rog reintrodu codul produsului (max. 9 cifre, fara spatii): ";
        cin >> codDat;

        lungime = strlen(codDat);
        cout << "Lungimea sirului este: " << lungime << endl;
    }

    cout << "Codul se deseneaza. Aceseasa pagina cod.html";

//Adaugare daca sirul este mai mic.
    int i = 0;
    char sirSapte[9] = ""; // sirul initial este vid
    if(lungime < 9) {
        int j;
        for(j=0; j<9-lungime; j++)
        sirSapte[j] = '7';
        // Limitez sirSapte la dreapta adaugandu-i un caracter '\0'
        sirSapte[j] = '\0';
    }

    char codRO[] = "594";

    char ean13[13]; // 13 caractere, 12+1
    strcpy(ean13, codRO);
    strcat(ean13, sirSapte);
    strcat(ean13, codDat);

    // Convertim caracterele in valori numerice intregi (int)
    int nean13[13]; // Pentru rezultate
    for(i=0; i<12; i++)
    nean13[i] = ean13[i] - '0';

    s1 = s2 = 0;
    for(i=0; i<12; i=i+2) {
        s1 =s1 + nean13[i];
        s2 =s2 + nean13[i+1];
    }
    S = s1 + 3*s2;
    nean13[12] = 10 - S%10; // Cifra de control

    int b[95];
    // Se codifica inceputul: 101
    b[0]=b[2]=1;
    b[1]=0;

    // Se codifica prima parte a codului (6 caractere, nean13[1] la nean13[6]);
    L(nean13[1], b, 3); // Primul, nean13[1]. Se apeleaza functia L
    G(nean13[2], b, 10); // Car. 2, se apeleaza functia G
    G(nean13[3], b, 17); // Car. 3, se apeleaza functia G
    L(nean13[4], b, 24); // Car. 4, se apeleaza functia L
    L(nean13[5], b, 31); // Car. 5, se apeleaza functia L
    G(nean13[6], b, 38); // Car. 6, se apeleaza functia G
//    // Se codifica zona de separare din mijloc, 01010:
    b[45]=b[47]=b[49]=0;
    b[46]=b[48]=1;
    // Se codifica partea a doua a codului (nean13[7] la nean13[12]).
    // Pentru toate se apelează funcţia R():
    for(i=0; i<6; i++)
        R(nean13[7+i], b, 50+i*7);
    // Se codifica partea finala a codului, 101:
    b[92] = b[94] = 1;
    b[93] = 0;

    desenare_cod(denumire, b);

    return 0;
}
