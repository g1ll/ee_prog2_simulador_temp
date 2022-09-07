#include <cstdlib>
#include <iostream>
#include <iomanip>

#define TIPO double
#define TMAX 40000
class ListaBasica{ // Classe de Armazenamento
  protected:
    unsigned short tam; // Tamanho ocupado da lista
    TIPO v[TMAX]; // Vetor com os dados a serem armazenados
  public:
    ListaBasica(){
      tam = 0; // inicializa a lista com tamanho zero
    }

    int comprimento(){// necess�rio por tam ser privado
      return tam;
    }
};

class Lista : public ListaBasica{ //Defini��o da Classe que herda da classe ListaBasica
  public:
    TIPO primeiro(){
      return v[0];
    }

    TIPO ultimo(){
      return v[tam-1]; //tam-1 por todo vetor come�ar em 0
    }

    bool localiza(TIPO val){
      for (unsigned short i=0; i<tam;i++)
        if (val == v[i])
          return true;
      return false;
    }

    int pos(TIPO val){
      for (unsigned short i=0; i<tam;i++)
        if (val == v[i])
            return i;
      return -1;//posi��o imposs�vel p/ sinalizar � encontrado
    }


    bool insere(TIPO val,unsigned short pos){
      if ((pos>=0)&&(pos<=tam)&&(tam<TMAX)){
        for (unsigned short i=tam; i>pos; i--)  // avan�a todos elementos
          v[i] = v[i-1];
        v[pos] = val;// grava o valor na posi��o
        tam++; // aumenta o tamanho do vetor
        return true;
      }
      return false;
    }

    bool insereI(TIPO val)
    {
      return insere(val,0); //Chamada ao m�todo insere
    }

    bool insereF(TIPO val)
    {
      return insere(val,tam);
    }

    bool delP(unsigned short pos){
      if ((pos>=0)&&(pos<tam))
      {
        for (unsigned short i=pos; i<(tam-1);i++)
          v[i]=v[i+1];
        tam--;// diminui o tamanho do vetor
        return true;
      }
      return false;
    }
    bool delV(TIPO val){
      return delP(pos(val));
    }

    TIPO ler(unsigned short pos){
      if ((pos>=0)&&(pos<tam))
        return v[pos];
      return -1;
    }
};
