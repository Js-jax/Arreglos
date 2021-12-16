#include <iostream>
#include <conio.h>

using namespace std;

class examen
{
public:
  int n, m, opc;
  int A[20], B[20], C[20];

  void opcion();
  void suma();
  void resta();
  void multi();
  void division();
  void sumacons();
  void promedio();
  void concat();
};

void examen::opcion()
{
  cout << "Elige la operacion que deseas realizar 1. Suma de dos arreglos 2 -  Resta de dos arreglos 3 - Multiplicaciónde dos arreglos 4 - Divisiónde dos arreglos 5 - Suma consecutivade un arreglo 6 - Calcular promediode un arreglo 7 - Concatenaciónde dos arreglos 8 - Salir ";
}

void examen::suma()
{
  cout << "Suma:" << endl;
  do
  {
    do
    {
      cout << "Ingresa el tamaC1o del primer arreglo de mayor a 0 y menor a 20: ";
      cin >> n;

    } while (n < 0 || n > 20);
    cout << n << endl;

    do
    {
      cout << "Ingresa el tamaC1o del segundo arreglo  mayor a 0 y menor a 20: ";
      cin >> m;

    } while (m < 0 || m > 20);
    cout << m << endl;

    if (n == 0 && m == 0)
    {
      cout << "La suma es nula" << endl;
    }
  } while (n == 0 && m == 0);

  cout << "Ingresa el primer valor " << endl;

  for (int i = 0; i < n; i++)
  {
    cout << "--------" << endl;
    cin >> A[i];
  }

  cout << " Ingrese el segundo valor " << endl;

  for (int i = 0; i < m; i++)
  {
    cout << "--------" << endl;
    cin >> B[i];
  }
  /***************************
   *
   *            SUMA
   *
   * *************************/
  cout << "La suma es: " << endl;

  if (n > m)
  {
    for (int i = 0; i < m; i++)
    {

      C[i] = A[i] + B[i];

      cout << "Suma: " << C[i] << endl;
    }
  }

  for (int i = m; i <= n - 1; i++)
  {
    C[i] = A[i];
    cout << "Sobrante: " << C[i] << endl;
  }

  if (m > n)
  {
    for (int i = 0; i < n; i++)
    {

      C[i] = A[i] + B[i];
      cout << "Suma: " << C[i] << endl;
    }
  }

  for (int i = n; i <= m - 1; i++)
  {
    C[i] = B[i];
    cout << "Sobrante: " << C[i] << endl;
  }

  if (m == n)
    for (int i = 0; i < n; i++)
    {

      C[i] = A[i] + B[i];
      cout << "Suma: [" << C[i] << "]" << endl;
    }
}

void examen::resta()
{

  cout << "Resta: " << endl;
  do
  {
    do
    {
      cout << "Ingresa el tamaC1o del primer arreglo de mayor a 0 y menor a 20: ";
      cin >> n;

    } while (n < 0 || n > 20);
    cout << n << endl;

    do
    {
      cout << "Ingresa el tamaC1o del segundo arreglo  mayor a 0 y menor a 20: ";
      cin >> m;

    } while (m < 0 || m > 20);
    cout << m << endl;

    if (n == 0 && m == 0)
    {
      cout << "La suma es nula" << endl;
    }
  } while (n == 0 && m == 0);

  cout << "Ingresa el primer valor " << endl;

  for (int i = 0; i < n; i++)
  {
    cout << "--------" << endl;
    cin >> A[i];
  }

  cout << " Ingrese el segundo valor " << endl;

  for (int i = 0; i < m; i++)
  {
    cout << "--------" << endl;
    cin >> B[i];
  }

  /***************************
   *
   *      RESTA
   *
   * *************************/
  cout << "La Resta es: " << endl;

  if (n > m)
  {
    for (int i = 0; i < m; i++)
    {

      C[i] = A[i] - B[i];

      cout << "Resta: " << C[i] << endl;
    }
  }

  for (int i = m; i <= n - 1; i++)
  {
    C[i] = A[i];
    cout << "Sobrante: " << C[i] << endl;
  }

  if (m > n)
  {
    for (int i = 0; i < n; i++)
    {

      C[i] = A[i] - B[i];
      cout << "Resta: " << C[i] << endl;
    }
  }

  for (int i = n; i <= m - 1; i++)
  {
    C[i] = B[i];
    cout << "Sobrante: " << C[i] << endl;
  }

  if (m == n)
    for (int i = 0; i < n; i++)
    {

      C[i] = A[i] - B[i];
      cout << "Resta: [" << C[i] << "]" << endl;
    }
}

void examen::multi()
{
  cout << "Multiplicacion: " << endl;

  do
  {
    do
    {
      cout << "Ingresa el tamaC1o del primer arreglo de mayor a 0 y menor a 20: ";
      cin >> n;

    } while (n < 0 || n > 20);
    cout << n << endl;

    do
    {
      cout << "Ingresa el tamaC1o del segundo arreglo  mayor a 0 y menor a 20: ";
      cin >> m;

    } while (m < 0 || m > 20);
    cout << m << endl;

    if (n == 0 && m == 0)
    {
      cout << "La suma es nula" << endl;
    }
  } while (n == 0 && m == 0);

  cout << "Ingresa el primer valor " << endl;

  for (int i = 0; i < n; i++)
  {
    cout << "--------" << endl;
    cin >> A[i];
  }

  cout << " Ingrese el segundo valor " << endl;

  for (int i = 0; i < m; i++)
  {
    cout << "--------" << endl;
    cin >> B[i];
  }

  /***************************
   *
   *      Multipicacion
   *
   * *************************/
  cout << "La Multiplicacion es: " << endl;

  if (n > m)
  {
    for (int i = 0; i < m; i++)
    {

      C[i] = A[i] * B[i];

      cout << "Multiplicacion: " << C[i] << endl;
    }
  }

  for (int i = m; i <= n - 1; i++)
  {
    C[i] = A[i];
    cout << "Sobrante: " << C[i] << endl;
  }

  if (m > n)
  {
    for (int i = 0; i < n; i++)
    {

      C[i] = A[i] * B[i];
      cout << "Multiplicacion: " << C[i] << endl;
    }
  }

  for (int i = n; i <= m - 1; i++)
  {
    C[i] = B[i];
    cout << "Sobrante: " << C[i] << endl;
  }

  if (m == n)
    for (int i = 0; i < n; i++)
    {

      C[i] = A[i] * B[i];
      cout << "Multiplicacion: [" << C[i] << "]" << endl;
    }
}

void examen::division()
{
  cout << "Division: " << endl;

  do
  {
    do
    {
      cout << "Ingresa el tamaC1o del primer arreglo de mayor a 0 y menor a 20: ";
      cin >> n;

    } while (n < 0 || n > 20);
    cout << n << endl;

    do
    {
      cout << "Ingresa el tamaC1o del segundo arreglo  mayor a 0 y menor a 20: ";
      cin >> m;

    } while (m < 0 || m > 20);
    cout << m << endl;

    if (n == 0 && m == 0)
    {
      cout << "La suma es nula" << endl;
    }
  } while (n == 0 && m == 0);

  cout << "Ingresa el primer valor " << endl;

  for (int i = 0; i < n; i++)
  {
    cout << "--------" << endl;
    cin >> A[i];
  }

  cout << " Ingrese el segundo valor " << endl;

  for (int i = 0; i < m; i++)
  {
    cout << "--------" << endl;
    cin >> B[i];
  }

  /***************************
   *
   *      Division
   *
   * *************************/
  cout << "La Division es: " << endl;

  if (n > m)
  {
    for (int i = 0; i < m; i++)
    {

      C[i] = A[i] - B[i];

      cout << "Division: " << C[i] << endl;
    }
  }

  for (int i = m; i <= n - 1; i++)
  {
    C[i] = A[i];
    cout << "Sobrante: " << C[i] << endl;
  }

  if (m > n)
  {
    for (int i = 0; i < n; i++)
    {

      C[i] = A[i] - B[i];
      cout << "Division: " << C[i] << endl;
    }
  }

  for (int i = n; i <= m - 1; i++)
  {
    C[i] = B[i];
    cout << "Sobrante: " << C[i] << endl;
  }

  if (m == n)
    for (int i = 0; i < n; i++)
    {

      C[i] = A[i] - B[i];
      cout << "Division: [" << C[i] << "]" << endl;
    }
}

void examen::sumacons()
{

  int a = 0, b = 0, res = 0;

  cout << "Ingrese el valor inicial: " << endl;
  cin >> a;
  cout << "Ingrese el valor final: " << endl;
  cin >> b;

  if (a < b)
  {
    cout << "\nLa res de la sucecion es:" << endl;
    for (a; a <= b; a++)
      res += a;
    cout << "--> " << res << endl;
  }

  else if (a > b)
  {
    cout << "\nLa suma de la sucesion es:" << endl;

    for (b; b <= a; b++)
      res += b;
    cout << "--> " << res << endl;
  }
}

void examen::promedio()
{

  int A[50], n;
  float prom, sum = 0;

  cout << " Ingresa el tamano de las materias a evaluar: ";
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    cout << "valores [" << i << "]:";
    cin >> A[i];
    sum = sum + A[i];
  }
  prom = sum / n;
  cout << "los elementos son: " << endl;
  for (int i = 0; i < n; i++)
  {
    cout << " " << A[i] << endl;
  }
  cout << "La suma es:" << sum << endl;
  cout << "El promedio es: " << prom;
}

void examen::concat()
{

  cout << "Ingresa el tamaC1o del primer arreglo de mayor a 0 y menor a 20: ";
  cin >> n;

  cout << "Ingresa el tamaC1o del segundo arreglo  mayor a 0 y menor a 20: \n";
  cin >> m;

  cout << "Ingresa valores a concatenar  " << endl;

  for (int i = 0; i < n; i++)
  {
    cout << "--------" << endl;
    cin >> A[i];
  }

  cout << " Ingrese los valores a concatenar  " << endl;

  for (int i = 0; i < m; i++)
  {
    cout << "--------" << endl;
    cin >> B[i];
  }

  for (int i = n + 1; i <= m; i++)
  {
    C[i] = B[i];
    cout << "Sobrante b" << C[i] << endl;
  }
}
int main()
{

  examen retorno;
  int opc;
  int opc2;

  retorno.opcion();
  cin >> opc;

  do
  {

    if (opc == 1)
    {

      do
      {
        retorno.suma();
        cout << "\nDesea realizar otra suma? \nSi[1]  No[2]" << endl;
        cin >> opc2;

      } while (opc2 == 1);
    }
  } while (opc2 == 1);

  do
  {

    if (opc == 2)
    {

      do
      {
        retorno.resta();
        cout << "\nDesea realizar otra resta? \nSi[1]  No[2]" << endl;
        cin >> opc2;

      } while (opc2 == 1);
    }
  } while (opc2 == 1);

  do
  {

    if (opc == 3)
    {

      do
      {
        retorno.multi();
        cout << "\nDesea realizar otra Multiplicacion? \nSi[1]  No[2]" << endl;
        cin >> opc2;

      } while (opc2 == 1);
    }
  } while (opc2 == 1);

  do
  {

    if (opc == 4)
    {

      do
      {
        retorno.division();
        cout << "\nDesea realizar otra Division \nSi[1]  No[2]" << endl;
        cin >> opc2;

      } while (opc2 == 1);
    }
  } while (opc2 == 1);

  do
  {

    if (opc == 5)
    {

      do
      {
        retorno.sumacons();
        cout << "\nDesea realizar otra Division \nSi[1]  No[2]" << endl;
        cin >> opc2;

      } while (opc2 == 1);
    }
  } while (opc2 == 1);

  do
  {

    if (opc == 6)
    {

      do
      {
        retorno.promedio();
        cout << "\nDesea volver a calcular el promedio \nSi[1]  No[2]" << endl;
        cin >> opc2;

      } while (opc2 == 1);
    }
  } while (opc2 == 1);

  do
  {

    if (opc == 7)
    {

      do
      {
        retorno.concat();
        cout << "\nDesea volver a concatenar \nSi[1]  No[2]" << endl;
        cin >> opc2;

      } while (opc2 == 1);
    }
  } while (opc2 == 1);
}