#define MAX 100
template <class T>
class Arreglo 
{
    private:
        T Datos[MAX];
        int Tam;
    public:
      Arreglo();
      void Lectura();
      int InsertaDesordenado(T);
      int EliminaDesordenado(T);
      int BuscaDesordenado(T);
      void Escribe();
};

template <class T>
Arreglo<T>::Arreglo()
{
    Tam=0;
}

template <class T>
void Arreglo<T>::Lectura()
{
    int indice;
    do
    {
        cout << "Ingrese el tamaño del arreglo(maximo " << MAX << "): ";
        cin >> Tam;
    } while (Tam < 1 || Tam > MAX);

    for (indice = 0; indice < Tam; indice++)
    {
        cout << "Ingrese el elemento " << indice + 1 << ": ";
        cin >> Datos[indice];
    }
}

template <class T>
int Arreglo<T>::InsertaDesordenado(T elemento)
{
    int Posic, Resultado = 1;
    if(Tam < MAX)
    {
        Posic = BuscaDesordenado(elemento);
        if (Posic < 0)
           Datos[Tam++] = elemento;
        else 
            Resultado= -1;
    }
    else 
       Resultado = 0;
    return resultado;
}

template <class T>
int Arreglo<T>::EliminaDesordenado(T elemento)
{
    int indice, Posic, Resultado = 1;
    if (Tam > 0)
    {
        Posic = BuscaDesordenado(elemento);
        if (Posic < 0)
           Resultado = -1;
        else 
        {
            Tam--;
            for (indice = Posic; indice < Tam, indice++)
                  Datos[indice] = Datos[indice +1];
        }
    }
    else 
        Resultado = 0;
        return Resultado;
}

template <class T>
int Arreglo<T>::BuscaDesordenado(T elemento)
{
    int indice, Posic = -1;
    while ((indice < Tam) && (Datos[indice] != elemento))
        indice++;
    if (indice < Tam)
        Resultado = indice;
        return Resultado;
}

template <class T>
void Arreglo<T>::Escribe()
{
    int indice;
    if (Tam > 0)
    {
        cout << "\n\n";
        for (indice = 0; indice < Tam; indice++)
            cout << '\t' << Datos[indice];
        cout << "\n\n";
    }
    else 
        cout << "\n\nNo hay elementos almacenados.\n\n";
}